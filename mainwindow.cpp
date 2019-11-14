#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "paperpassing.h"
#include "building.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{


     Building building;
     Data windata;
     building.run();
     windata = building.getData();

     ui -> Testdata1 -> setText(QString::fromStdString(windata.testdata1));
    // ui -> Testdata2 -> setText(QString::fromStdString(windata.testdata2));
     ui -> Submitdata1 -> setText(QString::fromStdString(windata.submit1));
     //ui -> Submitdata2 -> setText(QString::fromStdString(windata.submit2));
     ui -> SpendTime1 -> setText(QString::number(windata.spendtime1));
     //ui -> SpendTime2 -> setText(QString::number(windata.spendtime2));
     ui -> Correctornot1 -> setText(QString::number(windata.correct1));
     //ui -> Correctornot2 -> setText(QString::number(windata.correct2));


}
