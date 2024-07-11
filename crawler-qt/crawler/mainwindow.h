#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_fetchButton_clicked();
    void onReplyFinished(QNetworkReply*);

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QTableWidget *table;
    void loadStationInfo();
    QMap<QString, QString> stationMap; // 存储车站名称和代码的映射
};

#endif // MAINWINDOW_H
