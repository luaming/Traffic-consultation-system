#include "staffhomepage.h"

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
    ticketresults=new AddTicket("Train");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
}


void StaffHomePage::on_planebtn_clicked()
{
    ticketresults=new AddTicket("Plane");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
}


void StaffHomePage::on_carbtn_clicked()
{
    ticketresults=new AddTicket("car");
    this->close();
    ticketresults->show();
    connect(ticketresults,&AddTicket::SHP,this,[=](){ticketresults->close();this->show();});
}
