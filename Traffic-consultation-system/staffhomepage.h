#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QMainWindow>
#include"ui_StaffHomePage.h"
#include"staffmodify.h"
class StaffHomePage : public QMainWindow
{
    Q_OBJECT
public:
    explicit StaffHomePage(QWidget *parent = nullptr);
    Ui::StaffHomePage *ui;
       StaffModify*SM;
signals:
   private slots:
       void on_modifybtn_clicked();

};

#endif // STAFFHOMEPAGE_H
