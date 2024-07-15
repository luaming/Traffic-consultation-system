#ifndef USERTICKET_H
#define USERTICKET_H
#include<ticket.h>
#include <QMainWindow>
#include"ui_SearchTicket.h"
class UserTicket : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserTicket(QString tool,QWidget *parent = nullptr);
    Ui::Ticket*ui;
signals:void UHP();
private slots:
    void on_stfbtn_clicked();
};

#endif // USERTICKET_H
