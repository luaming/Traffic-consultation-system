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

private slots:
    void on_fetchButton_clicked();
    void onReplyFinished(QNetworkReply*);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QTableWidget *table;
    void loadStationInfo();
    QMap<QString, QString> stationMap; // �洢��վ���ƺʹ����ӳ��
};

#endif // MAINWINDOW_H
