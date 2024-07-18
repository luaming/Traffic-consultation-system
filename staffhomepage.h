#ifndef STAFFHOMEPAGE_H
#define STAFFHOMEPAGE_H

#include <QMainWindow>
#include"ui_StaffHomePage.h"
#include"addticket.h"
#include"staffmodify.h"
#include"crawler_widget.h"
class StaffHomePage : public QMainWindow
{
    Q_OBJECT
public:
    explicit StaffHomePage(QWidget *parent = nullptr);
    virtual ~StaffHomePage();
    Ui::StaffHomePage *ui;
       StaffModify*SM;
    AddTicket*ticketresults;
    CrawlerWidget* m_pCrawlerWidget;

signals:
   private slots:
       void on_modifybtn_clicked();
       void on_trainbtn_clicked();
       void on_planebtn_clicked();
       void on_carbtn_clicked();

       void do_back();
};

#endif // STAFFHOMEPAGE_H
