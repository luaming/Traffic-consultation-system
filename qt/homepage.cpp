#include "homepage.h"

HomePage::HomePage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::HomePage)
{
    ui->setupUi(this);
    UHP=new UserHomePage;
    login=new LogIn;
}

void HomePage::on_userbtn_clicked()
{

    this->close();
    this->UHP->show();
}


void HomePage::on_stfbtn_clicked()
{
    this->close();
    this->login->show();
}

