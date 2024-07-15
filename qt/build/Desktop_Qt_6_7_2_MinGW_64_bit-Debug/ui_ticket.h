/********************************************************************************
** Form generated from reading UI file 'ticket.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKET_H
#define UI_TICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ticket
{
public:
    QLabel *stime;
    QFrame *line;
    QLabel *tool;
    QLabel *etime;
    QLabel *cost;
    QLabel *img;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *splace;
    QLabel *eplace;
    QLabel *arrive;
    QLabel *time;
    QPushButton *background;

    void setupUi(QWidget *Ticket)
    {
        if (Ticket->objectName().isEmpty())
            Ticket->setObjectName("Ticket");
        Ticket->resize(351, 91);
        Ticket->setMinimumSize(QSize(351, 31));
        stime = new QLabel(Ticket);
        stime->setObjectName("stime");
        stime->setGeometry(QRect(10, 3, 72, 31));
        stime->setMinimumSize(QSize(72, 29));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(21);
        font.setBold(true);
        font.setItalic(false);
        stime->setFont(font);
        stime->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        stime->setAlignment(Qt::AlignCenter);
        line = new QFrame(Ticket);
        line->setObjectName("line");
        line->setGeometry(QRect(83, 22, 77, 3));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        tool = new QLabel(Ticket);
        tool->setObjectName("tool");
        tool->setGeometry(QRect(102, 6, 41, 16));
        QFont font1;
        font1.setPointSize(11);
        tool->setFont(font1);
        tool->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        tool->setAlignment(Qt::AlignCenter);
        etime = new QLabel(Ticket);
        etime->setObjectName("etime");
        etime->setGeometry(QRect(160, 3, 72, 31));
        etime->setMinimumSize(QSize(72, 29));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        etime->setFont(font2);
        etime->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        etime->setAlignment(Qt::AlignCenter);
        cost = new QLabel(Ticket);
        cost->setObjectName("cost");
        cost->setGeometry(QRect(248, 7, 82, 31));
        cost->setMinimumSize(QSize(72, 29));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(13);
        font3.setBold(false);
        font3.setItalic(false);
        cost->setFont(font3);
        cost->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        cost->setAlignment(Qt::AlignCenter);
        img = new QLabel(Ticket);
        img->setObjectName("img");
        img->setGeometry(QRect(300, 40, 40, 41));
        img->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        label_6 = new QLabel(Ticket);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(15, 40, 15, 15));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(15, 15));
        label_6->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 7px; border: none; background: rgb(82,154,233);\n"
"}"));
        label_7 = new QLabel(Ticket);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 40, 15, 15));
        label_7->setMinimumSize(QSize(15, 15));
        label_7->setStyleSheet(QString::fromUtf8("*{\n"
" border-radius: 7px; border: none; background: rgb(182,210,241);\n"
"}"));
        splace = new QLabel(Ticket);
        splace->setObjectName("splace");
        splace->setGeometry(QRect(50, 40, 58, 12));
        splace->setMinimumSize(QSize(58, 12));
        splace->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        eplace = new QLabel(Ticket);
        eplace->setObjectName("eplace");
        eplace->setGeometry(QRect(190, 40, 58, 12));
        eplace->setMinimumSize(QSize(58, 12));
        eplace->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        arrive = new QLabel(Ticket);
        arrive->setObjectName("arrive");
        arrive->setGeometry(QRect(20, 70, 161, 20));
        arrive->setMinimumSize(QSize(161, 20));
        arrive->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        time = new QLabel(Ticket);
        time->setObjectName("time");
        time->setGeometry(QRect(80, 20, 71, 16));
        time->setFont(font1);
        time->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        time->setAlignment(Qt::AlignCenter);
        background = new QPushButton(Ticket);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 351, 91));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(background->sizePolicy().hasHeightForWidth());
        background->setSizePolicy(sizePolicy1);
        background->setMinimumSize(QSize(0, 9));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(18);
        background->setFont(font4);
        background->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        background->setLayoutDirection(Qt::LeftToRight);
        background->setStyleSheet(QString::fromUtf8(""));
        background->setIconSize(QSize(20, 20));
        background->raise();
        tool->raise();
        time->raise();
        stime->raise();
        line->raise();
        etime->raise();
        cost->raise();
        img->raise();
        label_6->raise();
        label_7->raise();
        splace->raise();
        eplace->raise();
        arrive->raise();

        retranslateUi(Ticket);

        QMetaObject::connectSlotsByName(Ticket);
    } // setupUi

    void retranslateUi(QWidget *Ticket)
    {
        Ticket->setWindowTitle(QCoreApplication::translate("Ticket", "Form", nullptr));
        stime->setText(QCoreApplication::translate("Ticket", "11:11", nullptr));
        tool->setText(QString());
        etime->setText(QCoreApplication::translate("Ticket", "11:11", nullptr));
        cost->setText(QString());
        img->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        splace->setText(QCoreApplication::translate("Ticket", "\344\271\214\351\262\201\346\234\250\351\275\220", nullptr));
        eplace->setText(QCoreApplication::translate("Ticket", "\344\271\214\351\262\201\346\234\250\351\275\220", nullptr));
        arrive->setText(QCoreApplication::translate("Ticket", "\351\242\204\350\256\241\345\210\260\350\276\276\346\227\266\351\227\264", nullptr));
        time->setText(QString());
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ticket: public Ui_Ticket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKET_H
