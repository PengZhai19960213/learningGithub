#include "widget.h"
#include "ui_widget.h"
#include <QtNetwork>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket(this);

//    connect(tcpSocket,&QTcpSocket::connected(),)
//    //读取socket 信号

//    connect(tcpSocket, &QTcpSocket::readyRead, this, &Widget::readMessage);

//    //socket 异常信号，
//    connect(tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
//            this, SLOT(displayError(QAbstractSocket::SocketError)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::AddStudnet()
{

}

void Widget::FindStudentByID()
{

}

void Widget::FindAllStudents()
{

}



void Widget::on_pushButton_clicked()
{

    tcpSocket->connectToHost(QHostAddress::LocalHost,quint16(8000));



}

void Widget::on_pushButton_2_clicked()
{

}

void Widget::on_pushButton_3_clicked()
{

}
