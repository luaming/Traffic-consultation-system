#include "usermainpage.h"
#include"homepage.h"
extern ALGraph*algraph;

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


void UserMainPage::on_pushButton_clicked()
{
    string sc=ui->lineEdit->text().toStdString();
    string ec=ui->lineEdit_2->text().toStdString();
    if(ui->radioButton_3->isChecked()){
        algraph->mkind=3;
        algraph->together=false;
    }
    if(ui->radioButton_4->isChecked()){
        algraph->together=true;
    }
    if(ui->radioButton_5->isChecked()){
        algraph->mkind=1;
        algraph->together=false;
    }
    if(ui->radioButton_6->isChecked()){
        algraph->mkind=2;
        algraph->together=false;
    }
    if(ui->radioButton_11->isChecked()){
        algraph->printLeastMoneyPath(sc,ec);
    }
    else if(ui->radioButton_12->isChecked()){
        algraph->printLeastTimePath(sc,ec);
    }
    else{}
}

