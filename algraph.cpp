#include "algraph.h"
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<queue>
#include<stack>
#include<algorithm>
#include <QtSql>

#define INF 0xfffff
using namespace std;
void callPyCrawler(const std::string& date, const std::string& from_station, const std::string& to_station) {
    std::string command = "crawler.exe " + date + " " + from_station + " " + to_station;
    FILE* pipe = _popen(command.c_str(), "r");
    _pclose(pipe);
}
void DayTime::changetoday() {              //确定当天日期
    qDebug()<< "请输入年 月 日";
    cin >> year >> month >> day;
}
QString DayTime::theday(int yy, int mm, int dd, int addm) {   //计算某一天经过n分钟后的日期并输出
    int monthday[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0) {
        monthday[2]++;
    }
    dd = dd + addm / 1440;
    if (dd > monthday[mm]) {
        dd -= monthday[mm];
        mm++;
        if (mm > 12) {
            yy++;
            mm -= 12;
        }
    }
    int aminute = addm % 60;
    int ahour = (addm % 1440) / 60;
    return QString("预计到达时间：%1月 %2日 %3:%4").arg(mm).arg(dd).arg(ahour,2,10,QChar('0')).arg(aminute,2,10,QChar('0'));
}

const Time getTimeByMinute(int minute) {
    int day = minute / 1440;
    minute -= day * 1440;
    int hour = minute / 60;
    minute -= hour * 60;
    return Time(hour, minute, day);
}

// Time 对象的"<"重载，实现两个 Time 对象的比较
bool operator < (Time t1, Time t2) {
    return ((t1.day * 1440 + t1.hour * 60 + t1.minute) < (t2.day * 1440 + t2.hour * 60 + t2.minute));
}

// Time 对象的"-"重载，实现两 Time 对象做减法，默认 t2 晚于 t1 时才可以做减法
Time operator - (Time t1, Time t2) {

    Time tmp_t;

    tmp_t.minute = t1.minute - t2.minute;
    if (tmp_t.minute < 0) {
        tmp_t.minute += 60;
        --t1.hour;
    }

    tmp_t.hour = t1.hour - t2.hour;
    if (tmp_t.hour < 0) {
        tmp_t.hour += 24;
        --t1.day;
    }

    tmp_t.day = t1.day - t2.day;

    return tmp_t;
}
//'>>' 重载，实现"hour:minute,+day" 的存储
istream& operator >> (istream& in, Time& time) {
    int minute, hour;
    char c;
    in >> hour >> c >> minute;
    time.day = 0;
    time.minute = minute;
    time.hour = hour;
    return in;
}

//运算符'<<'重载以美化 Time 对象的输出
QDebug operator<<(QDebug out, const Time& time){
    //数据之间空白用'0'填充
    out<<time.hour<<':'<<time.minute;
    return out;
}

//运算符'<<'重载以美化 LineNode 对象的输出
QDebug operator << (QDebug out, const LineNode& line) {

    qDebug() << "出发城市|到达城市|班次名|出发时间|到达时间|路程用时|路程票价" ;
    qDebug() << QString::fromStdString(line.show_start) << " "<< QString::fromStdString(line.show_end)
             << " " << QString::fromStdString(line.amount) << " ";
    // 修改 fill() 的默认填充符为 0
    qDebug() << line.start_time << " " << line.end_time
             << " " << line.spend_time << " " << line.spend_money << ' ';
    switch (line.kind) {
    case 1:
        qDebug() << "飞机" << ' ';
        break;
    case 2:
        qDebug() << "火车" << ' ';
        break;
    case 3:
        qDebug() << "汽车" << ' ';
        break;
    default:
        break;
    }
    return out;
}

ALGraph::ALGraph(QObject *parent)
    : QObject{parent}
{
    line_num = 0;
    city_num = 0;
    mkind = 1;                  //选择哪种票，1-飞机，2-火车，3-汽车，初始为飞机票
    together = false;           //是否可换乘，初始为否，ui设计时可根据ui按钮的初始状态调整
    //addCityFromFile("FlightCity.txt");
    //addCityFromFile("TrainCity.txt");
    //addLineSQL();
}


//查询城市是否存在
bool ALGraph::ifCityExist(const std::string& city_name) {  // 查询城市是否存在

    auto it = m.find(Vnode(city_name));
    if (it != m.cend()) {
        return true;
    }
    else {
        return false;
    }

}

float ALGraph::gettotalcost(vector<LineNode> &path)
{
    float sum=0;
    for(auto p:path){
        sum+=p.spend_money;
    }
    return sum;
}

//查询城市编号，找到返回序号，找不到返回-1
int ALGraph::searchCityNum(const string& city_name) {

    auto it = m.cbegin();
    while (it != m.cend()) {
        if (city_name == it->first.start_city_name) {
            return (*it).first.city_id;
        }

        ++it;
    }

    return -1;
}//searchCityNum

// 手动添加城市
void ALGraph::addCity(const string& city_name) {

    if (ifCityExist(city_name)) {
        qDebug() << "该城市已经存在，无需重复添加！";
        return;
    }
    m.insert({ Vnode(city_name, city_num), vector<LineNode>() });
    ++city_num;
}
void addCitytoSQL(const string& city_name) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db");
    db.setUserName("root");
    db.setPassword("QAZ123wsx");
    QString tableName = "city_info";

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.\n";
    }
    QSqlQuery query;
    query.prepare(QString("INSERT INTO %1 (city) "
                          "VALUES (?)").arg(tableName));
    query.addBindValue(QString::fromStdString(city_name));

    if (!query.exec()) {
        qDebug() << "Error inserting into" << tableName << "table:" << query.lastError();
    }
}
void ALGraph::addCityFromSQL() {
    qDebug() << "开始从数据库中读入并添加城市！" ;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db");
    db.setUserName("root");
    db.setPassword("QAZ123wsx");

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.\n";
    }
    // 读取城市名
    QSqlQuery query(QString("SELECT * FROM city_info"));
    while (query.next()) {
        string name = query.value("city").toString().toStdString();
        addCity(name);
    }
    string line;
    qDebug() << "城市导入完毕，当前系统中有" << city_num << "个城市！";
}//addCityFromFile

//手动添加线路
void ALGraph::addLine(LineNode&line) {
    if (!ifCityExist(line.start_city_name)) {
        addCity(line.start_city_name);
        addCitytoSQL(line.start_city_name);
    }
    if (!ifCityExist(line.end_city_name)) {
        addCity(line.end_city_name);
        addCitytoSQL(line.end_city_name);
        return;
    }

    auto it = m.find(Vnode(line.start_city_name));
    if (it != m.end()) {
        (*it).second.push_back(LineNode(line.start_city_name, line.end_city_name, line.start_time, line.end_time,
                                        line.spend_time, line.spend_money, line.amount, line.kind,
                                        line.start_city_name,line.end_city_name));
    }

    ++line_num;
    qDebug()<<"现在路线数："<<line_num;

}//addLine

void addLinetoSQL(LineNode&line) {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db");
    db.setUserName("root");
    db.setPassword("QAZ123wsx");
    QString tableName = "travel_info";

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.\n";
    }
    QSqlQuery query;
    query.prepare(QString("INSERT INTO %1 (start_city_name, end_city_name, start_hour, start_minute, start_day, "
                          "end_hour, end_minute, end_day, spend_hour, spend_minute, spend_day, spend_money, amount, kind) "
                          "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)").arg(tableName));
    query.addBindValue(QString::fromStdString(line.start_city_name));
    query.addBindValue(QString::fromStdString(line.end_city_name));
    query.addBindValue(line.start_time.hour);
    query.addBindValue(line.start_time.minute);
    query.addBindValue(line.start_time.day);
    query.addBindValue(line.end_time.hour);
    query.addBindValue(line.end_time.minute);
    query.addBindValue(line.end_time.day);
    query.addBindValue(line.spend_time.hour);
    query.addBindValue(line.spend_time.minute);
    query.addBindValue(line.spend_time.day);
    query.addBindValue(line.spend_money);
    query.addBindValue(QString::fromStdString(line.amount));
    query.addBindValue(line.kind);

    if (!query.exec()) {
        qDebug() << "Error inserting into" << tableName << "table:" << query.lastError();
    }
}

int ALGraph::getarrivaltime(vector<LineNode>& path) {    //得到到达时刻
    if(path.empty()){return 0;}
    int time_sum = path.at(0).start_time.getTotalMintue();
    for (size_t i = 0; i < path.size(); ++i) {
        if (i == 0) {  // 某路径的第一条线路，不用考虑隔天等待的问题
            time_sum += path.at(i).spend_time.getTotalMintue();
        }
        else {  // 需要考虑中转时，隔天等待的问题
            if (path.at(i - 1).end_time < path.at(i).start_time) {  // 可以当天中转下一班次，不用等待

                time_sum += path.at(i).spend_time.getTotalMintue();
            }
            else {  // 不能当天中转下一班次，需要隔一天

                Time next_station_start_time = path.at(i).start_time;
                next_station_start_time.day += 1;
                time_sum = time_sum + (next_station_start_time - path.at(i - 1).end_time).getTotalMintue()
                           + path.at(i).spend_time.getTotalMintue();
            }
        }
    }
    return time_sum;
}


//从文件中读取以添加线路 //
void ALGraph::addLinefromSQL() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db");
    db.setUserName("root");
    db.setPassword("QAZ123wsx");

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.\n";
    }
    int temp_line_num = line_num;
    QSqlQuery query(QString("SELECT * FROM travel_info"));
    while (query.next()) {
        string start_city_name = query.value("start_city_name").toString().toStdString();
        string end_city_name = query.value("end_city_name").toString().toStdString();
        int start_hour = query.value("start_hour").toInt();
        int start_minute = query.value("start_minute").toInt();
        int start_day = query.value("start_day").toInt();
        int end_hour = query.value("end_hour").toInt();
        int end_minute = query.value("end_minute").toInt();
        int end_day = query.value("end_day").toInt();
        int spend_hour = query.value("spend_hour").toInt();
        int spend_minute = query.value("spend_minute").toInt();
        int spend_day = query.value("spend_day").toInt();
        int spend_money = query.value("spend_money").toInt();
        string amount = query.value("amount").toString().toStdString();
        int kind = query.value("kind").toInt();
        Time start_time(start_hour,start_minute,start_day);
        Time end_time(end_hour,end_minute,end_day);
        Time spend_time(spend_hour,spend_minute,spend_day);
        auto it = m.find(Vnode(start_city_name));
        if (it != m.end()) {
            (*it).second.push_back(LineNode(start_city_name, end_city_name, start_time, end_time, spend_time,
                                            spend_money, amount, kind, start_city_name, end_city_name));
            ++line_num;
        }
        qDebug()<<start_city_name;
    }

    qDebug() << "从数据库中导入了 "
             << line_num - temp_line_num << " 条路线信息！";
}//addLineFromFile

// 删除城市，并删除以该城市为起点与终点的航班和列车
void ALGraph::delCity(const string& city_name) {

    if (!ifCityExist(city_name)) {

        qDebug()<<QString::fromStdString(city_name)<<"不存在！请重新输入正确的城市名或者新建该城市！";
        return;
    }

    qDebug() << "正在删除" << QString::fromStdString(city_name) << "城市及其相关线路！" ;
    city_num = city_num - 1;

    // 删除以该城市为起点的线路数据
    auto key = Vnode(city_name);
    auto _it = m.find(key);
    if (_it != m.end()) {
        line_num = line_num - (*_it).second.size();
        m.erase(key);
    }

    // 删除以该城市为终点的线路数据
    for (auto it = m.begin(); it != m.end(); ++it) {

        auto& vec = (*it).second;
        auto beg = vec.begin();
        while (beg != vec.end()) {
            if ((*beg).end_city_name == city_name) {
                beg = vec.erase(beg);
                line_num = line_num - 1;
            }
            else {
                ++beg;
            }
        }
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db"); // 数据库名
    db.setUserName("root"); // 替换为你的用户名
    db.setPassword("QAZ123wsx"); // 替换为你的密码

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.";
    }
    QSqlQuery query("SELECT * FROM travel_info");
    while (query.next()) {

        QSqlQuery deleteQuery;
        deleteQuery.prepare("DELETE FROM travel_info WHERE start_city_name = ? OR end_city_name = ?");
        deleteQuery.addBindValue(QString::fromStdString(city_name));
        deleteQuery.addBindValue(QString::fromStdString(city_name));

        if (!deleteQuery.exec()) {
            qDebug() << "Error deleting from train table:" << deleteQuery.lastError();
        }

    }
    QSqlQuery query1("SELECT * FROM city_info");
    while (query1.next()) {

        QSqlQuery deleteQuery;
        deleteQuery.prepare("DELETE FROM travel_info WHERE city = ?");
        deleteQuery.addBindValue(QString::fromStdString(city_name));

        if (!deleteQuery.exec()) {
            qDebug() << "Error deleting from train table:" << deleteQuery.lastError();
        }

    }

    qDebug() << "已删除" << QString::fromStdString(city_name) << "城市及其相关线路！" ;

}//delCity

void ALGraph::delLine(const string& sc, const string& ec, const string& amt) {

    if (!ifCityExist(sc)) {
        qDebug() << QString::fromStdString(sc) << "不存在！请重新输入正确的城市名或者新建该城市！";
        return;
    }
    if (!ifCityExist(ec)) {
        qDebug() << QString::fromStdString(ec) << "不存在！请重新输入正确的城市名或者新建该城市！" ;
        return;
    }
    auto line_node_vec = getLineNode(sc, ec, amt);
    if (line_node_vec.size() == 0) {
        qDebug() << "从" << QString::fromStdString(sc)
             << "到" << QString::fromStdString(ec)
             << "，班次号为" << QString::fromStdString(amt) << "的线路并不存在，请重新输入！";
    }

    auto it = m.find(Vnode(sc));
    for (auto beg = (*it).second.begin(); beg != (*it).second.end(); ++beg) {

        if (((*beg).end_city_name == ec) && ((*beg).amount == amt)) {
            beg = (*it).second.erase(beg);
            break;
        }
    }
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("121.40.226.217");
    db.setDatabaseName("travel_db"); // 数据库名
    db.setUserName("root"); // 替换为你的用户名
    db.setPassword("QAZ123wsx"); // 替换为你的密码

    if (!db.open()) {
        qDebug() << "Unable to establish a database connection.";
    }
    QString start_city_name = QString::fromStdString(sc);
    QString end_city_name = QString::fromStdString(ec);
    QString amount = QString::fromStdString(amt);
    QSqlQuery query("SELECT * FROM travel_info");

    qDebug() << "Car Table:"
             << ", Start City:" << start_city_name
             << ", End City:" << end_city_name
             << ", Amount:" << amount;

    while (query.next()) {

        QSqlQuery deleteQuery;
        deleteQuery.prepare("DELETE FROM travel_info WHERE start_city_name = ? AND end_city_name = ? AND amount = ?");
        deleteQuery.addBindValue(start_city_name);
        deleteQuery.addBindValue(end_city_name);
        deleteQuery.addBindValue(amount);

        if (!deleteQuery.exec()) {
            qDebug() << "Error deleting from train table:" << deleteQuery.lastError();
        }

    }
    line_num--;
    qDebug() << "已删除从" << QString::fromStdString(sc) << "到"
             << QString::fromStdString(ec) << "，班次号为" << QString::fromStdString(amt) << "的线路！";
}//delLine

//输出所有城市
void ALGraph::showAllCity() {

    if (city_num == 0) {
        cout << "系统中没有任何城市的信息!" << endl;
        return;
    }

    cout << "系统中有 " << city_num << " 座城市的信息" << endl;
    auto it = m.cbegin();
    while (it != m.cend()) {
        cout << (*it).first.start_city_name << endl;
        //cout << (*it).first.city_id << endl;  // 打印城市id
        ++it;
    }

}//showAllCity

std::vector<LineNode> ALGraph::showAllLine() {

    if (line_num == 0) {
        qDebug() << "系统中没有任何线路的信息！";
        return {};
    }
    else {
        qDebug() << "系统当前一共有 " << line_num << " 条线路的信息！";
    }
    std::vector<LineNode>res;
    auto it = m.cbegin();
    while (it != m.cend()) {
        for (auto beg = (*it).second.cbegin(); beg != (*it).second.cend(); ++beg) {
            res.push_back((*beg));
        }
        ++it;
    }
    return res;
}  // showAllLine

// 通过起点城市、终点城市、班次，查询一条线路信息
std::vector<LineNode> ALGraph::getLineNode(const std::string sc, const std::string ec, const std::string amt) {

    vector<LineNode> result;
    auto it = m.find(Vnode(sc));

    for (auto beg = it->second.begin(); beg != it->second.end(); ++beg) {

        if ((beg->end_city_name == ec) && (beg->amount == amt)) {
            result.push_back(*beg);
        }
    }

    return result;
}  // getLineNode
//输出特定要求下的直达路径
std::vector<LineNode> ALGraph::printstraightPath(const std::string sc, const std::string ec,int select) {
    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc)
                 << "和" <<QString::fromStdString(ec) << "这两座城市！";
        return{};
    }

    if (!ifCityExist(sc)) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc) << "这座城市！";
        return{};
    }

    if (!ifCityExist(ec)) {
        qDebug() << "系统中未存在" << QString::fromStdString(ec) << "这座城市！";
        return{};
    }
    if (line_num == 0) {
        qDebug() << "系统中没有任何线路！";
        return{};
    }
    vector<LineNode> result;
    auto it = m.find(Vnode(sc));
    if (it == m.cend()) {
        qDebug() << "没有任何从" << QString::fromStdString(sc) << "出发的线路！";
        return{} ;
    }
    for (auto beg = it->second.begin(); beg != it->second.end(); ++beg) {
        if ((beg->end_city_name == ec) && (together || beg->kind == mkind)) {
            result.push_back(*beg);
        }
    }
    if (result.size() == 0) {
        qDebug() << "没有从" <<QString::fromStdString(sc)<<"到"<<QString::fromStdString(ec)<<"直达的线路";
        return{};
    }
    std::vector<LineNode>res;
    switch (select) {
    case 1: {
        return result;
        break;
    }
    case 2: {
        int min = 0;
        for (size_t i = 1; i < result.size(); i++) {
            min = result[i].spend_time.getTotalMintue() <
                          result[min].spend_time.getTotalMintue() ? i : min;
        }
        res.push_back(result[min]);
        return res;
        break;
    }
    case 3: {
        int min = 0;
        for (size_t i = 1; i < result.size(); i++) {
            min = result[i].spend_money < result[min].spend_money ? i : min;
        }
        res.push_back(result[min]);
        return res;
        break;
    }
    default:
        return{};
        break;
    }
}
void ALGraph::changeType() {
    cout << "请选择混合类型还是单一类型路线：" << endl;
    cout << "1,混合类型----2,单一类型" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        together = true;
    }
    else {
        cout << "请选择出行方式:1,飞机--2,火车--3,汽车" << endl;
        together = false;
        cin >> mkind;
    }
}
bool zhongzhuanOK(Time before, Time now, int kind) {       //判断是否满足中转必要时间
    if (now < before) {                                    //飞机两小时，火车一小时,汽车40分钟
        now.day++;
    }
    int need = 120/kind;
    int pos = (now - before).getTotalMintue();
    return pos >= need;
}
// 输出从起点城市到终点城市的线路
std::vector<std::vector<LineNode>> ALGraph::getPathsByCity(const std::string& sc, const std::string& ec) {

    qDebug() << "正在查询从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的线路信息！" ;

    if (line_num == 0) {
        qDebug() << "系统中没有任何线路！" ;
        return vector<vector<LineNode>>();
    }

    auto it = m.find(sc);
    if (it == m.cend()) {
        qDebug() << "没有任何从" << QString::fromStdString(sc) << "出发的线路！" ;
        return vector<vector<LineNode>>();
    }
    else {
        if ((*it).second.size() == 0) {
            qDebug() << "没有任何从" << QString::fromStdString(sc) << "到其他城市的线路！";
            return vector<vector<LineNode>>();
        }

        std::vector<std::vector<LineNode> > result;  // 存放 sc 到 ec 的多条路径
        auto vec = (*it).second;
        for (auto beg = vec.cbegin(); beg != vec.cend(); ++beg) {
            if (!together && (*beg).kind != mkind) {
                continue;
            }
            if ((*beg).end_city_name == ec) {

                vector<LineNode> direct_path;
                direct_path.push_back(*beg);
                result.push_back(direct_path);
                continue;
            }

            vector<LineNode> path;  // 用于DFS时存储路径
            set<string> visited_1;  // 利用班次号判断一条路线是否已被访问
            //set<pair<string, string>> visited_2;  // 如果只用班次号的 visited 会有 BUG, 会不断重入同一个城市，
            // （还是有BUG）解决办法是综合利用"班次" + "pair<终点，起点>" 去环
            //              还是有 BUG，无法去掉间接的环，以及错剪问题
            set<string> visited_2;  // 用城市名去环，判断邻接边的"end_city_name"是否已在 visit_2 中，
            // 如果存在，说明加入该边的话就会入环，因此不加入该边，以达到不重入旧城市的目的

            // 自定义DFS根节点访问操作，比如这里的存储路径
            path.push_back(*beg);
            visited_1.insert(beg->amount);
            //visited_2.insert (make_pair(beg->end_city_name, beg->start_city_name));

            visited_2.insert(beg->start_city_name);  // set 能一直保持建唯一，所以不用担心插入重复键的问题
            //visited_2.insert (beg->end_city_name);

            while (!path.empty()) {
                LineNode lnode = path.back();

                //访问相邻的线路，并在 visited 中标记
                vector<LineNode> possible_way = m.at(Vnode(lnode.end_city_name));
                std::size_t i;
                for (i = 0; i < possible_way.size(); ++i) {

                    auto n = possible_way[i];

                    if ((visited_1.find(n.amount) == visited_1.end()) &&
                        (visited_2.find(n.end_city_name) == visited_2.end())
                        && (n.kind == mkind || together)
                        &&zhongzhuanOK(lnode.end_time,n.start_time,mkind)) {

                        path.push_back(n);
                        visited_1.insert(n.amount);

                        visited_2.insert(n.start_city_name);

                        if (n.end_city_name == ec) {  // 在这里自定义DFS的访问操作，比如保存路径
                            result.push_back(path);
                            path.pop_back();
                            break;  // 必须 break，不然就变成广度遍历了
                        }
                        else {
                            break;  // 必须 break，不然就变成广度遍历了
                        }
                    }
                }

                // 当前指向的节点没有邻边，或所有结点都已经被访问
                if (i == possible_way.size()) {
                    path.pop_back();
                }
            }
        }

        return result;
    }

} // getPathsByCity

// 打印从起点城市到终点城市的所有路径
void ALGraph::printPathsByCity(const std::string& sc, const std::string& ec) {

    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "并没有路径！" ;
        return;
    }

    unsigned i = 0;
    for (auto path : path_vec) {

        ++i;
        qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的第" << i << "条路径如下：" ;
        for (auto line : path) {

            qDebug() << line;
        }
    }
}  // printPathsByCity

// 输出从起点城市到终点城市，中转次数最少的路径
void ALGraph::printLeastTransferPath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc)
                 << "和" << QString::fromStdString(ec) << "这两座城市！" ;
        return;
    }

    if (!ifCityExist(sc)) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc) << "这座城市！" ;
        return;
    }

    if (!ifCityExist(ec)) {
        qDebug() << "系统中未存在" << QString::fromStdString(ec) << "这座城市！" ;
        return;
    }
    changeType();
    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "没有可以通行的路径！" ;
        return;
    }

    size_t pos = -1;
    size_t min_size = INT_MAX;

    for (size_t i = 0; i < path_vec.size(); ++i) {

        if (path_vec[i].size() < min_size) {
            min_size = path_vec[i].size();
            pos = i;
        }
    }

    vector<LineNode> min_transfer_path = path_vec.at(pos);

    qDebug() << "从" << QString::fromStdString(sc) << "到"
             << QString::fromStdString(ec) << "的中转次数最少的路径如下：" ;
    //cout << "出发城市|到达城市|班次名|出发时间|到达时间||||用时|||票价" << endl;
    for (auto line : min_transfer_path) {

        qDebug() << line;
    }
    qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的最少中转次数为：" << min_transfer_path.size() ;

}

// 输出从起点城市到终点城市，总时间最短的线路
std::vector<LineNode> ALGraph::printLeastTimePath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc) << "和" << QString::fromStdString(ec) << "这两座城市，请先添加这两座城市！";
        return{};
    }

    if (!ifCityExist(sc)) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc) << "这座城市，请先添加该城市！";
        return{};
    }

    if (!ifCityExist(ec)) {
        qDebug() << "系统中未存在" << QString::fromStdString(ec) << "这座城市，请先添加该城市！";
        return{};
    }
    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        qDebug() << "从" << QString::fromStdString(sc) << "到"
                 << QString::fromStdString(ec) << "没有可以通行的路径！";
        return{};
    }

    int min_time_path_idx = -1;
    int min_time_sum = INT_MAX;
    int path_num_idx = -1;
    for (const auto& path : path_vec) {

        ++path_num_idx;

        int time_sum = 0;
        for (size_t i = 0; i < path.size(); ++i) {
            if (i == 0) {  // 某路径的第一条线路，不用考虑隔天等待的问题
                time_sum += path.at(i).spend_time.getTotalMintue();
            }
            else {  // 需要考虑中转时，隔天等待的问题
                if (path.at(i - 1).end_time < path.at(i).start_time) {  // 可以当天中转下一班次，不用等待

                    time_sum += path.at(i).spend_time.getTotalMintue();
                }
                else {  // 不能当天中转下一班次，需要隔一天

                    Time next_station_start_time = path.at(i).start_time;
                    next_station_start_time.day += 1;
                    time_sum = time_sum + (next_station_start_time - path.at(i - 1).end_time).getTotalMintue()
                               + path.at(i).spend_time.getTotalMintue();
                }
            }
        }
        if (time_sum < min_time_sum) {
            min_time_sum = time_sum;
            min_time_path_idx = path_num_idx;
        }
    }

    qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的耗时最少的路径如下：";

    Time min_time_obj = getTimeByMinute(min_time_sum);
    qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的最少耗时为："
             << min_time_obj.day << "天"
             << min_time_obj.hour << "小时" << min_time_obj.minute << "分钟！" ;
    return path_vec.at(min_time_path_idx);
}

// 输出某个城市到其他各城市的花费最少的路线
std::vector<LineNode> ALGraph::printLeastMoneyPath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc)
                 << "和" << QString::fromStdString(ec) << "这两座城市，请先添加这两座城市！" ;
        return{};
    }

    if (!ifCityExist(sc)) {
        qDebug() << "系统中未存在" << QString::fromStdString(sc) << "这座城市，请先添加该城市！" ;
        return{};
    }

    if (!ifCityExist(ec)) {
        qDebug() << "系统中未存在" << QString::fromStdString(ec) << "这座城市，请先添加该城市！" ;
        return{};
    }

    struct cmp_pair_ec_and_amount_by_ec {
        bool operator() (const pair<string, string>& x, const pair<string, string>& k) const {
            if (x.first >= k.first)
                return false;  //STL源码规定必须这么返回，而不能改成 true
            else
                return true;
        }
    };
    // 这里采用 dijkstra 算法求解
    // 其实也可以采用DFS求解，比如调用 getPathsByCity, 然后计算一下钱再比个大小就行
    set<string> visited;  // 利用城市名的唯一性建立 visited，表示该结点已计算出最小距离，无需再次计算
    map<string, float> distanced;  // distanced 为"城市名 -> 估计最小距离"的映射
    map<pair<string, string>, string, cmp_pair_ec_and_amount_by_ec>
        parent;  // parent 存储路径上结点的关系，可以沿 ec 一直找到 sc，映射结构是 <终点城市, 班次> -> 起点城市
    vector<LineNode> result;  // 存储最终要打印的路径

    // 初始化 distance 信息集合，以用于松弛操作
    // 不需要初始化 visit 和 parent，visit 只需要判断城市名在不在 set 里就能知道该城市是否被访问，
    // parent 只需要判断 map 中有没有某城市名这个键就知道路径怎么走
    auto m_iter = m.cbegin();
    while (m_iter != m.cend()) {
        distanced.insert({ (*m_iter).first.start_city_name, INT_MAX });
        ++m_iter;
    }

    // 初始化 distanced 中起点城市的信息
    auto _dist_iter = distanced.find(sc);
    if (_dist_iter != distanced.end()) {
        (*_dist_iter).second = 0;
    }


    for (int i = 0; i < city_num; ++i) {

        map<string, float>::const_iterator min_dist_iter = distanced.cend();  // 指向 dist 中的值最小的结点
        float min_dist_value = INT_MAX;

        auto dist_iter = distanced.cbegin();
        while (dist_iter != distanced.cend()) {

            if ((visited.find(dist_iter->first) == visited.cend())
                && ((dist_iter->second) <= min_dist_value)) {

                min_dist_value = dist_iter->second;
                min_dist_iter = dist_iter;
            }
            ++dist_iter;
        }

        if (min_dist_iter == distanced.cend()) {
            break;  // 起点到所有其他结点的最小距离都计算完毕
        }

        visited.insert(min_dist_iter->first);
        //cout << min_dist_iter->first << "  " << min_dist_iter->second << endl;
        visited.insert(min_dist_iter->first);

        // 刚刚被访问的最小距离的结点为 m.at(min_dister->first)
        // 执行松弛操作，更新该结点所有邻接结点的最小估计距离
        const auto& vec = m.at(min_dist_iter->first);
        for (auto lnode : vec) {
            auto iter_pre = parent.find(make_pair(min_dist_iter->first, ""));
            std::vector<LineNode>pre;
            if (iter_pre!=parent.end()) {
                pre = getLineNode(iter_pre->second, iter_pre->first.first, iter_pre->first.second);
            }
            if (visited.find(lnode.end_city_name) == visited.cend() && (together || lnode.kind == mkind)
                &&(iter_pre==parent.end() || zhongzhuanOK(pre[0].end_time, lnode.start_time, mkind))) {
                if ((min_dist_iter->second + lnode.spend_money) < distanced.at(lnode.end_city_name)) {

                    distanced[lnode.end_city_name] = min_dist_iter->second + lnode.spend_money;
                    auto __it_parent = parent.find(make_pair(lnode.end_city_name, lnode.amount));
                    if (__it_parent == parent.end()) {
                        parent[make_pair(lnode.end_city_name, lnode.amount)] = lnode.start_city_name;
                    }
                    else {
                        // 如果键已存在，则删除旧键，因为旧键中的 amount 是旧信息，而且没法被直接覆盖
                        parent.erase(__it_parent);
                        parent[make_pair(lnode.end_city_name, lnode.amount)] = lnode.start_city_name;
                    }
                }
            }
        }
    }

    // 执行完 dijkstra 算法后，根据 parent 得到最优路径
    // 假设 sc = 福州，ec = 南昌，求福州到南昌花费最少的路线
    // parent 中的数据格式为：
    //     {(福州, T131), 永安}, {(上海, T106), 福州}
    auto iter_parent = parent.find(make_pair(ec, ""));

    if (iter_parent == parent.cend()) {

        qDebug()<< "系统中没有路径可以从" << QString::fromStdString(sc)
                 << "到达" << QString::fromStdString(ec) << "！" ;
        return{};
    }
    else {
        // 提取 parent 中存储的路径，存入最终的结果 result
        while (iter_parent != parent.cend()) {

            auto ret = getLineNode(iter_parent->second, iter_parent->first.first, iter_parent->first.second);
            result.push_back(ret.back());
            iter_parent = parent.find(make_pair(iter_parent->second, ""));
        }

        std::reverse(result.begin(), result.end());  // 由于 parent 中线路是反向存储，要将 result 中的线路反转
        qDebug() << "从" << QString::fromStdString(sc) << "到" << QString::fromStdString(ec) << "的花费最少的路径如下：" ;
        //cout << "出发城市|到达城市|班次名|出发时间|到达时间||||用时|||票价" << endl;

        qDebug() << "从" << QString::fromStdString(sc) << "到"
                 << QString::fromStdString(ec) << "的最少花费" << distanced.at(ec) << "元！" ;
        return result;
    }

}
