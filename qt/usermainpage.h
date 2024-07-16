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

    void on_radioButton_6_clicked(bool checked);
    void on_radioButton_5_clicked(bool checked);
    void on_radioButton_3_clicked(bool checked);
    void on_radioButton_4_clicked(bool checked);
    void creattickts(vector<LineNode>&arr);
};

#endif // USERMAINPAGE_H
