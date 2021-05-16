#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QAbstractSocket>
class QTcpSocket;
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
       QTcpSocket *tcpSocket;
       int stuID;
                    QString stuName;
                    double stuScore;

private slots:
       void AddStudnet();
       void FindStudentByID();
       void FindAllStudents();


       void on_pushButton_clicked();

       void on_pushButton_2_clicked();

       void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
