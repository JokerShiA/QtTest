#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QByteArray>
#include <QClipboard>
#include <QApplication>
#include <QJsonObject>
#include <QFile>
#include <QImage>
#include <QPixmap>
#include <QBuffer>
#include <windows.h>
#include <Shlobj.h>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Test *t = new Test();
    t->Print();
}

MainWindow::~MainWindow()
{
    delete ui;
}



