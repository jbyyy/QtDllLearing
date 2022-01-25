#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "jbydll.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    JbyDLL dll(0,999);
    qDebug() << dll.Add();

}

MainWindow::~MainWindow()
{
    delete ui;
}
