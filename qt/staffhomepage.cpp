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
    algraph->printPathsByCity(startcity,endcity);
}


void StaffHomePage::on_planebtn_clicked()
{
    algraph->mkind=1;
    ticketresults=new AddTicket("Plane");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_14->text().toStdString();
    string endcity=this->ui->lineEdit_15->text().toStdString();
    string today=this->ui->lineEdit_16->text().toStdString();
    algraph->printPathsByCity(startcity,endcity);
}


void StaffHomePage::on_carbtn_clicked()
{
    algraph->mkind=3;
    ticketresults=new AddTicket("car");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
    string startcity=this->ui->lineEdit_14->text().toStdString();
    string endcity=this->ui->lineEdit_15->text().toStdString();
    string today=this->ui->lineEdit_16->text().toStdString();
    algraph->printPathsByCity(startcity,endcity);
}
