#ifndef TICKET_H
#define TICKET_H
#include<QGridLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QScrollArea>
#include <QWidget>
#include<QDebug>
#include "algraph.h"
namespace Ui {
class Ticket;
}

class Ticket : public QWidget
{
    Q_OBJECT

public:
    int choosed=0;//是否被选择
    LineNode line;
    explicit Ticket(QWidget *parent = nullptr,LineNode ll=LineNode());
    ~Ticket();
    Ui::Ticket *ui;

    void showarrival(QString arrival);

private slots:
    void on_background_clicked();

};

#endif // TICKET_H
