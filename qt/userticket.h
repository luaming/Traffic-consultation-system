#ifndef USERTICKET_H
#define USERTICKET_H

#include <QMainWindow>
#include"ui_Ticket.h"
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
