#include"ALGraph.h"
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
#define INF 0xfffff
using namespace std;
void callPyCrawler(const std::string& date, const std::string& from_station, const std::string& to_station) {
    std::string command = "crawler.exe " + date + " " + from_station + " " + to_station;
    FILE* pipe = _popen(command.c_str(), "r");
    _pclose(pipe);
}
void DayTime::changetoday() {              //ȷ����������
    cout << "�������� �� ��";
    cin >> year >> month >> day;
}   
void DayTime::theday(int yy, int mm, int dd, int addday) {   //����ĳһ�쾭��n�������ڲ����
    int monthday[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0) {
        monthday[2]++;
    }
    dd = dd + addday / 1440;
    if (dd > monthday[mm]) {
        dd -= monthday[mm];
        mm++;
        if (mm > 12) {
            yy++;
            mm -= 12;
        }
    }
    int aminute = addday % 60;
    int ahour = (addday % 1440) / 60;
    cout << "����ʱ��" << mm << "�� " <<
        dd << "�� " << ahour << ':' << aminute << endl;
}  

const Time getTimeByMinute(int minute) {
    int day = minute / 1440;
    minute -= day * 1440;
    int hour = minute / 60;
    minute -= hour * 60;
    return Time(hour, minute, day);
}

// Time �����"<"���أ�ʵ������ Time ����ıȽ�
bool operator < (Time t1, Time t2) {
    return ((t1.day * 1440 + t1.hour * 60 + t1.minute) < (t2.day * 1440 + t2.hour * 60 + t2.minute));
}

// Time �����"-"���أ�ʵ���� Time ������������Ĭ�� t2 ���� t1 ʱ�ſ���������
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

//'>>' ���أ�ʵ��"hour:minute,+day" �Ĵ洢
istream& operator >> (istream& in, Time& time) {
    int minute, hour;
    char c;
    in >> hour >> c >> minute;
    time.day = 0;
    time.minute = minute;
    time.hour = hour;
    return in;
}

//�����'<<'���������� Time ��������
ostream& operator << (ostream& out, const Time& time) {
    //����֮��հ���'0'���
    cout.fill('0');

    //���ݵ��Ҷ�����������'+'��
    out << setw(2) << setiosflags(ios_base::right) << time.hour << ":"
        << setw(2) << time.minute << resetiosflags(ios_base::right)
        << "," << setiosflags(ios_base::showpos) << time.day << resetiosflags(ios_base::showpos); //setiosflags(ios_base::showpos) ��ʾ "+" ����

    cout.fill(' '); //fill setiosflags ���ֶ��ر�

    return out;
}

//�����'<<'���������� LineNode ��������
ostream& operator << (ostream& out, const LineNode& line) {

    cout << "��������|�������|�����|����ʱ��|����ʱ��|·����ʱ|·��Ʊ��" << endl;
    cout << setw(2) << line.show_start << " " << setw(3) << line.show_end
        << " " << setw(6) << line.amount << " ";
    cout.fill('0'); // �޸� fill() ��Ĭ������Ϊ 0
    cout << line.start_time << " " << line.end_time << " " << line.spend_time << " "
        << setiosflags(ios_base::showpoint) << line.spend_money << ' ';
    cout.fill(' '); // fill() ���� setw(), ��Ҫ�ֶ�����
    switch (line.kind) {
    case 1:
        cout << "�ɻ�" << ' ';
        break;
    case 2:
        cout << "��" << ' ';
        break;
    case 3:
        cout << "����" << ' ';
        break;
    default:
        break;
    }
    cout << endl;
    return out;
}

//��ѯ�����Ƿ����
bool ALGraph::ifCityExist(const std::string& city_name) {  // ��ѯ�����Ƿ����

    auto it = m.find(Vnode(city_name));
    if (it != m.cend()) {
        return true;
    }
    else {
        return false;
    }

}

//��ѯ���б�ţ��ҵ�������ţ��Ҳ�������-1
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

// �ֶ���ӳ���
void ALGraph::addCity(const string& city_name) {

    if (ifCityExist(city_name)) {
        cout << "�ó����Ѿ����ڣ������ظ���ӣ�" << endl;
        return;
    }
    m.insert({ Vnode(city_name, city_num), vector<LineNode>() });
    ++city_num;

    //auto it = m.cbegin();
    //while(it!=m.cend()) {                  //����������������������������֮���·��
    //    addfrompachong(it->first.start_city_name, city_name);
    //    addfrompachong(city_name, it->first.start_city_name);
    //    it++;
    //}
    
}

// ���ļ��ж�ȡ����ӳ���
void ALGraph::addCityFromFile(const char FILENAME[MAXFILESIZE]) {
    cout << "��ʼ��" << FILENAME << "�ж��벢��ӳ��У�" << endl;
    ifstream file(FILENAME);  // ��ʧ�ܷ���NULL
    if (!file) {
        cout << "���ļ�ʧ�ܣ�" << endl;
        return;
    }

    // ��ȡ������
    string line;
    while (getline(file, line)) {
        istringstream istr(line);  // ���� istringstream ��ֱ�ӽ� string ���뵽 name
        string name;
        istr >> name;
        addCity(name);
    }
    cout << "���е�����ϣ���ǰϵͳ����" << city_num << "�����У�" << endl;
    file.close();  // ��ȡ��ر��ļ�
}//addCityFromFile

//�ֶ������·
void ALGraph::addLine() {
    string start_city_name;
    //��Ϣ����
    cout << "�����������У�";
    cin >> start_city_name;

    if (!ifCityExist(start_city_name)) {
        cout << "���ó��в������ڣ����ȴ����ó��У�" << endl;
        return;
    }

    string end_city_name;
    Time start_time, end_time;
    Time spend_time;
    float spend_money;
    string amount;  // �𳵻�ɻ��İ��
    int kind;
    cout << "�������յ���У�";
    cin >> end_city_name;
    if (!ifCityExist(end_city_name)) {
        cout << "�յ����" << end_city_name << "�������ڣ����ȴ����ó��У�" << endl;
        return;
    }
    cout << "������������";
    cin >> amount;
    cout << "���������ʱ��(��ʽΪhh:mm):";
    cin >> start_time;
    cout << "�����뵽��ʱ��(��ʽΪhh:mm):";
    cin >> end_time;

    if (start_time < end_time) {
        spend_time = end_time - start_time;
    }
    else {
        cout << "����ʱ����ڵ���ʱ�䣬����������������룡" << endl;
        return;
    }

    cout << "������Ʊ�ۣ�";
    cin >> spend_money;
    cout << "�����뽻ͨ����";
    cin >> kind;
    auto it = m.find(Vnode(start_city_name));
    if (it != m.end()) {
        (*it).second.push_back(LineNode(start_city_name, end_city_name, start_time, end_time,
            spend_time, spend_money, amount, kind,start_city_name,end_city_name));
        cout << "���·�߳ɹ���" << endl;
    }

    ++line_num;

}//addLine 
void ALGraph::getarrivaltime(vector<LineNode>& path) {                      //�õ�����ʱ��
    int time_sum = path.at(0).start_time.getTotalMintue();
    for (size_t i = 0; i < path.size(); ++i) {
        if (i == 0) {  // ĳ·���ĵ�һ����·�����ÿ��Ǹ���ȴ�������
            time_sum += path.at(i).spend_time.getTotalMintue();
        }
        else {  // ��Ҫ������תʱ������ȴ�������
            if (path.at(i - 1).end_time < path.at(i).start_time) {  // ���Ե�����ת��һ��Σ����õȴ�

                time_sum += path.at(i).spend_time.getTotalMintue();
            }
            else {  // ���ܵ�����ת��һ��Σ���Ҫ��һ��

                Time next_station_start_time = path.at(i).start_time;
                next_station_start_time.day += 1;
                time_sum = time_sum + (next_station_start_time - path.at(i - 1).end_time).getTotalMintue()
                    + path.at(i).spend_time.getTotalMintue();
            }
        }
    }
    today.theday(today.year, today.month, today.day, time_sum);
}
//��������ʵ�ֶ�·����������֮��·���Ķ�ȡ
void ALGraph::addfrompachong(string sc,string ec) {
    if ((!ifCityExist(sc)) || (!ifCityExist(ec)) || sc == ec) {
        return;
    }
    stringstream ss;
    ss << today.year << '-' << today.month << '-' << today.day;
    string todaystr;
    ss >> todaystr;
    callPyCrawler(todaystr, sc, ec);
    ifstream ifs("train_schedule.txt");
    int kind=2;
    string line;
    string pass;         //���ڹ��ɲ���Ҫ��Ʊ
    string num1, num2;
    int temp_line_num = line_num;
    while (getline(ifs, line)) {
        istringstream istr(line);
        string start_city_name;
        string end_city_name;
        Time start_time, end_time;
        Time spend_time;
        float spend_money;
        string amount;  // �𳵻�ɻ��İ��
        
        istr >> start_city_name >> end_city_name >> amount
            >> start_time >> end_time >> spend_time >>
            pass>>pass>>num1>>pass>>pass>>pass>>pass>>num2>>pass;
        if (num1 == "--") {
            istringstream iss(num2);
            iss >> spend_money;
        }
        else {
            istringstream iss(num1);
            iss >> spend_money;
        }
        spend_money /= 10;
        auto it = m.find(Vnode(sc));
        if (it != m.end()) {
            (*it).second.push_back(LineNode(sc,ec,start_time, end_time, spend_time,
                spend_money, amount, kind,start_city_name, end_city_name));
            ++line_num;
        }
    }
    ifs.close(); //�򿪴洢��·���ļ���ϣ��ر�file
    cout << "������ " << line_num - temp_line_num << " ��·����Ϣ��" << endl;
}
//���ļ��ж�ȡ�������· //�������棬�����ˣ���������ɾ�ˣ�
void ALGraph::addLineFromFile(const char FILENAME[MAXFILESIZE]) {
    cout << "��" << FILENAME << "�ж�ȡ��������·��" << endl;
    ifstream file(FILENAME);
    if (!file) {
        cout << "���ļ�" << FILENAME << "ʧ�ܣ�" << endl;
        return;
    }
    string catalogue; //�洢��һ�е�Ŀ¼
    getline(file, catalogue);

    //�ӵڶ��п�ʼ��ȡ������Ҫ�洢����Ϣ
    string line;
    string pass;         //���ڹ��ɲ���Ҫ��Ʊ
    string num1, num2;
    int kind=2;
    int temp_line_num = line_num;
    while (getline(file, line)) {
        istringstream istr(line);
        string start_city_name;
        string end_city_name;
        Time start_time, end_time;
        Time spend_time;
        float spend_money;
        string amount;  // �𳵻�ɻ��İ��
        
        istr >> start_city_name >> end_city_name >> amount
            >> start_time >> end_time >> spend_time >> pass
            >> pass >> num1 >> pass >> pass >> pass >> pass >> num2 >> pass;
        if (num1 == "--") {
            istringstream iss(num2);
            iss >> spend_money;
        }
        else {
            istringstream iss(num1);
            iss >> spend_money;
        }
        spend_money /= 10;
        auto it = m.find(Vnode(start_city_name));
        if (it != m.end()) {
            (*it).second.push_back(LineNode(start_city_name, end_city_name, start_time, end_time, spend_time,
                spend_money, amount, kind, start_city_name, end_city_name));
            ++line_num;
        }
    }
    file.close(); //�򿪴洢��·���ļ���ϣ��ر�file
    cout << "���ļ�" << FILENAME << "�е����� " << line_num - temp_line_num << " ��·����Ϣ��" << endl;
}//addLineFromFile

// ɾ�����У���ɾ���Ըó���Ϊ������յ�ĺ�����г�
void ALGraph::delCity(const string& city_name) {

    if (!ifCityExist(city_name)) {

        cout << city_name << "�����ڣ�������������ȷ�ĳ����������½��ó��У�" << endl;
        return;
    }

    cout << "����ɾ��" << city_name << "���м��������·��" << endl;
    city_num = city_num - 1;

    // ɾ���Ըó���Ϊ������·����
    auto key = Vnode(city_name);
    auto _it = m.find(key);
    if (_it != m.end()) {
        line_num = line_num - (*_it).second.size();
        m.erase(key);
    }

    // ɾ���Ըó���Ϊ�յ����·����
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

    cout << "��ɾ��" << city_name << "���м��������·��" << endl;

}//delCity

void ALGraph::delLine(const string& sc, const string& ec, const string& amt) {

    if (!ifCityExist(sc)) {
        cout << sc << "�����ڣ�������������ȷ�ĳ����������½��ó��У�" << endl;
        return;
    }
    if (!ifCityExist(ec)) {
        cout << ec << "�����ڣ�������������ȷ�ĳ����������½��ó��У�" << endl;
        return;
    }
    auto line_node_vec = getLineNode(sc, ec, amt);
    if (line_node_vec.size() == 0) {
        cout << "��" << sc << "��" << ec << "����κ�Ϊ" << amt << "����·�������ڣ����������룡" << endl;
    }

    cout << "����ɾ����" << sc << "��" << ec << "����κ�Ϊ" << amt << "����·��" << endl;

    auto it = m.find(Vnode(sc));
    for (auto beg = (*it).second.begin(); beg != (*it).second.end(); ++beg) {

        if (((*beg).end_city_name == ec) && ((*beg).amount == amt)) {
            beg = (*it).second.erase(beg);
            break;
        }
    }

    cout << "��ɾ����" << sc << "��" << ec << "����κ�Ϊ" << amt << "����·��" << endl;

}//delLine

//������г���
void ALGraph::showAllCity() {

    if (city_num == 0) {
        cout << "ϵͳ��û���κγ��е���Ϣ!" << endl;
        return;
    }

    cout << "ϵͳ���� " << city_num << " �����е���Ϣ" << endl;
    auto it = m.cbegin();
    while (it != m.cend()) {
        cout << (*it).first.start_city_name << endl;
        //cout << (*it).first.city_id << endl;  // ��ӡ����id
        ++it;
    }

}//showAllCity 

void ALGraph::showAllLine() {

    if (line_num == 0) {
        cout << "ϵͳ��û���κ���·����Ϣ��" << endl;
        return;
    }
    else {
        cout << "ϵͳ��ǰһ���� " << line_num << " ����·����Ϣ��" << endl;
    }
    auto it = m.cbegin();
    while (it != m.cend()) {
        for (auto beg = (*it).second.cbegin(); beg != (*it).second.cend(); ++beg) {

            cout << (*beg);
        }
        ++it;
    }
}  // showAllLine 

// ͨ�������С��յ���С���Σ���ѯһ����·��Ϣ
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
//����ض�Ҫ���µ�ֱ��·��
void ALGraph::printstraightPath(const std::string sc, const std::string ec) {
    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        cout << "ϵͳ��δ����" << sc << "��" << ec << "���������У�" << endl;
        return;
    }

    if (!ifCityExist(sc)) {
        cout << "ϵͳ��δ����" << sc << "�������У�" << endl;
        return;
    }

    if (!ifCityExist(ec)) {
        cout << "ϵͳ��δ����" << ec << "�������У�" << endl;
        return;
    }
    if (line_num == 0) {
        cout << "ϵͳ��û���κ���·��" << endl;
        return;
    }
    vector<LineNode> result;
    auto it = m.find(Vnode(sc));
    if (it == m.cend()) {
        cout << "û���κδ�" << sc << "��������·��" << endl;
        return ;
    }
    changeType();
    for (auto beg = it->second.begin(); beg != it->second.end(); ++beg) {
        if ((beg->end_city_name == ec) && (together || beg->kind == mkind)) {
            result.push_back(*beg);
        }
    }
    if (result.size() == 0) {
        cout << "û�д�" <<sc<<"��"<<ec<<"ֱ���";
        if (!together) {
            switch (mkind) {
            case 1:
                cout << "�ɻ�";
                break;
            case 2:
                cout << "��";
                break;
            case 3:
                cout << "����";
                break;
            default :
                break;
            }
        }
        cout << "��·" << endl;
        return;
    }
    int select = 0;
    cout << "��ѡ����߷�ʽ��1����--2������ʱ��--3����С����" << endl;
    cin >> select;
    switch (select) {
    case 1: {
        for (size_t i = 0; i < result.size(); i++) {
            cout << result[i];
        }
        break;
    }
    case 2: {
        int min = 0;
        for (size_t i = 1; i < result.size(); i++) {
            min = result[i].spend_time.getTotalMintue() <
                result[min].spend_time.getTotalMintue() ? i : min;
        }
        cout << result[min];
        break;
    }
    case 3: {
        int min = 0;
        for (size_t i = 1; i < result.size(); i++) {
            min = result[i].spend_money < result[min].spend_money ? i : min;
        }
        cout << result[min];
        break;
    }
    default:
        break;
    }
}
void ALGraph::changeType() {
    cout << "��ѡ�������ͻ��ǵ�һ����·�ߣ�" << endl;
    cout << "1,�������----2,��һ����" << endl;
    int select = 0;
    cin >> select;
    if (select == 1) {
        together = true;
    }
    else {
        cout << "��ѡ����з�ʽ:1,�ɻ�--2,��--3,����" << endl;
        together = false;
        cin >> mkind;
    }
}
bool zhongzhuanOK(Time before, Time now, int kind) {       //�ж��Ƿ�������ת��Ҫʱ��
    if (now < before) {                                    //�ɻ���Сʱ����һСʱ,����40����
        now.day++;
    }
    int need = 120/kind;
    int pos = (now - before).getTotalMintue();
    return pos >= need;
}
// ����������е��յ���е���·
std::vector<std::vector<LineNode>> ALGraph::getPathsByCity(const std::string& sc, const std::string& ec) {

    cout << "���ڲ�ѯ��" << sc << "��" << ec << "����·��Ϣ��" << endl;

    if (line_num == 0) {
        cout << "ϵͳ��û���κ���·��" << endl;
        return vector<vector<LineNode>>();
    }

    auto it = m.find(sc);
    if (it == m.cend()) {
        cout << "û���κδ�" << sc << "��������·��" << endl;
        return vector<vector<LineNode>>();
    }
    else {
        if ((*it).second.size() == 0) {
            cout << "û���κδ�" << sc << "���������е���·��" << endl;
            return vector<vector<LineNode>>();
        }

        std::vector<std::vector<LineNode> > result;  // ��� sc �� ec �Ķ���·��
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

            vector<LineNode> path;  // ����DFSʱ�洢·��
            set<string> visited_1;  // ���ð�κ��ж�һ��·���Ƿ��ѱ�����
            //set<pair<string, string>> visited_2;  // ���ֻ�ð�κŵ� visited ���� BUG, �᲻������ͬһ�����У�
                                                // ��������BUG������취���ۺ�����"���" + "pair<�յ㣬���>" ȥ��
                                                //              ������ BUG���޷�ȥ����ӵĻ����Լ�������� 
            set<string> visited_2;  // �ó�����ȥ�����ж��ڽӱߵ�"end_city_name"�Ƿ����� visit_2 �У�
            // ������ڣ�˵������ñߵĻ��ͻ��뻷����˲�����ñߣ��Դﵽ������ɳ��е�Ŀ��

// �Զ���DFS���ڵ���ʲ�������������Ĵ洢·��
            path.push_back(*beg);
            visited_1.insert(beg->amount);
            //visited_2.insert (make_pair(beg->end_city_name, beg->start_city_name));

            visited_2.insert(beg->start_city_name);  // set ��һֱ���ֽ�Ψһ�����Բ��õ��Ĳ����ظ���������
            //visited_2.insert (beg->end_city_name);

            while (!path.empty()) {
                LineNode lnode = path.back();

                //�������ڵ���·������ visited �б��
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

                        if (n.end_city_name == ec) {  // �������Զ���DFS�ķ��ʲ��������籣��·��
                            result.push_back(path);
                            path.pop_back();
                            break;  // ���� break����Ȼ�ͱ�ɹ�ȱ�����
                        }
                        else {
                            break;  // ���� break����Ȼ�ͱ�ɹ�ȱ�����
                        }
                    }
                }

                // ��ǰָ��Ľڵ�û���ڱߣ������н�㶼�Ѿ�������
                if (i == possible_way.size()) {
                    path.pop_back();
                }
            }
        }

        return result;
    }

} // getPathsByCity

// ��ӡ�������е��յ���е�����·��
void ALGraph::printPathsByCity(const std::string& sc, const std::string& ec) {
    changeType();
    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        cout << "��" << sc << "��" << ec << "��û��·����" << endl;
        return;
    }

    unsigned i = 0;
    for (auto path : path_vec) {

        ++i;
        cout << "��" << sc << "��" << ec << "�ĵ�" << i << "��·�����£�" << endl;
        for (auto line : path) {

            cout << line;
        }
    }
}  // printPathsByCity

// ����������е��յ���У���ת�������ٵ�·��
void ALGraph::printLeastTransferPath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        cout << "ϵͳ��δ����" << sc << "��" << ec << "���������У�" << endl;
        return;
    }

    if (!ifCityExist(sc)) {
        cout << "ϵͳ��δ����" << sc << "�������У�" << endl;
        return;
    }

    if (!ifCityExist(ec)) {
        cout << "ϵͳ��δ����" << ec << "�������У�" << endl;
        return;
    }
    changeType();
    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        cout << "��" << sc << "��" << ec << "û�п���ͨ�е�·����" << endl;
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

    cout << "��" << sc << "��" << ec << "����ת�������ٵ�·�����£�" << endl;
    //cout << "��������|�������|�����|����ʱ��|����ʱ��||||��ʱ|||Ʊ��" << endl;
    for (auto line : min_transfer_path) {

        cout << line;
    }
    cout << "��" << sc << "��" << ec << "��������ת����Ϊ��" << min_transfer_path.size() << endl;

}

// ����������е��յ���У���ʱ����̵���·
void ALGraph::printLeastTimePath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        cout << "ϵͳ��δ����" << sc << "��" << ec << "���������У�����������������У�" << endl;
        return;
    }

    if (!ifCityExist(sc)) {
        cout << "ϵͳ��δ����" << sc << "�������У�������Ӹó��У�" << endl;
        return;
    }

    if (!ifCityExist(ec)) {
        cout << "ϵͳ��δ����" << ec << "�������У�������Ӹó��У�" << endl;
        return;
    }
    changeType();
    auto path_vec = getPathsByCity(sc, ec);

    if (path_vec.size() == 0) {
        cout << "��" << sc << "��" << ec << "û�п���ͨ�е�·����" << endl;
        return;
    }

    int min_time_path_idx = -1;
    int min_time_sum = INT_MAX;
    int path_num_idx = -1;
    for (const auto& path : path_vec) {

        ++path_num_idx;

        int time_sum = 0;
        for (size_t i = 0; i < path.size(); ++i) {
            if (i == 0) {  // ĳ·���ĵ�һ����·�����ÿ��Ǹ���ȴ�������
                time_sum += path.at(i).spend_time.getTotalMintue();
            }
            else {  // ��Ҫ������תʱ������ȴ�������
                if (path.at(i - 1).end_time < path.at(i).start_time) {  // ���Ե�����ת��һ��Σ����õȴ�

                    time_sum += path.at(i).spend_time.getTotalMintue();
                }
                else {  // ���ܵ�����ת��һ��Σ���Ҫ��һ��

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

    cout << "��" << sc << "��" << ec << "�ĺ�ʱ���ٵ�·�����£�" << endl;
    for (auto line : path_vec.at(min_time_path_idx)) {
        cout << line;
    }
    Time min_time_obj = getTimeByMinute(min_time_sum);
    cout << "��" << sc << "��" << ec << "�����ٺ�ʱΪ��" << min_time_obj.day << "��"
        << min_time_obj.hour << "Сʱ" << min_time_obj.minute << "���ӣ�" << endl;

}

// ���ĳ�����е����������еĻ������ٵ�·��
void ALGraph::printLeastMoneyPath(const std::string& sc, const std::string& ec) {

    if ((!ifCityExist(sc)) && (!ifCityExist(ec))) {
        cout << "ϵͳ��δ����" << sc << "��" << ec << "���������У�����������������У�" << endl;
        return;
    }

    if (!ifCityExist(sc)) {
        cout << "ϵͳ��δ����" << sc << "�������У�������Ӹó��У�" << endl;
        return;
    }

    if (!ifCityExist(ec)) {
        cout << "ϵͳ��δ����" << ec << "�������У�������Ӹó��У�" << endl;
        return;
    }

    struct cmp_pair_ec_and_amount_by_ec {
        bool operator() (const pair<string, string>& x, const pair<string, string>& k) const {
            if (x.first >= k.first)
                return false;  //STLԴ��涨������ô���أ������ܸĳ� true
            else
                return true;
        }
    };
    changeType();
    // ������� dijkstra �㷨���
    // ��ʵҲ���Բ���DFS��⣬������� getPathsByCity, Ȼ�����һ��Ǯ�ٱȸ���С����
    set<string> visited;  // ���ó�������Ψһ�Խ��� visited����ʾ�ý���Ѽ������С���룬�����ٴμ���
    map<string, float> distanced;  // distanced Ϊ"������ -> ������С����"��ӳ��
    map<pair<string, string>, string, cmp_pair_ec_and_amount_by_ec>
        parent;  // parent �洢·���Ͻ��Ĺ�ϵ�������� ec һֱ�ҵ� sc��ӳ��ṹ�� <�յ����, ���> -> ������
    vector<LineNode> result;  // �洢����Ҫ��ӡ��·��

    // ��ʼ�� distance ��Ϣ���ϣ��������ɳڲ���
    // ����Ҫ��ʼ�� visit �� parent��visit ֻ��Ҫ�жϳ������ڲ��� set �����֪���ó����Ƿ񱻷��ʣ�
    // parent ֻ��Ҫ�ж� map ����û��ĳ�������������֪��·����ô��
    auto m_iter = m.cbegin();
    while (m_iter != m.cend()) {
        distanced.insert({ (*m_iter).first.start_city_name, INT_MAX });
        ++m_iter;
    }

    // ��ʼ�� distanced �������е���Ϣ
    auto _dist_iter = distanced.find(sc);
    if (_dist_iter != distanced.end()) {
        (*_dist_iter).second = 0;
    }


    for (int i = 0; i < city_num; ++i) {

        map<string, float>::const_iterator min_dist_iter = distanced.cend();  // ָ�� dist �е�ֵ��С�Ľ��
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
            break;  // ��㵽��������������С���붼�������
        }

        visited.insert(min_dist_iter->first);
        //cout << min_dist_iter->first << "  " << min_dist_iter->second << endl;
        visited.insert(min_dist_iter->first);

        // �ոձ����ʵ���С����Ľ��Ϊ m.at(min_dister->first)
        // ִ���ɳڲ��������¸ý�������ڽӽ�����С���ƾ���
        const auto& vec = m.at(min_dist_iter->first);
        for (auto lnode : vec) {
            auto iter_pre = parent.find(make_pair(min_dist_iter->first, ""));
            std::vector<LineNode>pre;
            if (!parent.empty()) {
                pre = getLineNode(iter_pre->second, iter_pre->first.first, iter_pre->first.second);
            }
            if (visited.find(lnode.end_city_name) == visited.cend() && (together || lnode.kind == mkind)
                &&(parent.empty() || zhongzhuanOK(pre[0].end_time, lnode.start_time, mkind))) {
                if ((min_dist_iter->second + lnode.spend_money) < distanced.at(lnode.end_city_name)) {

                    distanced[lnode.end_city_name] = min_dist_iter->second + lnode.spend_money;
                    auto __it_parent = parent.find(make_pair(lnode.end_city_name, lnode.amount));
                    if (__it_parent == parent.end()) {
                        parent[make_pair(lnode.end_city_name, lnode.amount)] = lnode.start_city_name;
                    }
                    else {
                        // ������Ѵ��ڣ���ɾ���ɼ�����Ϊ�ɼ��е� amount �Ǿ���Ϣ������û����ֱ�Ӹ���
                        parent.erase(__it_parent);
                        parent[make_pair(lnode.end_city_name, lnode.amount)] = lnode.start_city_name;
                    }
                }
            }
        }
    }

    // ִ���� dijkstra �㷨�󣬸��� parent �õ�����·��
    // ���� sc = ���ݣ�ec = �ϲ������ݵ��ϲ��������ٵ�·��
    // parent �е����ݸ�ʽΪ��
    //     {(����, T131), ����}, {(�Ϻ�, T106), ����}
    auto iter_parent = parent.find(make_pair(ec, ""));

    if (iter_parent == parent.cend()) {

        cout << "ϵͳ��û��·�����Դ�" << sc << "����" << ec << "��" << endl;
    }
    else {
        // ��ȡ parent �д洢��·�����������յĽ�� result
        while (iter_parent != parent.cend()) {

            auto ret = getLineNode(iter_parent->second, iter_parent->first.first, iter_parent->first.second);
            result.push_back(ret.back());
            iter_parent = parent.find(make_pair(iter_parent->second, ""));
        }

        std::reverse(result.begin(), result.end());  // ���� parent ����·�Ƿ���洢��Ҫ�� result �е���·��ת
        cout << "��" << sc << "��" << ec << "�Ļ������ٵ�·�����£�" << endl;
        //cout << "��������|�������|�����|����ʱ��|����ʱ��||||��ʱ|||Ʊ��" << endl;
        for (auto line : result) {

            cout << line; //�����ع�linenode��<<���ű������

        }
        cout << "��" << sc << "��" << ec << "�����ٻ���" << distanced.at(ec) << "Ԫ��" << endl;

    }

}
