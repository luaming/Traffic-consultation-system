#ifndef _ALGRAPH_H
#define _ALGRAPH_H
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<assert.h>
#define MAXFILESIZE 50
using namespace std;

struct DayTime {
    int year;
    int month;
    int day;
    DayTime() :year(2024), month(7), day(9) {};
    DayTime(int yy,int mm,int dd):year(yy),month(mm),day(dd){}
    void changetoday();    //ȷ����������
    void theday(int yy, int mm, int dd, int addday);  //����ĳһ�쾭��n�������ڲ����
};
struct Time {
    //ʱ���ʽ: hour:minute,+day
    int hour;
    int minute;
    int day;

    Time(const int h = 0, const int min = 0, const int d = 0) : hour(h), minute(min), day(d) {}
    Time(const Time& obj) : hour(obj.hour), minute(obj.minute), day(obj.day) {}

    void swap(Time& lt, Time& rt) {
        std::swap(lt.day, rt.day);
        std::swap(lt.hour, rt.hour);
        std::swap(lt.minute, rt.minute);
    }

    Time& operator = (Time robj) {
        swap(*this, robj);
        return *this;
    }

    int getTotalMintue() const {
        return this->day * 1440 + this->hour * 60 + this->minute;
    }

};

struct LineNode {  // ��·��Ϣ����Ϊ�߱��Ԫ��

    LineNode(const std::string scn, const std::string ecn, const Time st, const Time et, const Time spend_t,
        const float spend_m, const std::string amt,int k,std::string s_s,std::string s_e)
        : start_city_name(scn), end_city_name(ecn),
        start_time(st), end_time(et), spend_time(spend_t),
        spend_money(spend_m), amount(amt),kind(k),show_start(s_s),show_end(s_e) {}

    std::string start_city_name;
    std::string end_city_name;
    Time start_time, end_time;
    Time spend_time;
    float spend_money;
    std::string amount;  // �𳵻�ɻ��İ��
    int kind;            //��ʼΪ0���ɻ�Ϊ1����Ϊ2������Ϊ3
    std::string show_start;          //�������������ڽ��ͬһ���еĲ�ͬվ
    std::string show_end;            //�����人�к��ڣ�������人վ
};

struct Vnode {  // ������е�ͷ��㣬�洢ʼ��վ����Ϣ

    Vnode(const std::string scn, const int cid) : start_city_name(scn), city_id(cid) {}
    Vnode(const char* scn, const int cid) : start_city_name(scn), city_id(cid) {}
    Vnode(const std::string scn) : start_city_name(scn), city_id(-1) {}
    Vnode(const char* scn) : start_city_name(scn), city_id(-1) {}

    std::string start_city_name;  // ����
    int city_id;  // ���б��,��0��ʼ������ƥ��

};

struct cmp_vnode {  // ����� Vnode ӳ�� vector<InfoType> �� map �Ĺؼ��ֱȽϹ�ϵ
    bool operator() (const Vnode& x, const Vnode& k) const {
        if (x.start_city_name >= k.start_city_name)
            return false;  //STLԴ��涨������ô���أ������ܸĳ� true
        else
            return true;
    }
};


class ALGraph {
public:
    ALGraph() {                  //���캯��
        line_num = 0;
        city_num = 0;
        mkind = 1;                  //ѡ������Ʊ��1-�ɻ���2-�𳵣�3-��������ʼΪ�ɻ�Ʊ
        together = false;           //�Ƿ�ɻ��ˣ���ʼΪ��ui���ʱ�ɸ���ui��ť�ĳ�ʼ״̬����             
    }                               
    void changeType(); //���ĵ�һ���Ϸ�ʽѡ��
    void getarrivaltime(vector<LineNode>&path);  //�������ʵ��һ�׷����ĵ���ʱ��
    bool ifCityExist(const std::string& city_name);  // ��ѯ�����Ƿ����
    int searchCityNum(const std::string& city_name);  // ��ѯ���б��
    void addCity(const std::string& city_name);  // �ֶ���ӳ���
    void addCityFromFile(const char FILENAME[MAXFILESIZE]);  // ���ļ���ȡ����ӳ���
    void addLine();  // �ֶ������·
    void addLineFromFile(const char FILENAME[MAXFILESIZE]);  // ���ļ���ȡ�������·

    // ɾ����·����Ҫ�ֶ�����������յ�
    void delLine(const std::string& sc, const std::string& ec, const std::string& amt);
    // ɾ�����У���ɾ���Ըó���Ϊ���ĺ�����г���Ϣ
    void delCity(const std::string& city_name);
    //void updateFile(const char FileName[MAXFILESIZE], const std::string type);  // �޸ĺ�����ļ�

    void showAllCity();  // ������г���
    void showAllLine();  // ���������·
    
    //����ض�Ҫ���µ�ֱ��·��
    //û�����������и���ѡ����־��߷�ʽ������һ�������δ���������Ƿ񻻳��Ǹ���ѡ��Ĳۺ���
    void printstraightPath(const std::string sc, const std::string ec);

    // ���ػ�Ϸ�ʽ�������е��յ���е�����·��
    std::vector<std::vector<LineNode>> getPathsByCity(const std::string& sc, const std::string& ec);

    //��ӡ��Ϸ�ʽ�������е��յ���е�����·��
    void printPathsByCity(const std::string& sc, const std::string& ec);

    // �����Ϸ�ʽ�������е��յ���У���ת�������ٵ�·��
    void printLeastTransferPath(const std::string& sc, const std::string& ec);

    // �����Ϸ�ʽ�������е��յ���У�������С����·
    void printLeastMoneyPath(const std::string& sc, const std::string& ec);

    // �����Ϸ�ʽ�������е��յ���У���ʱ����̵���·
    void printLeastTimePath(const std::string& sc, const std::string& ec);

    //��������ʵ�ֶ�·����������֮��·���Ķ�ȡ
    void addfrompachong(string sc,string ec);

private:
    // ����� Vnode ӳ�� vector<InfoType> �� map, �ؼ���Ϊ Vnode �е� start_city_name���ؼ��ֵĹ�ϵΪ cmp_vnode
    std::map <Vnode, std::vector<LineNode>, cmp_vnode > m;

    int city_num;
    int line_num;
    int mkind;
    bool together;
    DayTime today;               //����ʱ�䣬����Ϊ��׼����������ȡ����

    // ͨ�������С��յ���С���Σ���ѯһ����·��Ϣ
    std::vector<LineNode> getLineNode(const std::string sc, const std::string ec, const std::string amt);

};
#endif
