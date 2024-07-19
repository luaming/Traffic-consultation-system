/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogIn
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *IDedit;
    QLineEdit *passwordedit;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *loginbtn;
    QLabel *label_2;
    QLabel *label_6;

    void setupUi(QMainWindow *LogIn)
    {
        if (LogIn->objectName().isEmpty())
            LogIn->setObjectName("LogIn");
        LogIn->resize(800, 500);
        LogIn->setStyleSheet(QString::fromUtf8("background-color:rgb(247,247,247);"));
        centralwidget = new QWidget(LogIn);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:rgb(255,255,255)"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 90, 496, 292));
        label->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 30px; border: none; background: rgb(247,247,247);\n"
"}"));
        IDedit = new QLineEdit(centralwidget);
        IDedit->setObjectName("IDedit");
        IDedit->setEnabled(true);
        IDedit->setGeometry(QRect(337, 150, 194, 27));
        IDedit->setMinimumSize(QSize(164, 27));
        IDedit->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        passwordedit = new QLineEdit(centralwidget);
        passwordedit->setObjectName("passwordedit");
        passwordedit->setEnabled(true);
        passwordedit->setGeometry(QRect(320, 214, 179, 27));
        passwordedit->setMinimumSize(QSize(164, 27));
        passwordedit->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        passwordedit->setEchoMode(QLineEdit::Password);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(223, 215, 25, 25));
        label_7->setMinimumSize(QSize(25, 25));
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(142,178,228);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 150, 81, 27));
        label_3->setMinimumSize(QSize(81, 27));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgb(247,247,247)"));
        label_3->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(252, 214, 60, 27));
        label_5->setMinimumSize(QSize(60, 27));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgb(247,247,247)"));
        label_5->setAlignment(Qt::AlignCenter);
        loginbtn = new QPushButton(centralwidget);
        loginbtn->setObjectName("loginbtn");
        loginbtn->setGeometry(QRect(243, 301, 284, 44));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginbtn->sizePolicy().hasHeightForWidth());
        loginbtn->setSizePolicy(sizePolicy);
        loginbtn->setMinimumSize(QSize(0, 9));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(15);
        loginbtn->setFont(font1);
        loginbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginbtn->setLayoutDirection(Qt::LeftToRight);
        loginbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(159,177,216);\n"
"border-radius: 15px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}\n"
""));
        loginbtn->setIconSize(QSize(20, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 110, 496, 292));
        label_2->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 30px; border: none; background: rgb(238,238,238);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(223, 151, 25, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setMinimumSize(QSize(25, 25));
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(109,159,233);\n"
"}"));
        LogIn->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        IDedit->raise();
        passwordedit->raise();
        label_7->raise();
        label_3->raise();
        label_5->raise();
        loginbtn->raise();
        label_6->raise();

        retranslateUi(LogIn);

        QMetaObject::connectSlotsByName(LogIn);
    } // setupUi

    void retranslateUi(QMainWindow *LogIn)
    {
        LogIn->setWindowTitle(QCoreApplication::translate("LogIn", "LogIn", nullptr));
        label->setText(QString());
        label_7->setText(QString());
        label_3->setText(QCoreApplication::translate("LogIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("LogIn", "\345\257\206\347\240\201", nullptr));
        loginbtn->setText(QCoreApplication::translate("LogIn", "\347\231\273\345\275\225\347\263\273\347\273\237", nullptr));
        label_2->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LogIn: public Ui_LogIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
