#include "login.h"
#include "ui_login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LogIn)
{
    ui->setupUi(this);
    this->SHP=new StaffHomePage;

}

LogIn::~LogIn()
{
    delete ui;
}




void LogIn::on_loginbtn_clicked()
{
    if(this->ui->IDedit->text()==""&&this->ui->passwordedit->text()==""){
        this->close();
        SHP->show();
    }
}

