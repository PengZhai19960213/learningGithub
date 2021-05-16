#include <QtTest>

// add necessary includes here
#include"../winApp/mybutton.h"
#include<QWindow>
class Test : public QObject
{
    Q_OBJECT

public:
    Test();
    ~Test();
MyButton button;
private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_MyButton();

};

Test::Test()
{

}

Test::~Test()
{

}

void Test::initTestCase()
{

}

void Test::cleanupTestCase()
{

}

void Test::test_MyButton()
{
    QPoint pos(5,5);

    QTest::mouseClick(&button,Qt::LeftButton,Qt::NoModifier,pos,0);
}

QTEST_APPLESS_MAIN(Test)

#include "tst_test.moc"
