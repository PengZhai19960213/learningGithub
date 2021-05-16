#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
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

QPushButton *MainWindow::GetButton()
{
    return  ui->pushButton;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title","message");
}
