#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include"../winApp/mybutton.h"
#include"../winApp/mainwindow.h"
class Test_Mybutton : public QObject
{
    Q_OBJECT

public:
    Test_Mybutton();
    ~Test_Mybutton();
MyButton button;
MainWindow mainWindow;
private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();


};

Test_Mybutton::Test_Mybutton()
{

}

Test_Mybutton::~Test_Mybutton()
{

}

void Test_Mybutton::initTestCase()
{

}

void Test_Mybutton::cleanupTestCase()
{

}

void Test_Mybutton::test_case1()
{
    QPoint pos(5,5);

    QTest::mouseClick(mainWindow.GetButton(),Qt::LeftButton,Qt::NoModifier,pos,0);
}

QTEST_MAIN(Test_Mybutton)

#include "tst_test_mybutton.moc"
