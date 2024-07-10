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
signals:
};

#endif // USERTICKET_H
