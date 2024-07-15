#include "homepage.h"
#include"QDebug"
#include <QApplication>
ALGraph*algraph=new ALGraph();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomePage w;
    w.show();
    qDebug()<<"你好";
    return a.exec();
}
