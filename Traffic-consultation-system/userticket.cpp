#include "userticket.h"

UserTicket::UserTicket(QString tool,QWidget *parent)
    : QMainWindow{parent},ui(new Ui::Ticket)
{
    ui->setupUi(this);

}
