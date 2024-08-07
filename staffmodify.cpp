#include "staffmodify.h"
#include "crawler_widget.h"
#include"homepage.h"
extern ALGraph*algraph;
StaffModify::StaffModify(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::StaffModify)
{
    ui->setupUi(this);
}

void StaffModify::creattickts(vector<LineNode> &arr)
{
    if(ui->scrollAreaWidgetContents->layout()!=nullptr){
        QLayoutItem*child;
        while((child=ui->scrollAreaWidgetContents->layout()->takeAt(0))!=0){
            if(child->widget()){
                child->widget()->setParent(nullptr);
                delete child->widget();
            }
        }
        delete child;
        delete ui->scrollAreaWidgetContents->layout();
    }
    QGridLayout*layout=new QGridLayout();
    int i=-1;int j=0;
    for(auto r:arr){
        i++;
        Ticket*t=new Ticket(this,r);
        layout->addWidget(t,j,i);

        if(i==1){i=-1;j++;}
    }//此处添加
    ui->scrollAreaWidgetContents->setLayout(layout);
}
void StaffModify::on_homebtn_clicked()
{
    SHP();
}

void StaffModify::on_stfbtn_clicked()
{
    QLayout*lay=ui->scrollAreaWidgetContents->layout();
    int num=lay->count();
    vector<LineNode>narr;
    for(int i=0;i<num;i++){
        QLayoutItem*it=lay->itemAt(i);
        Ticket*ticket=qobject_cast<Ticket*>(it->widget());

        if(ticket->choosed){
            algraph->delLine(ticket->line.start_city_name,ticket->line.end_city_name,ticket->line.amount);
        }
        else{
            narr.push_back(ticket->line);
        }
    }
    creattickts(narr);
}


void StaffModify::on_stfbtn_delete_clicked()
{
    string city=ui->lineEdit_10->text().toStdString();
    algraph->delCity(city);
    vector<LineNode>arr=algraph->showAllLine();
    creattickts(arr);
}


void StaffModify::on_stfbtn_add_clicked()
{
    string city=ui->lineEdit_10->text().toStdString();
    algraph->addCity(city);
    addCitytoSQL(city);
}

