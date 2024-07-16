#include "userticket.h"

UserTicket::UserTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::Ticket)
{
    ui->setupUi(this);
    //中转代码
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);
    for(int i=1;i<=4;i++){//路径数
        QString s=QString("路径%1").arg(i);
        QScrollArea* scrollArea = new QScrollArea;
        ui->tabWidget->addTab(scrollArea,s);
        QWidget* contentWidget = new QWidget;
        QVBoxLayout* layout = new QVBoxLayout(contentWidget);
        for(int j=0;j<4;j++){//车票
            //Ticket*t=new Ticket(this,r);
            QPushButton*t=new QPushButton(QString::number(i));
            t->setMinimumSize(300,200);
            layout->addWidget(t);
        }
        scrollArea->setWidget(contentWidget);
    }

    //中转代码
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

