#include "mybutton.h"
#include "ui_mybutton.h"
#include<QMessageBox>
void MyButton::add(int a, int b)
{
    int c=a+b;
}

MyButton::MyButton(QPushButton *parent)
    : QPushButton(parent)
    , ui(new Ui::MyButton)
{
    ui->setupUi(this);
}

void MyButton::MouseReleaseEvent(QMouseEvent *event)
{
    QMessageBox::information(nullptr,"Mybutton "," Mybutton clicker");
}

MyButton::~MyButton()
{
    delete ui;
}

