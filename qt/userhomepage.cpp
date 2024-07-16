#include "userhomepage.h"
#include"homepage.h"
extern ALGraph*algraph;
UserHomePage::UserHomePage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserHomePage)
{
    ui->setupUi(this);
    //ui->pushButton->setStyleSheet("QPushButton:pressed { background-color: green; }");
    UMP=new UserMainPage;
}

void UserHomePage::on_minebtn_clicked()
{
    this->close();
    UMP->show();
    connect(UMP,&UserMainPage::UHP,this,[=](){UMP->close();this->show();});
}


void UserHomePage::on_trainbtn_clicked()
{
    ticketresults=new UserTicket("Train");
    this->close();
    ticketresults->show();
    connect(ticketresults,&UserTicket::UHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_14->text().toStdString();
    string endcity=this->ui->lineEdit_15->text().toStdString();
    string today=this->ui->lineEdit_16->text().toStdString();
    algraph->mkind=2;
    std::vector<vector<LineNode>> arz=algraph->getPathsByCity(startcity,endcity);
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,2);
    ticketresults->creattickts(arr);
    ticketresults->creatzhongzhuantickts(arz);
}


void UserHomePage::on_planebtn_clicked()
{
    ticketresults=new UserTicket("Plane");
    this->close();
    ticketresults->show();
    connect(ticketresults,&UserTicket::UHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_11->text().toStdString();
    string endcity=this->ui->lineEdit_12->text().toStdString();
    string today=this->ui->lineEdit_13->text().toStdString();
    algraph->mkind=1;
    algraph->printPathsByCity(startcity,endcity);
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,1);
    ticketresults->creattickts(arr);
    std::vector<vector<LineNode>> arz=algraph->getPathsByCity(startcity,endcity);
    ticketresults->creatzhongzhuantickts(arz);
}


void UserHomePage::on_carbtn_clicked()
{
    ticketresults=new UserTicket("car");
    this->close();
    ticketresults->show();
    connect(ticketresults,&UserTicket::UHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_7->text().toStdString();
    string endcity=this->ui->lineEdit_8->text().toStdString();
    string today=this->ui->lineEdit_9->text().toStdString();
    algraph->mkind=3;
    algraph->printPathsByCity(startcity,endcity);
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,3);
    ticketresults->creattickts(arr);
    std::vector<vector<LineNode>> arz=algraph->getPathsByCity(startcity,endcity);
    ticketresults->creatzhongzhuantickts(arz);
}

