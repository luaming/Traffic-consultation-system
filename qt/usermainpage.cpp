#include "usermainpage.h"

UserMainPage::UserMainPage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserMainPage)
{
    ui->setupUi(this);
    //ui->pushButton->setStyleSheet("QPushButton:pressed { background-color: green; }");

}

void UserMainPage::on_homebtn_clicked(bool checked)
{
    this->UHP();
}

