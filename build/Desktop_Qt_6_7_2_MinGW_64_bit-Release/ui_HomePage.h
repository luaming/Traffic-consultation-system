/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *userbtn;
    QPushButton *stfbtn;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(800, 500);
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 800, 500));
        frame->setStyleSheet(QString::fromUtf8("background-color:#ffffff"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        userbtn = new QPushButton(frame);
        userbtn->setObjectName("userbtn");
        userbtn->setGeometry(QRect(90, 360, 341, 74));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userbtn->sizePolicy().hasHeightForWidth());
        userbtn->setSizePolicy(sizePolicy);
        userbtn->setMinimumSize(QSize(0, 9));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(18);
        userbtn->setFont(font);
        userbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        userbtn->setLayoutDirection(Qt::LeftToRight);
        userbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#8d9fcd;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}\n"
""));
        userbtn->setIconSize(QSize(20, 20));
        stfbtn = new QPushButton(frame);
        stfbtn->setObjectName("stfbtn");
        stfbtn->setGeometry(QRect(490, 360, 247, 74));
        sizePolicy.setHeightForWidth(stfbtn->sizePolicy().hasHeightForWidth());
        stfbtn->setSizePolicy(sizePolicy);
        stfbtn->setMinimumSize(QSize(0, 9));
        stfbtn->setFont(font);
        stfbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        stfbtn->setLayoutDirection(Qt::LeftToRight);
        stfbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:#d9d9d9;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton:pressed{  background-color: #bebebe;}\n"
""));
        stfbtn->setIconSize(QSize(20, 20));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(175, 25, 450, 450));
        label->setPixmap(QPixmap(QString::fromUtf8(":/earth.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 100, 601, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200")});
        font1.setPointSize(48);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255,255,255,0);\n"
"color:#565965;"));
        label_2->setAlignment(Qt::AlignCenter);
        label->raise();
        label_2->raise();
        userbtn->raise();
        stfbtn->raise();
        HomePage->setCentralWidget(centralwidget);

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "MainWindow", nullptr));
        userbtn->setText(QCoreApplication::translate("HomePage", "\347\224\250\346\210\267", nullptr));
        stfbtn->setText(QCoreApplication::translate("HomePage", "\347\256\241\347\220\206\345\221\230", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("HomePage", "\344\272\244 \351\200\232 \345\222\250 \350\257\242 \347\263\273 \347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
