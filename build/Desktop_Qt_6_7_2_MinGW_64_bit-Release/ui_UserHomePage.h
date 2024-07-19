/********************************************************************************
** Form generated from reading UI file 'UserHomePage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERHOMEPAGE_H
#define UI_USERHOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserHomePage
{
public:
    QWidget *centralwidget;
    QWidget *bottom;
    QPushButton *pushButton_2;
    QPushButton *minebtn;
    QFrame *line;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame_5;
    QFrame *line_11;
    QFrame *line_12;
    QPushButton *trainbtn;
    QLabel *label_7;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_16;
    QWidget *tab_3;
    QFrame *frame_4;
    QFrame *line_9;
    QFrame *line_10;
    QPushButton *planebtn;
    QLabel *label_6;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QWidget *tab_2;
    QFrame *frame_3;
    QFrame *line_7;
    QFrame *line_8;
    QPushButton *carbtn;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;

    void setupUi(QMainWindow *UserHomePage)
    {
        if (UserHomePage->objectName().isEmpty())
            UserHomePage->setObjectName("UserHomePage");
        UserHomePage->resize(800, 500);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(23);
        UserHomePage->setFont(font);
        UserHomePage->setStyleSheet(QString::fromUtf8("background-color:#f7f7f7;"));
        centralwidget = new QWidget(UserHomePage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:#f7f7f7"));
        bottom = new QWidget(centralwidget);
        bottom->setObjectName("bottom");
        bottom->setEnabled(true);
        bottom->setGeometry(QRect(0, 420, 800, 80));
        bottom->setMinimumSize(QSize(800, 80));
        bottom->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: rgb(255, 255, 255); \n"
"}\n"
""));
        pushButton_2 = new QPushButton(bottom);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 400, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(25);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("*{border:none;color:#5172c4;}"));
        minebtn = new QPushButton(bottom);
        minebtn->setObjectName("minebtn");
        minebtn->setGeometry(QRect(400, 0, 400, 80));
        minebtn->setFont(font1);
        minebtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        minebtn->setStyleSheet(QString::fromUtf8("border:none\n"
""));
        line = new QFrame(bottom);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 0, 800, 1));
        QFont font2;
        font2.setPointSize(2);
        line->setFont(font2);
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
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(113, 113, 572, 220));
        tabWidget->setBaseSize(QSize(0, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(16);
        tabWidget->setFont(font3);
        tabWidget->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab:selected { color: #5172c4; background-color: #ffffff;}\n"
"QTabBar::tab:!selected{background-color:rgb(238,238,238);}\n"
"QTabWidget::pane { border-radius: 10px; }"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(60, 50));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        frame_5 = new QFrame(tab);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 0, 574, 171));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:#ffffff;border:none;\n"
""));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        line_11 = new QFrame(frame_5);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(70, 50, 437, 1));
        line_11->setFont(font2);
        line_11->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_12 = new QFrame(frame_5);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(70, 85, 437, 1));
        line_12->setFont(font2);
        line_12->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        trainbtn = new QPushButton(frame_5);
        trainbtn->setObjectName("trainbtn");
        trainbtn->setGeometry(QRect(121, 100, 324, 37));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trainbtn->sizePolicy().hasHeightForWidth());
        trainbtn->setSizePolicy(sizePolicy);
        trainbtn->setMinimumSize(QSize(0, 0));
        trainbtn->setFont(font3);
        trainbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        trainbtn->setLayoutDirection(Qt::LeftToRight);
        trainbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(159,177,216);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}"));
        trainbtn->setIconSize(QSize(20, 20));
        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 0, 51, 46));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/redAndblue.png")));
        label_7->setScaledContents(true);
        lineEdit_14 = new QLineEdit(frame_5);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(70, 0, 181, 50));
        QFont font4;
        font4.setPointSize(12);
        font4.setItalic(true);
        lineEdit_14->setFont(font4);
        lineEdit_14->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_14->setFrame(true);
        lineEdit_14->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_15 = new QLineEdit(frame_5);
        lineEdit_15->setObjectName("lineEdit_15");
        lineEdit_15->setGeometry(QRect(320, 0, 181, 50));
        lineEdit_15->setFont(font4);
        lineEdit_15->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_15->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_16 = new QLineEdit(frame_5);
        lineEdit_16->setObjectName("lineEdit_16");
        lineEdit_16->setGeometry(QRect(70, 51, 437, 33));
        lineEdit_16->setFont(font4);
        lineEdit_16->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_16->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/train.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab, icon, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        frame_4 = new QFrame(tab_3);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 574, 171));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:#ffffff;border:none;\n"
""));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        line_9 = new QFrame(frame_4);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(70, 50, 437, 1));
        line_9->setFont(font2);
        line_9->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_9->setFrameShape(QFrame::Shape::HLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(frame_4);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(70, 85, 437, 1));
        line_10->setFont(font2);
        line_10->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_10->setFrameShape(QFrame::Shape::HLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        planebtn = new QPushButton(frame_4);
        planebtn->setObjectName("planebtn");
        planebtn->setGeometry(QRect(121, 100, 324, 37));
        sizePolicy.setHeightForWidth(planebtn->sizePolicy().hasHeightForWidth());
        planebtn->setSizePolicy(sizePolicy);
        planebtn->setMinimumSize(QSize(0, 0));
        planebtn->setFont(font3);
        planebtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        planebtn->setLayoutDirection(Qt::LeftToRight);
        planebtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(159,177,216);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}"));
        planebtn->setIconSize(QSize(20, 20));
        label_6 = new QLabel(frame_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(260, 0, 51, 46));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/redAndblue.png")));
        label_6->setScaledContents(true);
        lineEdit_11 = new QLineEdit(frame_4);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(70, 0, 181, 50));
        lineEdit_11->setFont(font4);
        lineEdit_11->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_11->setFrame(true);
        lineEdit_11->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_12 = new QLineEdit(frame_4);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(320, 0, 181, 50));
        lineEdit_12->setFont(font4);
        lineEdit_12->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_12->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_13 = new QLineEdit(frame_4);
        lineEdit_13->setObjectName("lineEdit_13");
        lineEdit_13->setGeometry(QRect(70, 51, 437, 33));
        lineEdit_13->setFont(font4);
        lineEdit_13->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_13->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/plane.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_3, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 575, 171));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:#ffffff;border:none;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        line_7 = new QFrame(frame_3);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(70, 50, 437, 1));
        line_7->setFont(font2);
        line_7->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_8 = new QFrame(frame_3);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(70, 85, 437, 1));
        line_8->setFont(font2);
        line_8->setStyleSheet(QString::fromUtf8("background-color:rgb(190,190,190);"));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        carbtn = new QPushButton(frame_3);
        carbtn->setObjectName("carbtn");
        carbtn->setGeometry(QRect(121, 100, 324, 37));
        sizePolicy.setHeightForWidth(carbtn->sizePolicy().hasHeightForWidth());
        carbtn->setSizePolicy(sizePolicy);
        carbtn->setMinimumSize(QSize(0, 0));
        carbtn->setFont(font3);
        carbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        carbtn->setLayoutDirection(Qt::LeftToRight);
        carbtn->setStyleSheet(QString::fromUtf8("*{\n"
"background-color:rgb(159,177,216);\n"
"border-radius: 10px;\n"
"}\n"
"QPushButton:pressed{  background-color: #5172c4;}"));
        carbtn->setIconSize(QSize(20, 20));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 0, 51, 46));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/redAndblue.png")));
        label_4->setScaledContents(true);
        lineEdit_7 = new QLineEdit(frame_3);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(70, 0, 181, 50));
        lineEdit_7->setFont(font4);
        lineEdit_7->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_7->setFrame(true);
        lineEdit_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_8 = new QLineEdit(frame_3);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(320, 0, 181, 50));
        lineEdit_8->setFont(font4);
        lineEdit_8->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_8->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_9 = new QLineEdit(frame_3);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(70, 51, 437, 33));
        lineEdit_9->setFont(font4);
        lineEdit_9->setStyleSheet(QString::fromUtf8("color:grey"));
        lineEdit_9->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/car.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        tabWidget->addTab(tab_2, icon2, QString());
        UserHomePage->setCentralWidget(centralwidget);

        retranslateUi(UserHomePage);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(UserHomePage);
    } // setupUi

    void retranslateUi(QMainWindow *UserHomePage)
    {
        UserHomePage->setWindowTitle(QCoreApplication::translate("UserHomePage", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserHomePage", "\351\246\226\351\241\265", nullptr));
        minebtn->setText(QCoreApplication::translate("UserHomePage", "\346\210\221\347\232\204", nullptr));
        trainbtn->setText(QCoreApplication::translate("UserHomePage", "\346\237\245\350\257\242\347\201\253\350\275\246\347\245\250", nullptr));
        label_7->setText(QString());
        lineEdit_14->setInputMask(QString());
        lineEdit_14->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\345\234\260", nullptr));
        lineEdit_15->setInputMask(QString());
        lineEdit_15->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\347\233\256\347\232\204\345\234\260", nullptr));
        lineEdit_16->setInputMask(QString());
        lineEdit_16->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("UserHomePage", "\347\201\253\350\275\246\347\245\250      ", nullptr));
        planebtn->setText(QCoreApplication::translate("UserHomePage", "\346\237\245\350\257\242\351\243\236\346\234\272\347\245\250", nullptr));
        label_6->setText(QString());
        lineEdit_11->setInputMask(QString());
        lineEdit_11->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\345\234\260", nullptr));
        lineEdit_12->setInputMask(QString());
        lineEdit_12->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\347\233\256\347\232\204\345\234\260", nullptr));
        lineEdit_13->setInputMask(QString());
        lineEdit_13->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("UserHomePage", "\351\243\236\346\234\272\347\245\250         ", nullptr));
        carbtn->setText(QCoreApplication::translate("UserHomePage", "\346\237\245\350\257\242\346\261\275\350\275\246\347\245\250", nullptr));
        label_4->setText(QString());
        lineEdit_7->setInputMask(QString());
        lineEdit_7->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\345\234\260", nullptr));
        lineEdit_8->setInputMask(QString());
        lineEdit_8->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\347\233\256\347\232\204\345\234\260", nullptr));
        lineEdit_9->setInputMask(QString());
        lineEdit_9->setText(QCoreApplication::translate("UserHomePage", "\350\257\267\350\276\223\345\205\245\345\207\272\345\217\221\346\227\266\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("UserHomePage", "\346\261\275\350\275\246\347\245\250    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserHomePage: public Ui_UserHomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERHOMEPAGE_H
