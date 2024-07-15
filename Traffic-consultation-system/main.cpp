#include<iostream>
#include<string>
#include"ALGraph.h"
using namespace std;

//��ʼ����ΪʲôҪ�������������
string Account = "admin";
string Password = "admin";
ALGraph graph;
void admin();
bool login();
void user();
void changePassword();
void adminALG();


int main(void) {
    system("clear");
    int identity = 1; //���ѡ�� 1.�ο� 2.����Ա������ 0 �����˳�
    while (identity) {
        cout << endl << "==============��ӭȫ����ͨ��ѯϵͳ==============" << endl;
        cout << "�������ǣ�" << endl;
        cout << "    1.����Ա" << endl << "    2.��ͨ�û�" << endl;
        cout << "����������(0 for exit):";
        cin >> identity;
        if (!identity) {
            break;
        }
        switch (identity) {
        case 1:
            admin();
            system("clear");
            break;

        case 2:
            user();
            system("clear");
            break;

        default:
            cout << "���벻��ȷ������������!" << endl;
            break;
        }//switch(identity)
    }//while (indentity)
    system("clear");
    cout << endl << "==================��л���ʹ��==================" << endl;
    return 0;
}//main

//����Ա����
void admin() {
    cout << "    ��������Աģʽ��" << endl;
    while (!login()) {
        cout << endl << "�ʺŻ����벻��ȷ�����ٴ�����" << endl;
    }
    cout << endl << "��½�ɹ���" << endl;
    int option = 1;
    while (option) {
        cout << "���������ѡ�" << endl;
        cout << "1.��������" << endl << "2.ȫ����ͨͼ����ز���" << endl;
        cout << "����������(��0����ѡ����ݽ���):" << endl;
        cin >> option;
        cout << endl;
        system("clear");
        if (!option) {
            break;
        }
        switch (option) {
        case 1:
            changePassword();
            break;
        case 2:
            adminALG();
            system("clear");
            break;
        default:
            cout << "��������ȷ��ѡ�" << endl;
            break;
        }
    }//while(!login())
    cout << endl << endl << "������ϣ��˳�����Ա�û���" << endl << endl;
}//admin

//�������Ա�˻�����
bool login() {
    string account, password;
    cout << "�����˻���";
    cin >> account;
    cout << "�������룺";
    system("stty -echo");
    cin >> password;
    system("stty echo");
    if (account == Account && password == Password) {
        return true;
    }
    else {
        return false;
    }
}//login

//�޸Ĺ���Ա�˻����뺯��
void changePassword() {
    string NewPassword1 = "1", NewPassword2 = "2";
    while (NewPassword1 != NewPassword2) {
        cout << "�����������룺";
        system("stty -echo");
        cin >> NewPassword1;
        system("stty echo");
        cout << "���ٴ��������룺";
        system("stty -echo");
        cin >> NewPassword2;
        system("stty echo");
        if (NewPassword1 != NewPassword2) {
            cout << "������������벻ͬ�����ٴ����룡" << endl;
        }
    }
    Password = NewPassword1;
    cout << "�޸�����ɹ���" << endl;
}//changePassword

//����Ա����ͨͼ�Ĳ�������
void adminALG() {
    int func = 1;
    while (func) {
        cout << "��ѡ�����в���֮һ" << endl;
        cout << "    1.���ļ�����ӳ���" << endl;
        cout << "    2.�ֶ���ӳ���" << endl;
        cout << "    3.ɾ������" << endl;
        cout << "    4.���ļ��������·" << endl;
        cout << "    5.�ֶ������·" << endl;
        cout << "    6.ɾ����·" << endl;
        cout << "    7.��ʾ���г���" << endl;
        cout << "    8.��ʾ������·" << endl;
        cout << "    9.��ѯ�����м䣬��ת���ٵ�·��" << endl;
        cout << "    10.��ѯ�����м䣬�������ٵ�·��" << endl;
        cout << "    11.��ѯ�����м䣬��ʱ���ٵ�·��" << endl;
        cout << "    12.��ѯ������֮������·��" << endl;
        cout << "    13.��ѯ������ֱ�ӵ�ֱ��·�����������ԣ�" << endl;
        cout << "����������(����0�˳���������):";
        cin >> func;
        cout << endl;
        system("clear");

        //��Ӧ���ܵĵ���
        if (!func) {
            break;
        }

        // switch �ڲ����ܶ������ֻ��д������
        // ���򱨴�cannot jump from switch statement to this case
        string file_name;
        string city_name;
        string sc;
        string ec;
        string amt;
        switch (func) {
        case 1:
            cout << "    1.���ļ�����ӳ���(��ѡ�ļ�:FlightCity.txt, TrainCity.txt)���������ļ�����";
            cin >> file_name;
            graph.addCityFromFile(file_name.c_str());
            break;
        case 2:
            cout << "    2.�ֶ���ӳ���!" << endl;
            cout << "������������֣�";
            cin >> city_name;
            graph.addCity(city_name);
            break;
        case 3:
            cout << "    3.ɾ������!" << endl;
            cin >> city_name;
            graph.delCity(city_name);
            break;
        case 4:
            cout << "    4.���ļ������·��(��ѡ�ļ�:Flight.txt, Train.txt,)�������ļ�����";
            cin >> file_name;
            graph.addLineFromFile(file_name.c_str());
            break;
        case 5:
            cout << "    5.�ֶ������·!" << endl;
            graph.addLine();
            break;
        case 6:
            cout << "    6.ɾ����·!" << endl;
            cout << "������Ҫɾ����·�������У�" << endl;
            cin >> sc;
            cout << "������Ҫɾ����·���յ���У�" << endl;
            cin >> ec;
            cout << "������Ҫɾ����·�İ�κţ�" << endl;
            cin >> amt;
            graph.delLine(sc, ec, amt); //ɾ����·
            break;
        case 7:
            cout << "    7.��ʾ���г���!" << endl;
            graph.showAllCity();
            break;
        case 8:
            cout << "    8.��ʾ������·!" << endl;
            graph.showAllLine();
            break;
        case 9:
            cout << "    9.��ѯ�����м䣬��ת���ٵ�·��!" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastTransferPath(sc, ec);
            break;
        case 10:
            cout << "    10.��ѯ�����м䣬��Ǯ���ٵ�·��!" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastMoneyPath(sc, ec);
            break;
        case 11:
            cout << "    11.��ѯ�����м䣬��ʱ���ٵ�·��!" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastTimePath(sc, ec);
            break;
        case 12:
            cout << "    12.��ѯ������֮������·����" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printPathsByCity(sc, ec);
            break;
        case 13:
            cout << "    13.��ѯ������ֱ�ӵ�ֱ��·�����������ԣ�" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printstraightPath(sc, ec);
            break;
        default:
            cout << "���벻��ȷ������������" << endl;
            break;
        }//switch(func) 
        cout << endl;
    }//while(func)
}//adminGPL ����Ա��ͼ���в��� 

//�û���½����
void user() {
    cout << "    ������ͨ�û�ģʽ" << endl << endl;
    int func = 1;
    while (func) {
        cout << "    ������ȫ����ͨͼ����Ϣ��ѯ��" << endl;
        cout << "��ѡ�����в���֮һ" << endl;
        cout << "    1.��ѯ�����м䣬�������ٵ�·��" << endl;
        cout << "    2.��ѯ�����м䣬��ʱ���ٵ�·��" << endl;
        cout << "    3.��ʾ���г���" << endl;
        cout << "    4.��ʾ������·" << endl;
        cout << "    5.��ѯ�����м䣬��ת�������ٵ�·��" << endl;
        cout << "    6.��ѯ������֮������·��" << endl;
        cout << "    7.��ѯ������ֱ�ӵ�ֱ��·�����������ԣ�" << endl;
        cout << "����������(��0����ѡ�����ѡ�����):";
        cin >> func;
        if (!func) {
            break;
        }
        cout << endl;

        // switch �ڲ����ܶ������ֻ��д������
        // ���򱨴�cannot jump from switch statement to this case
        string sc;
        string ec;
        switch (func) {
        case 1:
            cout << "1.��ѯ�����м䣬�������ٵ�·��" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastMoneyPath(sc, ec);
            break;
        case 2:
            cout << "2.��ѯ�����м䣬��ʱ���ٵ�·��" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastTimePath(sc, ec);
            break;
        case 3:
            cout << "3.��ʾ���г��У�" << endl;
            graph.showAllCity();
            break;
        case 4:
            cout << "4.��ʾ������·��" << endl;
            graph.showAllLine();
            break;
        case 5:
            cout << "5.��ѯ�����м䣬��ת�������ٵ�·��" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printLeastTransferPath(sc, ec);
            break;
        case 6:
            cout << "6.��ѯ������֮������·����" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printPathsByCity(sc, ec);
            break;
        case 7:
            cout << "    7.��ѯ������ֱ�ӵ�ֱ��·�����������ԣ�" << endl;
            cout << "����Ҫ��ѯ�������У�";
            cin >> sc;
            cout << "����Ҫ��ѯ���յ���У�";
            cin >> ec;
            graph.printstraightPath(sc, ec);
            break;
        default:
            cout << "���벻��ȷ�����������룡" << endl;
            break;
        }//switch(func)
        cout << endl;

    }//while(func)
}//user 
