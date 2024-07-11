#include "userhomepage.h"

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
}


void UserHomePage::on_planebtn_clicked()
{
    ticketresults=new UserTicket("Plane");
    this->close();
    ticketresults->show();
    connect(ticketresults,&UserTicket::UHP,this,[=](){ticketresults->close();this->show();});
}


void UserHomePage::on_carbtn_clicked()
{
    ticketresults=new UserTicket("car");
    this->close();
    ticketresults->show();
    connect(ticketresults,&UserTicket::UHP,this,[=](){ticketresults->close();this->show();});
}

