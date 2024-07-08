#include "login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow{parent}
{}

void LogIn::paintEvent(QPaintEvent*){
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing,true);
    QPixmap pix;
    pix.load(":/LogIn.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

}
