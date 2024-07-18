/********************************************************************************
** Form generated from reading UI file 'SearchTicket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHTICKET_H
#define UI_SEARCHTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea_2;
    QWidget *zhongzhuam;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *zhida;
    QLabel *label;
    QLabel *label_2;
    QPushButton *stfbtn;

    void setupUi(QMainWindow *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName("Ticket");
        Ticket->resize(800, 500);
        Ticket->setStyleSheet(QString::fromUtf8("background-color:rgb(247,247,247);"));
        centralwidget = new QWidget(Ticket);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(420, 80, 381, 421));
        tabWidget->setStyleSheet(QString::fromUtf8("border:none"));
        tabWidget->setTabPosition(QTabWidget::East);
        tab = new QWidget();
        tab->setObjectName("tab");
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(0, 0, 357, 411));
        scrollArea_2->setMinimumSize(QSize(351, 411));
        scrollArea_2->setWidgetResizable(true);
        zhongzhuam = new QWidget();
        zhongzhuam->setObjectName("zhongzhuam");
        zhongzhuam->setGeometry(QRect(0, 0, 357, 411));
        scrollArea_2->setWidget(zhongzhuam);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 80, 371, 411));
        scrollArea->setMinimumSize(QSize(351, 411));
        scrollArea->setStyleSheet(QString::fromUtf8("border:none"));
        scrollArea->setWidgetResizable(true);
        zhida = new QWidget();
        zhida->setObjectName("zhida");
        zhida->setGeometry(QRect(0, 0, 371, 411));
        scrollArea->setWidget(zhida);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 201, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border:none;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 10, 201, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border:none;\n"
"}"));
        label_2->setAlignment(Qt::AlignCenter);
        stfbtn = new QPushButton(centralwidget);
        stfbtn->setObjectName("stfbtn");
        stfbtn->setGeometry(QRect(20, 10, 51, 51));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stfbtn->sizePolicy().hasHeightForWidth());
        stfbtn->setSizePolicy(sizePolicy);
        stfbtn->setMinimumSize(QSize(0, 9));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(18);
        stfbtn->setFont(font1);
        stfbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn->setLayoutDirection(Qt::LeftToRight);
        stfbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 25px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn->setIconSize(QSize(20, 20));
        Ticket->setCentralWidget(centralwidget);

        retranslateUi(Ticket);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QMainWindow *Ticket)
    {
        Ticket->setWindowTitle(QCoreApplication::translate("Ticket", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Ticket", "\350\267\257\345\276\2041", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Ticket", "\350\267\257\345\276\2042", nullptr));
        label->setText(QCoreApplication::translate("Ticket", "\347\233\264\350\276\276", nullptr));
        label_2->setText(QCoreApplication::translate("Ticket", "\344\270\255\350\275\254", nullptr));
        stfbtn->setText(QCoreApplication::translate("Ticket", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHTICKET_H
