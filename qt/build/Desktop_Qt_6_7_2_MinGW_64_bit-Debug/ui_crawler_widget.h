/********************************************************************************
** Form generated from reading UI file 'crawler_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAWLER_WIDGET_H
#define UI_CRAWLER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *fromStationLineEdit;
    QLineEdit *toStationLineEdit;
    QLineEdit *dateLineEdit;
    QPushButton *fetchButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setGeometry(QRect(0, 0, 793, 571));
        fromStationLineEdit = new QLineEdit(centralwidget);
        fromStationLineEdit->setObjectName("fromStationLineEdit");
        fromStationLineEdit->setGeometry(QRect(40, 40, 191, 31));
        toStationLineEdit = new QLineEdit(centralwidget);
        toStationLineEdit->setObjectName("toStationLineEdit");
        toStationLineEdit->setGeometry(QRect(280, 40, 191, 31));
        dateLineEdit = new QLineEdit(centralwidget);
        dateLineEdit->setObjectName("dateLineEdit");
        dateLineEdit->setGeometry(QRect(520, 40, 110, 31));
        fetchButton = new QPushButton(centralwidget);
        fetchButton->setObjectName("fetchButton");
        fetchButton->setGeometry(QRect(660, 40, 93, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 100, 711, 431));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Train Schedule", nullptr));
        dateLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "yyyy-MM-dd", nullptr));
        fetchButton->setText(QCoreApplication::translate("MainWindow", "Fetch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAWLER_WIDGET_H
