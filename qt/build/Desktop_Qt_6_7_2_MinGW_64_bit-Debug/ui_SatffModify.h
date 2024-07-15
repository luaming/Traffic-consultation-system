/********************************************************************************
** Form generated from reading UI file 'SatffModify.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATFFMODIFY_H
#define UI_SATFFMODIFY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StaffModify
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit_10;
    QLabel *label;
    QPushButton *searchbtn;
    QLineEdit *lineEdit;
    QWidget *bottom;
    QPushButton *homebtn;
    QPushButton *pushButton_3;
    QFrame *line;
    QFrame *line_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame_13;
    QPushButton *stfbtn;
    QPushButton *stfbtnCrawler;

    void setupUi(QMainWindow *StaffModify)
    {
        if (StaffModify->objectName().isEmpty())
            StaffModify->setObjectName("StaffModify");
        StaffModify->resize(800, 500);
        centralwidget = new QWidget(StaffModify);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-10, 0, 451, 51));
        frame->setStyleSheet(QString::fromUtf8("border:none;\n"
"background-color:rgba(255,255,255,0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_10 = new QLineEdit(frame);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(110, 10, 251, 38));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:#e2e2e2;border:none;color:grey"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 305, 38));
        label->setStyleSheet(QString::fromUtf8("border-radius:13px;\n"
"background-color:#e2e2e2;"));
        searchbtn = new QPushButton(frame);
        searchbtn->setObjectName("searchbtn");
        searchbtn->setGeometry(QRect(83, 16, 22, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchbtn->setIcon(icon);
        searchbtn->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 9, 251, 37));
        bottom = new QWidget(centralwidget);
        bottom->setObjectName("bottom");
        bottom->setEnabled(true);
        bottom->setGeometry(QRect(0, 420, 800, 80));
        bottom->setMinimumSize(QSize(800, 80));
        bottom->setStyleSheet(QString::fromUtf8("#bottom{\n"
"background-color: rgb(255, 255, 255); \n"
"}\n"
"#mainbody{\n"
"background-color:rgb(247,247,247);\n"
"}"));
        homebtn = new QPushButton(bottom);
        homebtn->setObjectName("homebtn");
        homebtn->setGeometry(QRect(0, 0, 400, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(25);
        font1.setBold(true);
        homebtn->setFont(font1);
        homebtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homebtn->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        pushButton_3 = new QPushButton(bottom);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 0, 400, 80));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("*{border:none;color:#5172c4;}"));
        line = new QFrame(bottom);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 0, 800, 1));
        QFont font2;
        font2.setPointSize(2);
        line->setFont(font2);
        line->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(bottom);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(400, 0, 1, 80));
        line_2->setAutoFillBackground(false);
        line_2->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 70, 721, 321));
        scrollArea->setMinimumSize(QSize(721, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 319));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName("frame_13");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy);
        frame_13->setMinimumSize(QSize(351, 91));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_13, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        stfbtn = new QPushButton(centralwidget);
        stfbtn->setObjectName("stfbtn");
        stfbtn->setGeometry(QRect(550, 10, 111, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stfbtn->sizePolicy().hasHeightForWidth());
        stfbtn->setSizePolicy(sizePolicy1);
        stfbtn->setMinimumSize(QSize(0, 9));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(18);
        stfbtn->setFont(font3);
        stfbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn->setLayoutDirection(Qt::LeftToRight);
        stfbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn->setIconSize(QSize(20, 20));
        stfbtnCrawler = new QPushButton(centralwidget);
        stfbtnCrawler->setObjectName("stfbtnCrawler");
        stfbtnCrawler->setGeometry(QRect(680, 10, 111, 41));
        sizePolicy1.setHeightForWidth(stfbtnCrawler->sizePolicy().hasHeightForWidth());
        stfbtnCrawler->setSizePolicy(sizePolicy1);
        stfbtnCrawler->setMinimumSize(QSize(0, 9));
        stfbtnCrawler->setFont(font3);
        stfbtnCrawler->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtnCrawler->setLayoutDirection(Qt::LeftToRight);
        stfbtnCrawler->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtnCrawler->setIconSize(QSize(20, 20));
        StaffModify->setCentralWidget(centralwidget);

        retranslateUi(StaffModify);

        QMetaObject::connectSlotsByName(StaffModify);
    } // setupUi

    void retranslateUi(QMainWindow *StaffModify)
    {
        StaffModify->setWindowTitle(QCoreApplication::translate("StaffModify", "MainWindow", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("StaffModify", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\345\237\216\345\270\202", nullptr));
        label->setText(QString());
        searchbtn->setText(QString());
        homebtn->setText(QCoreApplication::translate("StaffModify", "\351\246\226\351\241\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StaffModify", "\344\277\256\346\224\271", nullptr));
        stfbtn->setText(QCoreApplication::translate("StaffModify", "\345\210\240\351\231\244", nullptr));
        stfbtnCrawler->setText(QCoreApplication::translate("StaffModify", "\347\210\254\350\231\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffModify: public Ui_StaffModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATFFMODIFY_H
