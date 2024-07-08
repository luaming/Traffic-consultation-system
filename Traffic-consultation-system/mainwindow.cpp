#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    logscene=new LogIn();
    this->hide();
    logscene->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
