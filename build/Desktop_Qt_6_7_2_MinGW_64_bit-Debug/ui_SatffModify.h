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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
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
    QPushButton *stfbtn_add;
    QPushButton *stfbtn_delete;
    QWidget *bottom;
    QPushButton *homebtn;
    QPushButton *pushButton_3;
    QFrame *line;
    QFrame *line_2;
    QPushButton *stfbtn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

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
        lineEdit_10->setGeometry(QRect(50, 10, 121, 38));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:#e2e2e2;border:none;color:grey"));
        stfbtn_add = new QPushButton(frame);
        stfbtn_add->setObjectName("stfbtn_add");
        stfbtn_add->setGeometry(QRect(210, 10, 111, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stfbtn_add->sizePolicy().hasHeightForWidth());
        stfbtn_add->setSizePolicy(sizePolicy);
        stfbtn_add->setMinimumSize(QSize(0, 9));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(13);
        stfbtn_add->setFont(font1);
        stfbtn_add->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn_add->setLayoutDirection(Qt::LeftToRight);
        stfbtn_add->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn_add->setIconSize(QSize(20, 20));
        stfbtn_delete = new QPushButton(frame);
        stfbtn_delete->setObjectName("stfbtn_delete");
        stfbtn_delete->setGeometry(QRect(340, 10, 111, 41));
        sizePolicy.setHeightForWidth(stfbtn_delete->sizePolicy().hasHeightForWidth());
        stfbtn_delete->setSizePolicy(sizePolicy);
        stfbtn_delete->setMinimumSize(QSize(0, 9));
        stfbtn_delete->setFont(font1);
        stfbtn_delete->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn_delete->setLayoutDirection(Qt::LeftToRight);
        stfbtn_delete->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn_delete->setIconSize(QSize(20, 20));
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
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(25);
        font2.setBold(true);
        homebtn->setFont(font2);
        homebtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        homebtn->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        pushButton_3 = new QPushButton(bottom);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(400, 0, 400, 80));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("*{border:none;color:#5172c4;}"));
        line = new QFrame(bottom);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 0, 800, 1));
        QFont font3;
        font3.setPointSize(2);
        line->setFont(font3);
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
        stfbtn = new QPushButton(centralwidget);
        stfbtn->setObjectName("stfbtn");
        stfbtn->setGeometry(QRect(630, 10, 111, 41));
        sizePolicy.setHeightForWidth(stfbtn->sizePolicy().hasHeightForWidth());
        stfbtn->setSizePolicy(sizePolicy);
        stfbtn->setMinimumSize(QSize(0, 9));
        stfbtn->setFont(font1);
        stfbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn->setLayoutDirection(Qt::LeftToRight);
        stfbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn->setIconSize(QSize(20, 20));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 70, 721, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 319));
        scrollArea->setWidget(scrollAreaWidgetContents);
        StaffModify->setCentralWidget(centralwidget);

        retranslateUi(StaffModify);

        QMetaObject::connectSlotsByName(StaffModify);
    } // setupUi

    void retranslateUi(QMainWindow *StaffModify)
    {
        StaffModify->setWindowTitle(QCoreApplication::translate("StaffModify", "MainWindow", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("StaffModify", "\350\257\267\350\276\223\345\205\245\345\237\216\345\270\202", nullptr));
        stfbtn_add->setText(QCoreApplication::translate("StaffModify", "\346\267\273\345\212\240\346\226\260\345\237\216\345\270\202", nullptr));
        stfbtn_delete->setText(QCoreApplication::translate("StaffModify", "\345\210\240\351\231\244\345\237\216\345\270\202", nullptr));
        homebtn->setText(QCoreApplication::translate("StaffModify", "\351\246\226\351\241\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StaffModify", "\344\277\256\346\224\271", nullptr));
        stfbtn->setText(QCoreApplication::translate("StaffModify", "\345\210\240\351\231\244\347\272\277\350\267\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffModify: public Ui_StaffModify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATFFMODIFY_H
