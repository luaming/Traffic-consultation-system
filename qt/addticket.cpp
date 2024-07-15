#include "addticket.h"

AddTicket::AddTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::AllTickets)
{
    ui->setupUi(this);
}

void AddTicket::on_backbtn_clicked()
{
    SHP();
}

