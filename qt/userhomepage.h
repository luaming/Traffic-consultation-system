#ifndef USERHOMEPAGE_H
#define USERHOMEPAGE_H
#include"usermainpage.h"
#include <QMainWindow>
#include"ui_UserHomePage.h"
#include"userticket.h"
class UserHomePage : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserHomePage(QWidget *parent = nullptr);
    UserMainPage*UMP;
    Ui::UserHomePage*ui;
    UserTicket*ticketresults;
signals:
private slots:
    void on_minebtn_clicked();
    void on_trainbtn_clicked();
    void on_planebtn_clicked();
    void on_carbtn_clicked();
};

#endif // USERHOMEPAGE_H
