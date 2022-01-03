#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->resize(ui->pushButton->size()*2);
    ui->label->setText("АААА, спасибо)");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "title", "critical", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
        QApplication::quit();
    else
        qDebug()<<"No";
}

void MainWindow::on_pushButton_3_clicked()
{
    sec = new Second(this);
    sec->show();
    hide();
    show();
}
