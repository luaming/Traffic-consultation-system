#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QPainter>
#include<QPushButton>
#include<QLineEdit>

class LogIn : public QMainWindow
{
    Q_OBJECT
public:
    explicit LogIn(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent*);
signals:
};

#endif // LOGIN_H
