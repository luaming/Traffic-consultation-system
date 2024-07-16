#include "userticket.h"

UserTicket::UserTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::Ticket)
{
    ui->setupUi(this);
}

void UserTicket::creattickts(vector<LineNode> &arr)
{
    QVBoxLayout*layout=new QVBoxLayout();
    for(auto r:arr){
        Ticket*t=new Ticket(this,r);
        layout->addWidget(t);
    }//此处添加

    //可以先把票都存入vector arr中再将上面的for循环改为for（auto r:arr)
    ui->zhida->setLayout(layout);

}

void UserTicket::on_stfbtn_clicked()
{
    UHP();
}

