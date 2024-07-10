#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include"login.h"

#include"userhomepage.h"
#include <QMainWindow>
#include"ui_HomePage.h"
class HomePage : public QMainWindow
{
    Q_OBJECT
public:
    explicit HomePage(QWidget *parent = nullptr);
    Ui::HomePage*ui;
    LogIn*login;
    UserHomePage*UHP;
signals:
private slots:

    void on_userbtn_clicked();
    void on_stfbtn_clicked();
};

#endif // HOMEPAGE_H
