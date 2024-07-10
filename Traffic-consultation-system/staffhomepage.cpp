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

