#include "usermainpage.h"
//#include"homepage.h"
extern ALGraph*algraph;
UserMainPage::UserMainPage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserMainPage)
{

    ui->setupUi(this);
}

void UserMainPage::on_homebtn_clicked(bool checked)
{
    this->UHP();
}


void UserMainPage::on_pushButton_clicked()
{
    string sc=ui->lineEdit->text().toStdString();
    string ec=ui->lineEdit_2->text().toStdString();
    if(ui->radioButton_11->isChecked()){
        algraph->printLeastMoneyPath(sc,ec);

    }
    else if(ui->radioButton_12->isChecked()){
        algraph->printLeastTimePath(sc,ec);
    }
    else{}
}




void UserMainPage::on_radioButton_6_clicked(bool checked)
{
    if(checked){
        algraph->mkind=2;
        algraph->together=false;
    }
}


void UserMainPage::on_radioButton_5_clicked(bool checked)
{
    if(checked){
    algraph->mkind=1;
        algraph->together=false;}
}


void UserMainPage::on_radioButton_3_clicked(bool checked)
{
    if(checked){
    algraph->mkind=3;
    algraph->together=false;
    }
}


void UserMainPage::on_radioButton_4_clicked(bool checked)
{
    if(checked)
        algraph->together=true;
}

void UserMainPage::creattickts(vector<LineNode> &arr)
{
    QHBoxLayout*layout=new QHBoxLayout();
    for(auto r:arr){
        Ticket*t=new Ticket(this,r);
        layout->addWidget(t);
    }//此处添加

    ui->scrollAreaWidgetContents->setLayout(layout);
}

