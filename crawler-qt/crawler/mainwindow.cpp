#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QHeaderView>
#include <QDate>
#include<fstream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::onReplyFinished);
    loadStationInfo();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::loadStationInfo() {
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

void MainWindow::on_fetchButton_clicked() {
    QString date = ui->dateLineEdit->text();
    QString fromStation = ui->fromStationLineEdit->text();
    QString toStation = ui->toStationLineEdit->text();

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

void MainWindow::onReplyFinished(QNetworkReply *reply) {
    if (reply->error() != QNetworkReply::NoError) {
        QMessageBox::warning(this, "Error", "Network error: " + reply->errorString());
        reply->deleteLater();
        return;
    }

    QByteArray response = reply->readAll();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(response);
    QJsonObject jsonObj = jsonDoc.object();
    QJsonArray jsonArray = jsonObj["data"].toArray();

    ui->tableWidget->setRowCount(jsonArray.size());
    ui->tableWidget->setColumnCount(20);
    QStringList headers = {"车次", "起点站", "起点站代号", "终点站", "终点站代号", "出发站", "出发站代号", "到站", "到站代号",
                           "开始时", "结束时", "持续时间", "商务座", "一等座", "二等座", "高级软卧", "软卧", "硬卧", "软座", "硬座", "站票"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    std::ofstream ofs("out.txt");

    for (int i = 0; i < jsonArray.size(); ++i) {
        QJsonObject obj = jsonArray[i].toObject()["queryLeftNewDTO"].toObject();
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(obj["station_train_code"].toString()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(obj["start_station_name"].toString()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(obj["start_station_telecode"].toString()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(obj["end_station_name"].toString()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(obj["end_station_telecode"].toString()));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(obj["from_station_name"].toString()));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(obj["from_station_telecode"].toString()));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(obj["to_station_name"].toString()));
        ui->tableWidget->setItem(i, 8, new QTableWidgetItem(obj["to_station_telecode"].toString()));
        ui->tableWidget->setItem(i, 9, new QTableWidgetItem(obj["start_time"].toString()));
        ui->tableWidget->setItem(i, 10, new QTableWidgetItem(obj["arrive_time"].toString()));
        ui->tableWidget->setItem(i, 11, new QTableWidgetItem(obj["lishi"].toString()));
        ui->tableWidget->setItem(i, 12, new QTableWidgetItem(obj["swz_price"].toString()));
        ui->tableWidget->setItem(i, 13, new QTableWidgetItem(obj["zy_price"].toString()));
        ui->tableWidget->setItem(i, 14, new QTableWidgetItem(obj["ze_price"].toString()));
        ui->tableWidget->setItem(i, 15, new QTableWidgetItem(obj["gr_price"].toString()));
        ui->tableWidget->setItem(i, 16, new QTableWidgetItem(obj["rw_price"].toString()));
        ui->tableWidget->setItem(i, 17, new QTableWidgetItem(obj["yw_price"].toString()));
        ui->tableWidget->setItem(i, 18, new QTableWidgetItem(obj["rz_price"].toString()));
        ui->tableWidget->setItem(i, 19, new QTableWidgetItem(obj["yz_price"].toString()));
        ui->tableWidget->setItem(i, 20, new QTableWidgetItem(obj["wz_price"].toString()));
    }

    reply->deleteLater();
}
