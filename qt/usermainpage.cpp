#include "usermainpage.h"
//#include"homepage.h"
extern ALGraph*algraph;
UserMainPage::UserMainPage(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::UserMainPage)
{

    ui->setupUi(this);
   QHBoxLayout*layout=new QHBoxLayout();
    //总用时总花费
   //ui->summary->setText(QString("总用时：%1时%2分        总花费：%3元").arg().arg().arg());
   //添加车票begin

    for(int i=0;i<4;i++){
        Ticket*t=new Ticket();
        layout->addWidget(t);
    }//此处添加

    //添加车票end
    //可以先把票都存入vector arr中再将上面的for循环改为for（auto r:arr)
    ui->scrollAreaWidgetContents->setLayout(layout);

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



