#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"usermainpage.h"
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
    ~LogIn();

private:
    Ui::LogIn *ui;
};
#endif // LOGIN_H
