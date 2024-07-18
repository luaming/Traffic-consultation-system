#ifndef USERTICKET_H
#define USERTICKET_H
#include<ticket.h>
#include <QMainWindow>
#include"ui_SearchTicket.h"
#include"ALGraph.h"
class UserTicket : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserTicket(QString tool,QWidget *parent = nullptr);
    void creattickts(vector<LineNode>&arr);
    void creatzhongzhuantickts(vector<vector<LineNode>>&az,int y,int m,int d);
    Ui::Ticket*ui;
signals:void UHP();
private slots:
    void on_stfbtn_clicked();
};

#endif // USERTICKET_H
