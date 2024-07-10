#include "staffmodify.h"

StaffModify::StaffModify(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::StaffModify)
{
    ui->setupUi(this);
}

void StaffModify::on_homebtn_clicked()
{
    SHP();
}

