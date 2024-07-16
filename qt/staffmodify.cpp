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

    QGridLayout*layout=new QGridLayout();
    std::vector<LineNode>arr=algraph->showAllLine();
    for(auto r:arr){
        Ticket*t=new Ticket(this,r);
        layout->addWidget(t);
    }//此处添加
    ui->scrollAreaWidgetContents->setLayout(layout);
}

StaffModify::~StaffModify() {
    delete m_pCrawlerWidget;
    m_pCrawlerWidget = nullptr;
}
void StaffModify::on_homebtn_clicked()
{
    SHP();
}

void StaffModify::on_stfbtnCrawler_clicked()
{
    m_pCrawlerWidget->setVisible(true);
}
