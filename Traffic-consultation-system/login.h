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

private slots:


    void on_loginbtn_clicked();

private:
    Ui::LogIn *ui;
};
#endif // LOGIN_H
