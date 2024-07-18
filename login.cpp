#include "login.h"
#include "ui_login.h"
#include <QMessagebox>
//#include "../TrafficConsultationSystem/tcs_main.cpp"
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




bool LogIn::Login(const QString& qstrName, const QString& qstrPassword)
{
	return qstrName.toStdString() == Account && qstrPassword.toStdString() == Password;
}

void LogIn::on_loginbtn_clicked()
{
	QString qstrName = ui->IDedit->text();
	QString qstrPassowrd = ui->passwordedit->text();
	if (Login(qstrName, qstrPassowrd))
	{
		QMessageBox::information(this, tr("Tip"), tr("Login success."));
		this->close();
		SHP->show();
	}
	else
		QMessageBox::critical(this, tr("Tip"), tr("Account or Password is error."));
}

