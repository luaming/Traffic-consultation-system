#include "staffmodify.h"
#include "crawler_widget.h"
#include"homepage.h"
extern ALGraph*algraph;
StaffModify::StaffModify(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::StaffModify)
{
    ui->setupUi(this);
    connect(ui->stfbtnCrawler, &QPushButton::clicked, this, &StaffModify::on_stfbtnCrawler_clicked);
    m_pCrawlerWidget = new CrawlerWidget(this);
}

StaffModify::~StaffModify() {
    delete m_pCrawlerWidget;
    m_pCrawlerWidget = nullptr;
}

void StaffModify::creattickts(vector<LineNode> &arr)
{
    if(ui->scrollAreaWidgetContents->layout()!=nullptr){
        delete ui->scrollAreaWidgetContents->layout();
    }
    QGridLayout*layout=new QGridLayout();
    for(auto r:arr){
        Ticket*t=new Ticket(this,r);
        layout->addWidget(t);
    }//此处添加
    ui->scrollAreaWidgetContents->setLayout(layout);
}
void StaffModify::on_homebtn_clicked()
{
    SHP();
}

void StaffModify::on_stfbtnCrawler_clicked()
{
    m_pCrawlerWidget->setVisible(true);
}

void StaffModify::on_stfbtn_clicked()
{
    QLayout*lay=ui->scrollAreaWidgetContents->layout();
    int num=lay->count();
    for(int i=0;i<num;i++){
        QLayoutItem*it=lay->itemAt(i);
        Ticket*ticket=qobject_cast<Ticket*>(it->widget());
        if(ticket->choosed){
            algraph->delLine(ticket->line.start_city_name,ticket->line.end_city_name,ticket->line.amount);
        }
    }
}

