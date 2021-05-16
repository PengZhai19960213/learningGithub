#include "mybutton.h"
#include<QPushButton>
#include<QMessageBox>
MyButton::MyButton(QPushButton *parent) : QPushButton(parent)
{

}
void MyButton::mouseReleaseEvent(QMouseEvent *event)
{
    QMessageBox::information(nullptr,"Mybutton "," Mybutton clicker");
}
