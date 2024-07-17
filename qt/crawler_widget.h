#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class CrawlerWidget: public QDialog {
    Q_OBJECT

public:
    CrawlerWidget(QWidget *parent = nullptr);
    ~CrawlerWidget();
    void creattickesfromcrawler();
    QString date;
    QString fromStation;
    QString toStation;

signals:
    void Back();
private slots:
    void onReplyFinished(QNetworkReply*);

    void on_backbtn_clicked();

    void on_addbtn_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QTableWidget *table;
    void loadStationInfo();
    QMap<QString, QString> stationMap; // 存储车站名称和代码的映射
};

#endif // MAINWINDOW_H
