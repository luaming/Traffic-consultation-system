#include "userticket.h"

UserTicket::UserTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::Ticket)
{
    ui->setupUi(this);
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

void UserTicket::creatzhongzhuantickts(vector<vector<LineNode>>&az)
{
    ui->tabWidget->removeTab(1);
    ui->tabWidget->removeTab(0);
    for(size_t i=0;i<az.size();i++){//路径数
        QString s=QString("路径%1").arg(i+1);
        QScrollArea* scrollArea = new QScrollArea;
        ui->tabWidget->addTab(scrollArea,s);
        QWidget* contentWidget = new QWidget;
        QVBoxLayout* layout = new QVBoxLayout(contentWidget);
        vector<LineNode>vl=az[i];
        for(size_t j=0;j<vl.size();j++){//车票
            Ticket*t=new Ticket(this,vl[j]);
            layout->addWidget(t);
        }
        scrollArea->setWidget(contentWidget);
    }

    //中转代码
}

void UserTicket::on_stfbtn_clicked()
{
    UHP();
}

