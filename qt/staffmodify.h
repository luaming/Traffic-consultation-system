#ifndef STAFFMODIFY_H
#define STAFFMODIFY_H

#include <QMainWindow>
#include"ui_SatffModify.h"
#include"ticket.h"
class CrawlerWidget;
class StaffModify : public QMainWindow
{
    Q_OBJECT
public:
    explicit StaffModify(QWidget *parent = nullptr);
    void creattickts(vector<LineNode>&arr);
    Ui::StaffModify*ui;
signals:
    void SHP();
private slots:
    void on_homebtn_clicked();
    void on_stfbtn_clicked();
};

#endif // STAFFMODIFY_H
