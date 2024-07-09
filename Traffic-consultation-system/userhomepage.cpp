#include "userhomepage.h"

UserHomePage::UserHomePage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserHomePage)
{
    ui->setupUi(this);
    //ui->pushButton->setStyleSheet("QPushButton:pressed { background-color: green; }");
}
