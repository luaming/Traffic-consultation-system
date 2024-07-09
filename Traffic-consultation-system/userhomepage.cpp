#include "userhomepage.h"

UserHomePage::UserHomePage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserHomePage)
{
    ui->setupUi(this);
}
