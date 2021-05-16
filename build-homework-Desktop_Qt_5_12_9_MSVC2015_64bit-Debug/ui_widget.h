/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *stuID;
    QLineEdit *lineEdit;
    QLabel *stuName;
    QLineEdit *lineEdit_2;
    QLabel *stuSCore;
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(863, 672);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 131, 41));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 290, 101, 51));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(620, 240, 111, 61));
        tableView = new QTableView(Widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(45, 440, 711, 221));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 70, 685, 131));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stuID = new QLabel(widget);
        stuID->setObjectName(QString::fromUtf8("stuID"));

        horizontalLayout->addWidget(stuID);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        stuName = new QLabel(widget);
        stuName->setObjectName(QString::fromUtf8("stuName"));

        horizontalLayout->addWidget(stuName);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        stuSCore = new QLabel(widget);
        stuSCore->setObjectName(QString::fromUtf8("stuSCore"));

        horizontalLayout->addWidget(stuSCore);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(61, 390, 210, 23));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEdit_4 = new QLineEdit(widget1);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_2->addWidget(lineEdit_4);

        widget2 = new QWidget(Widget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(420, 340, 331, 81));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\345\242\236\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_5->setText(QApplication::translate("Widget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\242\236\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        stuID->setText(QApplication::translate("Widget", "\345\255\246\345\217\267\357\274\232", nullptr));
        stuName->setText(QApplication::translate("Widget", "\345\247\223\345\220\215\357\274\232", nullptr));
        stuSCore->setText(QApplication::translate("Widget", "\346\210\220\347\273\251\357\274\232", nullptr));
        label_6->setText(QApplication::translate("Widget", "\345\255\246\345\217\267", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\346\214\211\345\255\246\345\217\267\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\346\237\245\350\257\242\346\211\200\346\234\211\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
