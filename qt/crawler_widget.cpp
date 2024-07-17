#include "crawler_widget.h"
#include "ui_crawler_widget.h"
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QHeaderView>
#include <QDate>
#include<fstream>
#include"ALGraph.h"
#include"ticket.h"
extern ALGraph*algraph;
using namespace std;

CrawlerWidget::CrawlerWidget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainWindow)
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);
    connect(manager, &QNetworkAccessManager::finished, this, &CrawlerWidget::onReplyFinished);
    loadStationInfo();
}

CrawlerWidget::~CrawlerWidget() {
    delete ui;
}

void CrawlerWidget::loadStationInfo() {
    QFile file("station_info.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Cannot open station info file");
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split('|');
        if (parts.size() == 2) {
            stationMap.insert(parts[0], parts[1]);
        }
    }
}

void CrawlerWidget::onReplyFinished(QNetworkReply *reply) {
    if (reply->error() != QNetworkReply::NoError) {
        QMessageBox::warning(this, "Error", "Network error: " + reply->errorString());
        reply->deleteLater();
        return;
    }

    if(ui->scrollAreaWidgetContents->layout()!=nullptr){
        delete ui->scrollAreaWidgetContents->layout();
    }
    QGridLayout*layout=new QGridLayout;

    string start_city_name=fromStation.toStdString();
    string end_city_name=toStation.toStdString();
    QByteArray response = reply->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
    QJsonObject jsonObj = jsonDoc.object();
    QJsonArray jsonArray = jsonObj["data"].toArray();
    QStringList headers = {"车次", "起点站", "起点站代号", "终点站", "终点站代号", "出发站", "出发站代号", "到站", "到站代号",
                           "开始时", "结束时", "持续时间", "商务座", "一等座", "二等座", "高级软卧", "软卧", "硬卧", "软座", "硬座", "站票"};
    for (int i = 0; i < jsonArray.size(); ++i) {

        QJsonObject obj = jsonArray[i].toObject()["queryLeftNewDTO"].toObject();


        string amount=obj["station_train_code"].toString().toStdString();
        string show_start=obj["start_station_name"].toString().toStdString();
        string show_end=obj["end_station_name"].toString().toStdString();
        string start_time=obj["start_time"].toString().toStdString();
        string end_time=obj["arrive_time"].toString().toStdString();
        string spend_time=obj["lishi"].toString().toStdString();
        Time start_t,end_t,spend_t;
        char c;
        stringstream s1;
        s1<<start_time;
        s1>>start_t.hour>>c>>start_t.minute;
        stringstream s2;
        s2<<end_time;
        s2>>end_t.hour>>c>>end_t.minute;
        stringstream s3;
        s3<<spend_time;
        s3>>spend_t.hour>>c>>spend_t.minute;
        stringstream ss4;
        string num1=obj["ze_price"].toString().toStdString();
        string num2=obj["yw_price"].toString().toStdString();
        float money;
        if(num1==string("--")){
            ss4<<num2;
            ss4>>money;
        }
        else{
            ss4<<num1;
            ss4>>money;
        }
        money=money/10;
        LineNode line(start_city_name,end_city_name,start_t, end_t,
                      spend_t, money, amount, 2,show_start,show_end);
        Ticket*t=new Ticket(this,line);
        layout->addWidget(t);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);

    reply->deleteLater();
}

void CrawlerWidget::creattickesfromcrawler()
{

    if (!stationMap.contains(fromStation) || !stationMap.contains(toStation)) {
        QMessageBox::warning(this, "Error", "Invalid station names");
        return;
    }

    // 验证日期格式
    QDate formattedDate = QDate::fromString(date, "yyyy-MM-dd");
    if (!formattedDate.isValid()) {
        QMessageBox::warning(this, "Error", "Invalid date format. Please use yyyy-MM-dd.");
        return;
    }

    QString fromStationCode = stationMap.value(fromStation);
    QString toStationCode = stationMap.value(toStation);

    QString url = QString("https://kyfw.12306.cn/otn/leftTicketPrice/query?leftTicketDTO.train_date=%1"
                          "&leftTicketDTO.from_station=%2"
                          "&leftTicketDTO.to_station=%3").arg(date, fromStationCode, toStationCode);

    manager->get(QNetworkRequest(QUrl(url)));
}

void CrawlerWidget::on_backbtn_clicked()
{
    emit Back();
}


void CrawlerWidget::on_addbtn_clicked()
{
    QLayout*lay=ui->scrollAreaWidgetContents->layout();
    int num=lay->count();
    for(int i=0;i<num;i++){
        QLayoutItem*it=lay->itemAt(i);
        Ticket*ticket=qobject_cast<Ticket*>(it->widget());
        if(ticket->choosed){
            algraph->addLine(ticket->line);
        }
    }
}

