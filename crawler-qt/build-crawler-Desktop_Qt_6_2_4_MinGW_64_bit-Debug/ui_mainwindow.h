/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        fromStationLineEdit = new QLineEdit(centralwidget);
        fromStationLineEdit->setObjectName(QString::fromUtf8("fromStationLineEdit"));
        fromStationLineEdit->setGeometry(QRect(40, 40, 191, 31));
        toStationLineEdit = new QLineEdit(centralwidget);
        toStationLineEdit->setObjectName(QString::fromUtf8("toStationLineEdit"));
        toStationLineEdit->setGeometry(QRect(280, 40, 191, 31));
        dateLineEdit = new QLineEdit(centralwidget);
        dateLineEdit->setObjectName(QString::fromUtf8("dateLineEdit"));
        dateLineEdit->setGeometry(QRect(520, 40, 110, 31));
        fetchButton = new QPushButton(centralwidget);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));
        fetchButton->setGeometry(QRect(660, 40, 93, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 711, 431));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
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

#endif // UI_MAINWINDOW_H
