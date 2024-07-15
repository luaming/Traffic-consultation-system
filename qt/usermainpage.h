#ifndef USERMAINPAGE_H
#define USERMAINPAGE_H
#include"ticket.h"
#include <QMainWindow>
#include"ui_UserMainPage.h"
class UserMainPage : public QMainWindow
{
    Q_OBJECT
public:
    explicit UserMainPage(QWidget *parent = nullptr);
private:
    Ui::UserMainPage*ui;
signals:
    void UHP();
private slots:
    void on_homebtn_clicked(bool checked);
    void on_pushButton_clicked();

};

#endif // USERMAINPAGE_H
