#include "staffmodify.h"
#include "crawler_widget.h"
StaffModify::StaffModify(QWidget *parent)
    : QMainWindow{parent},ui(new Ui::StaffModify)
{
    ui->setupUi(this);
    connect(ui->stfbtnCrawler, &QPushButton::clicked, this, &StaffModify::on_stfbtnCrawler_clicked);
    m_pCrawlerWidget = new CrawlerWidget(this);
    QGridLayout*layout=new QGridLayout();
    //添加车票begin

    for(int i=0;i<4;i++){
        Ticket*t=new Ticket();
        layout->addWidget(t);
    }//此处添加

    //添加车票end
    //可以先把票都存入vector arr中再将上面的for循环改为for（auto r:arr)
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
