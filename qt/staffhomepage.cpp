#include "staffhomepage.h"
#include"homepage.h"
extern ALGraph*algraph;
StaffHomePage::StaffHomePage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::StaffHomePage)
{
    ui->setupUi(this);
    this->SM=new StaffModify;
}

void StaffHomePage::on_modifybtn_clicked()
{
    this->close();
   // this->hide();
    SM->show();
    connect(SM,&StaffModify::SHP,this,[=]{SM->close();this->show();});
    std::vector<LineNode>arr=algraph->showAllLine();
    SM->creattickts(arr);
}

void StaffHomePage::on_trainbtn_clicked()
{
    algraph->mkind=2;
    ticketresults=new AddTicket("Train");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_14->text().toStdString();
    string endcity=this->ui->lineEdit_15->text().toStdString();
    string today=this->ui->lineEdit_16->text().toStdString();
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,2);
    ticketresults->creattickets(arr);
}


void StaffHomePage::on_planebtn_clicked()
{
    algraph->mkind=1;
    ticketresults=new AddTicket("Plane");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_11->text().toStdString();
    string endcity=this->ui->lineEdit_12->text().toStdString();
    string today=this->ui->lineEdit_13->text().toStdString();
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,1);
    ticketresults->creattickets(arr);
}


void StaffHomePage::on_carbtn_clicked()
{
    algraph->mkind=3;
    ticketresults=new AddTicket("car");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_7->text().toStdString();
    string endcity=this->ui->lineEdit_8->text().toStdString();
    string today=this->ui->lineEdit_9->text().toStdString();
    std::vector<LineNode>arr=algraph->printstraightPath(startcity,endcity,3);
    ticketresults->creattickets(arr);
}
