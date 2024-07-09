#ifndef USERHOMEPAGE_H
#define USERHOMEPAGE_H

#include <QMainWindow>
#include"ui_UserHomePage.h"
class UserHomePage : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserHomePage(QWidget *parent = nullptr);

    Ui::UserHomePage*ui;
signals:
};

#endif // USERHOMEPAGE_H
