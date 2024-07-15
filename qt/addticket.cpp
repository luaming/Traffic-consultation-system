#include "addticket.h"

AddTicket::AddTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::AllTickets)
{
    ui->setupUi(this);
    QGridLayout*layout=new QGridLayout();
    //添加车票begin

    for(int i=0;i<4;i++){
        Ticket*t=new Ticket();
        layout->addWidget(t);
    }//此处添加

    //添加车票end
    //可以先把票都存入vector arr中再将上面的for循环改为for（auto r:arr)
    ui->scrollAreaWidgetContents->setLayout(layout);
}

void AddTicket::on_backbtn_clicked()
{
    SHP();
}

