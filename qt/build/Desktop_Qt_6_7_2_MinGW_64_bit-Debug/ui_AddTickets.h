/********************************************************************************
** Form generated from reading UI file 'AddTickets.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTICKETS_H
#define UI_ADDTICKETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllTickets
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *backbtn;
    QPushButton *stfbtn_2;
    QFrame *line;

    void setupUi(QMainWindow *AllTickets)
    {
        if (AllTickets->objectName().isEmpty())
            AllTickets->setObjectName("AllTickets");
        AllTickets->resize(800, 500);
        centralwidget = new QWidget(AllTickets);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 10, 721, 391));
        scrollArea->setMinimumSize(QSize(721, 321));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 389));
        scrollArea->setWidget(scrollAreaWidgetContents);
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(50, 420, 51, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy);
        backbtn->setMinimumSize(QSize(0, 9));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        backbtn->setFont(font);
        backbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backbtn->setLayoutDirection(Qt::LeftToRight);
        backbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 25px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        backbtn->setIconSize(QSize(20, 20));
        stfbtn_2 = new QPushButton(centralwidget);
        stfbtn_2->setObjectName("stfbtn_2");
        stfbtn_2->setGeometry(QRect(650, 420, 111, 51));
        sizePolicy.setHeightForWidth(stfbtn_2->sizePolicy().hasHeightForWidth());
        stfbtn_2->setSizePolicy(sizePolicy);
        stfbtn_2->setMinimumSize(QSize(0, 9));
        stfbtn_2->setFont(font);
        stfbtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn_2->setLayoutDirection(Qt::LeftToRight);
        stfbtn_2->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius:20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn_2->setIconSize(QSize(20, 20));
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 400, 800, 3));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        AllTickets->setCentralWidget(centralwidget);

        retranslateUi(AllTickets);

        QMetaObject::connectSlotsByName(AllTickets);
    } // setupUi

    void retranslateUi(QMainWindow *AllTickets)
    {
        AllTickets->setWindowTitle(QCoreApplication::translate("AllTickets", "MainWindow", nullptr));
        backbtn->setText(QCoreApplication::translate("AllTickets", "\350\277\224\345\233\236", nullptr));
        stfbtn_2->setText(QCoreApplication::translate("AllTickets", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllTickets: public Ui_AllTickets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTICKETS_H
