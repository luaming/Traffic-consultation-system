#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
    UserMainPage*UMP=new UserMainPage;
   // ui->pushButton->setStyleSheet("QPushButton:pressed { background-color: green; }");

    this->hide();
    UMP->show();
    UserHomePage*UHP=new UserHomePage;
    UHP->show();
}

LogIn::~LogIn()
{
    delete ui;
}
