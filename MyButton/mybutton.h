#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MyButton; }
QT_END_NAMESPACE

class MyButton : public QPushButton
{
    Q_OBJECT

public:
    void add(int a,int b);
    MyButton(QPushButton *parent = nullptr);
void MouseReleaseEvent(QMouseEvent *event);
    ~MyButton();

private:
    Ui::MyButton *ui;
};
#endif // MYBUTTON_H
