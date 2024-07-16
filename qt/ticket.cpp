#include "ticket.h"
#include "ui_ticket.h"
Ticket::Ticket(QWidget *parent,LineNode ll)
    : QWidget(parent)
    , ui(new Ui::Ticket)
{
    line=ll;
    ui->setupUi(this);
    ui->stime->setText(QString("%1:%2").arg(ll.start_time.hour,2,10,QChar('0')).arg(ll.start_time.minute,2,10,QChar('0')));
     ui->etime->setText(QString("%1:%2").arg(ll.end_time.hour,2,10,QChar('0')).arg(ll.end_time.minute,2,10,QChar('0')));
     ui->tool->setText(QString::fromStdString(ll.amount));
     ui->splace->setText(QString::fromStdString(ll.start_city_name));
     ui->eplace->setText(QString::fromStdString(ll.end_city_name));
     ui->cost->setText(QString::number(ll.spend_money));
     ui->time->setText(QString("%1时%2分").arg(ll.spend_time.hour).arg(ll.spend_time.minute));
     if(ll.end_time.getTotalMintue()<ll.start_time.getTotalMintue()){ll.end_time.day++;}
     ui->arrive->setText(QString("预计到达时间:+%1日%2时%3分").arg(ll.end_time.day)
                             .arg(ll.end_time.hour,2,10,QChar('0')).arg(ll.end_time.minute,2,10,QChar('0')));
     QString tool="/";
     switch (ll.kind) {
     case 1:
         tool+="plane.png";
         break;
     case 2:
         tool+="train.png";
         break;
     case 3:
         tool+="car.png";
         break;
     default:
         break;
     }
     if(ll.kind<=3){
     QPixmap pix(tool);
     ui->img->setPixmap(pix);
     ui->img->setScaledContents(true); }

}

Ticket::~Ticket()
{
    delete ui;
}

void Ticket::on_background_clicked()
{   if(choosed==0)ui->background->setStyleSheet("background-color:#d9d9d9;");
    else ui->background->setStyleSheet("background-color:#fffff;");
    choosed=!choosed;
    qDebug()<<choosed;
}

