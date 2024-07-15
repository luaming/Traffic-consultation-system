#include "ticket.h"
#include "ui_ticket.h"

Ticket::Ticket(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ticket)
{

    ui->setupUi(this);
    // ui->stime->setText(QString("%1:%2").arg(t.start_time.hour).arg(t.start_time.minute));
    // ui->etime->setText(QString("%1:%2").arg(t.end_time.hour).arg(t.end_time.minute));
    // ui->tool->setText(QString::fromStdString(t.amount));
    // ui->splace->setText(QString::fromStdString(t.start_city_name));
    // ui->eplace->setText(QString::fromStdString(t.end_city_name));
    // ui->cost->setText(QString::number(t.spend_money));
    // ui->time->setText(QString("%1时%2分").arg(t.spend_time.hour).arg(t.spend_time.minute));
    // ui->arrive->setText(QString("预计到达时间：%1日%2时%3分").arg(t.end_time.day).arg(t.end_time.hour).arg(t.end_time.minute));
    // QString tool="/";
    // switch (t.kind) {
    // case 1:
    //     tool+="plane.png";
    //     break;
    // case 2:
    //     tool+="train.png";
    //     break;
    // case 3:
    //     tool+="car.png";
    //     break;
    // default:
    //     break;
    // }
    // if(t.kind<=3){
    // QPixmap pix(tool);
    // ui->img->setPixmap(pix);
    // ui->img->setScaledContents(true); }

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

