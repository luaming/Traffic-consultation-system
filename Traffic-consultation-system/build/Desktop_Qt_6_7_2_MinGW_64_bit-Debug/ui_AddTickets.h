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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QFrame *frame_6;
    QFrame *frame_10;
    QFrame *frame_11;
    QFrame *frame_12;
    QFrame *frame_9;
    QFrame *frame_13;
    QFrame *frame_7;
    QFrame *frame_4;
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
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName("frame_6");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setMinimumSize(QSize(351, 91));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_6, 0, 2, 1, 1);

        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName("frame_10");
        sizePolicy.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy);
        frame_10->setMinimumSize(QSize(351, 91));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_10, 1, 2, 1, 1);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName("frame_11");
        sizePolicy.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy);
        frame_11->setMinimumSize(QSize(351, 91));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_11, 2, 2, 1, 1);

        frame_12 = new QFrame(scrollAreaWidgetContents);
        frame_12->setObjectName("frame_12");
        sizePolicy.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy);
        frame_12->setMinimumSize(QSize(351, 91));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_12, 3, 2, 1, 1);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName("frame_9");
        sizePolicy.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy);
        frame_9->setMinimumSize(QSize(351, 91));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_9, 2, 0, 1, 1);

        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName("frame_13");
        sizePolicy.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy);
        frame_13->setMinimumSize(QSize(351, 91));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_13, 3, 0, 1, 1);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName("frame_7");
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setMinimumSize(QSize(351, 91));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_7, 1, 0, 1, 1);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(351, 91));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(50, 420, 51, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy1);
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
        sizePolicy1.setHeightForWidth(stfbtn_2->sizePolicy().hasHeightForWidth());
        stfbtn_2->setSizePolicy(sizePolicy1);
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
