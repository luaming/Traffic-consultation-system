#include "staffmodify.h"
#include "crawler_widget.h"
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
void StaffModify::on_homebtn_clicked()
{
    SHP();
}

void StaffModify::on_stfbtnCrawler_clicked()
{
    m_pCrawlerWidget->setVisible(true);
}
