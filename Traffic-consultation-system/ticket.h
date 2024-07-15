#ifndef TICKET_H
#define TICKET_H

#include <QFrame>
#include <QLabel>
class Ticket : public QFrame
{
    Q_OBJECT
private:
    QLabel stime;
    QLabel etime;
    QLabel tool;
    QLabel time;
    QLabel splace;
    QLabel eplace;
    QLabel cost;
    QLabel arrive;

public:
    Ticket(QString stime,
           QString etime,
           QString tool,
           QString time,
           QString splace,
           QString eplace,
           QString cost,
           QString arrive,
           QString img);
signals:
};

#endif // TICKET_H
