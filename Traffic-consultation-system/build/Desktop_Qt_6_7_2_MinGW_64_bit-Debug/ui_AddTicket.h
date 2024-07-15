/********************************************************************************
** Form generated from reading UI file 'AddTicket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTICKET_H
#define UI_ADDTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_7;
    QFrame *frame_10;
    QFrame *frame_21;
    QFrame *frame_22;
    QFrame *frame_23;
    QFrame *frame_24;
    QFrame *frame_25;
    QFrame *frame_26;
    QFrame *frame_27;
    QFrame *frame_28;
    QFrame *frame_29;
    QFrame *frame_30;
    QFrame *frame_31;
    QFrame *frame_32;
    QFrame *frame_33;
    QFrame *frame_2;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame_6;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_34;
    QFrame *frame_12;
    QFrame *frame_8;
    QFrame *frame_9;
    QFrame *frame_14;
    QFrame *frame_11;
    QFrame *frame_18;
    QFrame *frame_15;
    QFrame *frame_17;
    QFrame *frame_13;
    QFrame *frame_16;
    QFrame *frame_19;
    QFrame *frame_20;
    QFrame *frame;
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
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 363, 1528));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_7 = new QFrame(scrollAreaWidgetContents_2);
        frame_7->setObjectName("frame_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setMinimumSize(QSize(351, 91));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_7);

        frame_10 = new QFrame(scrollAreaWidgetContents_2);
        frame_10->setObjectName("frame_10");
        sizePolicy.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy);
        frame_10->setMinimumSize(QSize(351, 91));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_10);

        frame_21 = new QFrame(scrollAreaWidgetContents_2);
        frame_21->setObjectName("frame_21");
        sizePolicy.setHeightForWidth(frame_21->sizePolicy().hasHeightForWidth());
        frame_21->setSizePolicy(sizePolicy);
        frame_21->setMinimumSize(QSize(351, 91));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_21);

        frame_22 = new QFrame(scrollAreaWidgetContents_2);
        frame_22->setObjectName("frame_22");
        sizePolicy.setHeightForWidth(frame_22->sizePolicy().hasHeightForWidth());
        frame_22->setSizePolicy(sizePolicy);
        frame_22->setMinimumSize(QSize(351, 91));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_22);

        frame_23 = new QFrame(scrollAreaWidgetContents_2);
        frame_23->setObjectName("frame_23");
        sizePolicy.setHeightForWidth(frame_23->sizePolicy().hasHeightForWidth());
        frame_23->setSizePolicy(sizePolicy);
        frame_23->setMinimumSize(QSize(351, 91));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_23);

        frame_24 = new QFrame(scrollAreaWidgetContents_2);
        frame_24->setObjectName("frame_24");
        sizePolicy.setHeightForWidth(frame_24->sizePolicy().hasHeightForWidth());
        frame_24->setSizePolicy(sizePolicy);
        frame_24->setMinimumSize(QSize(351, 91));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_24);

        frame_25 = new QFrame(scrollAreaWidgetContents_2);
        frame_25->setObjectName("frame_25");
        sizePolicy.setHeightForWidth(frame_25->sizePolicy().hasHeightForWidth());
        frame_25->setSizePolicy(sizePolicy);
        frame_25->setMinimumSize(QSize(351, 91));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_25);

        frame_26 = new QFrame(scrollAreaWidgetContents_2);
        frame_26->setObjectName("frame_26");
        sizePolicy.setHeightForWidth(frame_26->sizePolicy().hasHeightForWidth());
        frame_26->setSizePolicy(sizePolicy);
        frame_26->setMinimumSize(QSize(351, 91));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_26);

        frame_27 = new QFrame(scrollAreaWidgetContents_2);
        frame_27->setObjectName("frame_27");
        sizePolicy.setHeightForWidth(frame_27->sizePolicy().hasHeightForWidth());
        frame_27->setSizePolicy(sizePolicy);
        frame_27->setMinimumSize(QSize(351, 91));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_27);

        frame_28 = new QFrame(scrollAreaWidgetContents_2);
        frame_28->setObjectName("frame_28");
        sizePolicy.setHeightForWidth(frame_28->sizePolicy().hasHeightForWidth());
        frame_28->setSizePolicy(sizePolicy);
        frame_28->setMinimumSize(QSize(351, 91));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_28);

        frame_29 = new QFrame(scrollAreaWidgetContents_2);
        frame_29->setObjectName("frame_29");
        sizePolicy.setHeightForWidth(frame_29->sizePolicy().hasHeightForWidth());
        frame_29->setSizePolicy(sizePolicy);
        frame_29->setMinimumSize(QSize(351, 91));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_29);

        frame_30 = new QFrame(scrollAreaWidgetContents_2);
        frame_30->setObjectName("frame_30");
        sizePolicy.setHeightForWidth(frame_30->sizePolicy().hasHeightForWidth());
        frame_30->setSizePolicy(sizePolicy);
        frame_30->setMinimumSize(QSize(351, 91));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_30);

        frame_31 = new QFrame(scrollAreaWidgetContents_2);
        frame_31->setObjectName("frame_31");
        sizePolicy.setHeightForWidth(frame_31->sizePolicy().hasHeightForWidth());
        frame_31->setSizePolicy(sizePolicy);
        frame_31->setMinimumSize(QSize(351, 91));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_31);

        frame_32 = new QFrame(scrollAreaWidgetContents_2);
        frame_32->setObjectName("frame_32");
        sizePolicy.setHeightForWidth(frame_32->sizePolicy().hasHeightForWidth());
        frame_32->setSizePolicy(sizePolicy);
        frame_32->setMinimumSize(QSize(351, 91));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_32);

        frame_33 = new QFrame(scrollAreaWidgetContents_2);
        frame_33->setObjectName("frame_33");
        sizePolicy.setHeightForWidth(frame_33->sizePolicy().hasHeightForWidth());
        frame_33->setSizePolicy(sizePolicy);
        frame_33->setMinimumSize(QSize(351, 91));
        frame_33->setFrameShape(QFrame::StyledPanel);
        frame_33->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_33);

        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(351, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
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
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 363, 1623));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        frame_6 = new QFrame(scrollAreaWidgetContents);
        frame_6->setObjectName("frame_6");
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setMinimumSize(QSize(351, 91));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_6);

        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(351, 91));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(scrollAreaWidgetContents);
        frame_5->setObjectName("frame_5");
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setMinimumSize(QSize(351, 91));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_5);

        frame_34 = new QFrame(scrollAreaWidgetContents);
        frame_34->setObjectName("frame_34");
        sizePolicy.setHeightForWidth(frame_34->sizePolicy().hasHeightForWidth());
        frame_34->setSizePolicy(sizePolicy);
        frame_34->setMinimumSize(QSize(351, 91));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_34);

        frame_12 = new QFrame(scrollAreaWidgetContents);
        frame_12->setObjectName("frame_12");
        sizePolicy.setHeightForWidth(frame_12->sizePolicy().hasHeightForWidth());
        frame_12->setSizePolicy(sizePolicy);
        frame_12->setMinimumSize(QSize(351, 91));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_12);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName("frame_8");
        sizePolicy.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy);
        frame_8->setMinimumSize(QSize(351, 91));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_8);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName("frame_9");
        sizePolicy.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy);
        frame_9->setMinimumSize(QSize(351, 91));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_9);

        frame_14 = new QFrame(scrollAreaWidgetContents);
        frame_14->setObjectName("frame_14");
        sizePolicy.setHeightForWidth(frame_14->sizePolicy().hasHeightForWidth());
        frame_14->setSizePolicy(sizePolicy);
        frame_14->setMinimumSize(QSize(351, 91));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_14);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName("frame_11");
        sizePolicy.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy);
        frame_11->setMinimumSize(QSize(351, 91));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_11);

        frame_18 = new QFrame(scrollAreaWidgetContents);
        frame_18->setObjectName("frame_18");
        sizePolicy.setHeightForWidth(frame_18->sizePolicy().hasHeightForWidth());
        frame_18->setSizePolicy(sizePolicy);
        frame_18->setMinimumSize(QSize(351, 91));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_18);

        frame_15 = new QFrame(scrollAreaWidgetContents);
        frame_15->setObjectName("frame_15");
        sizePolicy.setHeightForWidth(frame_15->sizePolicy().hasHeightForWidth());
        frame_15->setSizePolicy(sizePolicy);
        frame_15->setMinimumSize(QSize(351, 91));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_15);

        frame_17 = new QFrame(scrollAreaWidgetContents);
        frame_17->setObjectName("frame_17");
        sizePolicy.setHeightForWidth(frame_17->sizePolicy().hasHeightForWidth());
        frame_17->setSizePolicy(sizePolicy);
        frame_17->setMinimumSize(QSize(351, 91));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_17);

        frame_13 = new QFrame(scrollAreaWidgetContents);
        frame_13->setObjectName("frame_13");
        sizePolicy.setHeightForWidth(frame_13->sizePolicy().hasHeightForWidth());
        frame_13->setSizePolicy(sizePolicy);
        frame_13->setMinimumSize(QSize(351, 91));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_13);

        frame_16 = new QFrame(scrollAreaWidgetContents);
        frame_16->setObjectName("frame_16");
        sizePolicy.setHeightForWidth(frame_16->sizePolicy().hasHeightForWidth());
        frame_16->setSizePolicy(sizePolicy);
        frame_16->setMinimumSize(QSize(351, 91));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_16);

        frame_19 = new QFrame(scrollAreaWidgetContents);
        frame_19->setObjectName("frame_19");
        sizePolicy.setHeightForWidth(frame_19->sizePolicy().hasHeightForWidth());
        frame_19->setSizePolicy(sizePolicy);
        frame_19->setMinimumSize(QSize(351, 91));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_19);

        frame_20 = new QFrame(scrollAreaWidgetContents);
        frame_20->setObjectName("frame_20");
        sizePolicy.setHeightForWidth(frame_20->sizePolicy().hasHeightForWidth());
        frame_20->setSizePolicy(sizePolicy);
        frame_20->setMinimumSize(QSize(351, 91));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame_20);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(351, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);
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
        stfbtn->setGeometry(QRect(10, 10, 41, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stfbtn->sizePolicy().hasHeightForWidth());
        stfbtn->setSizePolicy(sizePolicy1);
        stfbtn->setMinimumSize(QSize(0, 9));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(18);
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
        Ticket->setCentralWidget(centralwidget);

        retranslateUi(Ticket);

        tabWidget->setCurrentIndex(0);


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

#endif // UI_ADDTICKET_H
