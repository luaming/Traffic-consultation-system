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
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *backbtn;
    QFrame *line;
    QPushButton *addbtn;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 500);
        scrollArea = new QScrollArea(MainWindow);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 0, 721, 391));
        scrollArea->setMinimumSize(QSize(721, 321));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 719, 389));
        scrollArea->setWidget(scrollAreaWidgetContents);
        backbtn = new QPushButton(MainWindow);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(50, 410, 51, 51));
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
        line = new QFrame(MainWindow);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 390, 800, 3));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        addbtn = new QPushButton(MainWindow);
        addbtn->setObjectName("addbtn");
        addbtn->setGeometry(QRect(660, 420, 101, 51));
        sizePolicy.setHeightForWidth(addbtn->sizePolicy().hasHeightForWidth());
        addbtn->setSizePolicy(sizePolicy);
        addbtn->setMinimumSize(QSize(0, 9));
        addbtn->setFont(font);
        addbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addbtn->setLayoutDirection(Qt::LeftToRight);
        addbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 25px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        addbtn->setIconSize(QSize(20, 20));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Train Schedule", nullptr));
        backbtn->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        addbtn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAWLER_WIDGET_H
