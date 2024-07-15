/********************************************************************************
** Form generated from reading UI file 'UserMainPage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINPAGE_H
#define UI_USERMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainPage
{
public:
    QWidget *centralwidget;
    QWidget *mainbody;
    QFrame *place;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QFrame *time;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QLabel *label_12;
    QFrame *frame_5;
    QLabel *label_7;
    QLabel *label_23;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QLabel *label_26;
    QLabel *label_27;
    QFrame *frame_6;
    QPushButton *pushButton;
    QFrame *tool;
    QLabel *label_5;
    QLabel *label_11;
    QRadioButton *radioButton_3;
    QLabel *label_14;
    QLabel *label_15;
    QRadioButton *radioButton_4;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QFrame *frame_8;
    QLabel *label_6;
    QFrame *frame_7;
    QFrame *frame_9;
    QFrame *frame_10;
    QFrame *frame_11;
    QWidget *bottom;
    QPushButton *homebtn;
    QPushButton *pushButton_3;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QMainWindow *UserMainPage)
    {
        if (UserMainPage->objectName().isEmpty())
            UserMainPage->setObjectName("UserMainPage");
        UserMainPage->resize(800, 500);
        UserMainPage->setMinimumSize(QSize(800, 500));
        centralwidget = new QWidget(UserMainPage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#widdget_2{\n"
"background-color: rgb(247, 247, 247);\n"
"}\n"
""));
        mainbody = new QWidget(centralwidget);
        mainbody->setObjectName("mainbody");
        mainbody->setGeometry(QRect(0, 0, 800, 420));
        mainbody->setMinimumSize(QSize(800, 420));
        mainbody->setStyleSheet(QString::fromUtf8("background-color:rgb(247,247,247);"));
        place = new QFrame(mainbody);
        place->setObjectName("place");
        place->setGeometry(QRect(0, 20, 800, 27));
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(place->sizePolicy().hasHeightForWidth());
        place->setSizePolicy(sizePolicy);
        place->setMinimumSize(QSize(800, 27));
        place->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        place->setFrameShape(QFrame::StyledPanel);
        place->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(place);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 1, 25, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(25, 25));
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(48,135,229);\n"
"}"));
        label_2 = new QLabel(place);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 0, 81, 27));
        label_2->setMinimumSize(QSize(81, 27));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(16);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(place);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(196, 0, 164, 27));
        lineEdit->setMinimumSize(QSize(164, 27));
        lineEdit->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        label = new QLabel(place);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 0, 101, 27));
        label->setMinimumSize(QSize(80, 27));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2 = new QLineEdit(place);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(470, 0, 166, 27));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setMinimumSize(QSize(166, 27));
        lineEdit_2->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        time = new QFrame(mainbody);
        time->setObjectName("time");
        time->setGeometry(QRect(0, 70, 800, 27));
        time->setMinimumSize(QSize(800, 27));
        time->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        time->setFrameShape(QFrame::StyledPanel);
        time->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(time);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 1, 25, 25));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setMinimumSize(QSize(25, 25));
        label_4->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(82,154,233);\n"
"}"));
        label_8 = new QLabel(time);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 0, 108, 27));
        label_8->setMinimumSize(QSize(108, 27));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(time);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(220, 0, 108, 27));
        lineEdit_3->setMinimumSize(QSize(108, 27));
        lineEdit_3->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        label_9 = new QLabel(time);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(330, 0, 31, 27));
        label_9->setMinimumSize(QSize(31, 27));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(time);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(365, 0, 62, 27));
        lineEdit_4->setMinimumSize(QSize(62, 27));
        lineEdit_4->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        label_10 = new QLabel(time);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(430, 0, 31, 27));
        label_10->setMinimumSize(QSize(31, 27));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);
        lineEdit_5 = new QLineEdit(time);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(460, 0, 64, 27));
        lineEdit_5->setMinimumSize(QSize(62, 27));
        lineEdit_5->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"background-color: rgb(255, 255, 255); \n"
"border-radius: 13px\n"
"}"));
        label_12 = new QLabel(time);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(530, 0, 31, 27));
        label_12->setMinimumSize(QSize(31, 27));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        frame_5 = new QFrame(mainbody);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 170, 800, 27));
        frame_5->setMinimumSize(QSize(800, 27));
        frame_5->setStyleSheet(QString::fromUtf8("border:none"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 1, 25, 25));
        label_7->setMinimumSize(QSize(25, 25));
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(182,210,241);\n"
"}"));
        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(110, 0, 108, 27));
        label_23->setMinimumSize(QSize(108, 27));
        label_23->setFont(font);
        label_23->setAlignment(Qt::AlignCenter);
        radioButton_11 = new QRadioButton(frame_5);
        radioButton_11->setObjectName("radioButton_11");
        radioButton_11->setGeometry(QRect(230, 0, 16, 27));
        radioButton_11->setMinimumSize(QSize(15, 27));
        radioButton_11->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_11->setStyleSheet(QString::fromUtf8(""));
        radioButton_11->setIconSize(QSize(18, 18));
        radioButton_11->setChecked(false);
        radioButton_12 = new QRadioButton(frame_5);
        radioButton_12->setObjectName("radioButton_12");
        radioButton_12->setGeometry(QRect(370, 0, 16, 27));
        radioButton_12->setMinimumSize(QSize(15, 27));
        radioButton_12->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_12->setStyleSheet(QString::fromUtf8(""));
        radioButton_12->setIconSize(QSize(18, 18));
        radioButton_12->setChecked(false);
        label_26 = new QLabel(frame_5);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(250, 0, 101, 27));
        label_26->setMinimumSize(QSize(80, 27));
        label_26->setFont(font);
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(frame_5);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(390, 0, 80, 27));
        label_27->setMinimumSize(QSize(80, 27));
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(mainbody);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, 230, 800, 50));
        frame_6->setMinimumSize(QSize(800, 50));
        frame_6->setStyleSheet(QString::fromUtf8("border:none"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame_6);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 0, 314, 50));
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setMinimumSize(QSize(314, 50));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(159,177,216);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}"));
        pushButton->setIconSize(QSize(20, 20));
        tool = new QFrame(mainbody);
        tool->setObjectName("tool");
        tool->setGeometry(QRect(0, 120, 800, 27));
        tool->setMinimumSize(QSize(650, 27));
        tool->setStyleSheet(QString::fromUtf8("border:none"));
        tool->setFrameShape(QFrame::StyledPanel);
        tool->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(tool);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 1, 25, 25));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(25, 25));
        label_5->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 12px; border: none; background: rgb(122,176,236);\n"
"}"));
        label_11 = new QLabel(tool);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(110, 0, 108, 27));
        label_11->setMinimumSize(QSize(108, 27));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        radioButton_3 = new QRadioButton(tool);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(525, 0, 16, 27));
        radioButton_3->setMinimumSize(QSize(15, 27));
        radioButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_3->setStyleSheet(QString::fromUtf8(""));
        radioButton_3->setIconSize(QSize(18, 18));
        radioButton_3->setChecked(false);
        label_14 = new QLabel(tool);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(450, 0, 40, 27));
        sizePolicy4.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy4);
        label_14->setMinimumSize(QSize(40, 27));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_15 = new QLabel(tool);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(599, 0, 51, 27));
        label_15->setMinimumSize(QSize(40, 27));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        radioButton_4 = new QRadioButton(tool);
        radioButton_4->setObjectName("radioButton_4");
        radioButton_4->setGeometry(QRect(680, 0, 16, 27));
        radioButton_4->setMinimumSize(QSize(15, 27));
        radioButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_4->setStyleSheet(QString::fromUtf8(""));
        radioButton_4->setIconSize(QSize(18, 18));
        radioButton_4->setChecked(false);
        label_16 = new QLabel(tool);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(700, 0, 60, 27));
        label_16->setMinimumSize(QSize(60, 27));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(tool);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(260, 0, 40, 27));
        sizePolicy4.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy4);
        label_17->setMinimumSize(QSize(40, 27));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(18);
        label_17->setFont(font1);
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/train.png")));
        label_17->setScaledContents(true);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(tool);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(300, 0, 41, 27));
        label_18->setMinimumSize(QSize(35, 27));
        label_18->setFont(font);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_19 = new QLabel(tool);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(410, 0, 30, 27));
        label_19->setMinimumSize(QSize(30, 27));
        label_19->setFont(font1);
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/plane.png")));
        label_19->setScaledContents(true);
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(tool);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(550, 0, 40, 27));
        sizePolicy4.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy4);
        label_20->setMinimumSize(QSize(40, 27));
        label_20->setFont(font1);
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/car.png")));
        label_20->setScaledContents(true);
        label_20->setAlignment(Qt::AlignCenter);
        radioButton_5 = new QRadioButton(tool);
        radioButton_5->setObjectName("radioButton_5");
        radioButton_5->setGeometry(QRect(385, 0, 16, 27));
        radioButton_5->setMinimumSize(QSize(15, 27));
        radioButton_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_5->setStyleSheet(QString::fromUtf8(""));
        radioButton_5->setIconSize(QSize(18, 18));
        radioButton_5->setChecked(false);
        radioButton_6 = new QRadioButton(tool);
        radioButton_6->setObjectName("radioButton_6");
        radioButton_6->setGeometry(QRect(237, 0, 16, 27));
        radioButton_6->setMinimumSize(QSize(15, 27));
        radioButton_6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        radioButton_6->setStyleSheet(QString::fromUtf8(""));
        radioButton_6->setIconSize(QSize(27, 27));
        radioButton_6->setChecked(false);
        scrollArea = new QScrollArea(mainbody);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 290, 761, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 749, 309));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy5);
        frame_4->setMinimumSize(QSize(351, 91));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_4, 1, 0, 1, 1);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName("frame_8");
        sizePolicy5.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy5);
        frame_8->setMinimumSize(QSize(351, 91));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_8, 3, 1, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        frame_7 = new QFrame(scrollAreaWidgetContents);
        frame_7->setObjectName("frame_7");
        sizePolicy5.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy5);
        frame_7->setMinimumSize(QSize(351, 91));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_7, 1, 1, 1, 1);

        frame_9 = new QFrame(scrollAreaWidgetContents);
        frame_9->setObjectName("frame_9");
        sizePolicy5.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy5);
        frame_9->setMinimumSize(QSize(351, 91));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_9, 2, 1, 1, 1);

        frame_10 = new QFrame(scrollAreaWidgetContents);
        frame_10->setObjectName("frame_10");
        sizePolicy5.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy5);
        frame_10->setMinimumSize(QSize(351, 91));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_10, 3, 0, 1, 1);

        frame_11 = new QFrame(scrollAreaWidgetContents);
        frame_11->setObjectName("frame_11");
        sizePolicy5.setHeightForWidth(frame_11->sizePolicy().hasHeightForWidth());
        frame_11->setSizePolicy(sizePolicy5);
        frame_11->setMinimumSize(QSize(351, 91));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_11, 2, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
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
        UserMainPage->setCentralWidget(centralwidget);

        retranslateUi(UserMainPage);

        QMetaObject::connectSlotsByName(UserMainPage);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainPage)
    {
        UserMainPage->setWindowTitle(QCoreApplication::translate("UserMainPage", "MainWindow", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("UserMainPage", "  \345\207\272\345\217\221\345\234\260", nullptr));
        label->setText(QCoreApplication::translate("UserMainPage", "\347\233\256\347\232\204\345\234\260", nullptr));
        label_4->setText(QString());
        label_8->setText(QCoreApplication::translate("UserMainPage", "\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("UserMainPage", "\345\271\264", nullptr));
        label_10->setText(QCoreApplication::translate("UserMainPage", "\346\234\210", nullptr));
        label_12->setText(QCoreApplication::translate("UserMainPage", "\346\227\245", nullptr));
        label_7->setText(QString());
        label_23->setText(QCoreApplication::translate("UserMainPage", "\345\206\263\347\255\226\346\226\271\345\274\217", nullptr));
        radioButton_11->setText(QString());
        radioButton_12->setText(QString());
        label_26->setText(QCoreApplication::translate("UserMainPage", "\346\234\200\345\260\221\350\212\261\350\264\271", nullptr));
        label_27->setText(QCoreApplication::translate("UserMainPage", "\346\234\200\345\260\221\350\200\227\346\227\266", nullptr));
        pushButton->setText(QCoreApplication::translate("UserMainPage", "\344\270\200\351\224\256\347\224\237\346\210\220\346\226\271\346\241\210", nullptr));
        label_5->setText(QString());
        label_11->setText(QCoreApplication::translate("UserMainPage", "\344\272\244\351\200\232\345\267\245\345\205\267", nullptr));
        radioButton_3->setText(QString());
        label_14->setText(QCoreApplication::translate("UserMainPage", "\351\243\236\346\234\272", nullptr));
        label_15->setText(QCoreApplication::translate("UserMainPage", "\346\261\275\350\275\246", nullptr));
        radioButton_4->setText(QString());
        label_16->setText(QCoreApplication::translate("UserMainPage", "\344\270\215\351\231\220", nullptr));
        label_17->setText(QString());
        label_18->setText(QCoreApplication::translate("UserMainPage", "\347\201\253\350\275\246", nullptr));
        label_19->setText(QString());
        label_20->setText(QString());
        radioButton_5->setText(QString());
        radioButton_6->setText(QString());
        label_6->setText(QCoreApplication::translate("UserMainPage", "\346\200\273\347\224\250\346\227\266\357\274\232  \346\227\266   \345\210\206                \346\200\273\350\264\271\347\224\250\357\274\232        \345\205\203                           \351\200\224\345\276\204\357\274\232", nullptr));
        homebtn->setText(QCoreApplication::translate("UserMainPage", "\351\246\226\351\241\265", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserMainPage", "\346\210\221\347\232\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainPage: public Ui_UserMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINPAGE_H
