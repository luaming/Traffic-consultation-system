#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
    UserMainPage*UMP=new UserMainPage;
    this->hide();
    UMP->show();
}

LogIn::~LogIn()
{
    delete ui;
}
