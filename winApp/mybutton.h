#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include<QPushButton>
class MyButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyButton(QPushButton *parent = nullptr);
    void mouseReleaseEvent(QMouseEvent *event);
signals:

};

#endif // MYBUTTON_H
