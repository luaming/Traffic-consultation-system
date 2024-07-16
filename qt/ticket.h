#ifndef TICKET_H
#define TICKET_H
#include<QGridLayout>
#include<QVBoxLayout>
#include<QHBoxLayout>
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
    explicit Ticket(QWidget *parent = nullptr,LineNode ll=LineNode());
    ~Ticket();


private slots:
    void on_background_clicked();

private:

    Ui::Ticket *ui;
};

#endif // TICKET_H
