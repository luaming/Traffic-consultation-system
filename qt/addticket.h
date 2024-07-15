#ifndef ADDTICKET_H
#define ADDTICKET_H

#include <QMainWindow>
#include"ui_AddTickets.h"
#include"ticket.h"
class AddTicket : public QMainWindow
{
    Q_OBJECT
public:
    explicit AddTicket(QString tool,QWidget *parent = nullptr);
    Ui::AllTickets*ui;

signals:
    void SHP();
private slots:
    void on_backbtn_clicked();
};

#endif // ADDTICKET_H
