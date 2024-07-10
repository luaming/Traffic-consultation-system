#ifndef STAFFMODIFY_H
#define STAFFMODIFY_H

#include <QMainWindow>
#include"ui_SatffModify.h"
class StaffModify : public QMainWindow
{
    Q_OBJECT
public:
    explicit StaffModify(QWidget *parent = nullptr);
    Ui::StaffModify*ui;
signals:
    void SHP();
private slots:

    void on_homebtn_clicked();
};

#endif // STAFFMODIFY_H
