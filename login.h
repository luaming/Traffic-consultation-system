#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"staffhomepage.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class LogIn;
}
QT_END_NAMESPACE

class LogIn : public QMainWindow
{
    Q_OBJECT

public:
    LogIn(QWidget *parent = nullptr);
    StaffHomePage*SHP;

    ~LogIn();
    bool Login(const QString& qstrName, const QString& qstrPassword);
private slots:


    void on_loginbtn_clicked();
    
private:
    Ui::LogIn *ui;
	//初始密码为什么要保存在这里？？？
	std::string Account = "admin";
	std::string Password = "admin";
};
#endif // LOGIN_H
