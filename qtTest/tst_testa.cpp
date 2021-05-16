#include <QtTest>
#include <QCoreApplication>

// add necessary includes here
#include"../App/hello.h"
#include"ilogic.h"
#include"logicimpl.h"
class TestA : public QObject
{
    Q_OBJECT

public:
    TestA();
    ~TestA();
ILogic *p;
private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case3_data();
};

TestA::TestA()
{

}

TestA::~TestA()
{

}

void TestA::initTestCase()
{
    p= new LogicImpl;

}

void TestA::cleanupTestCase()
{
    delete  p;
}

void TestA::test_case1()
{
    QString str=hello();
    QCOMPARE("A",str);
}
void TestA::test_case2()
{
    int a=10,b=20;
    int c=add(a,b);
    QCOMPARE(30,c);
}
void TestA::test_case3()
{
    QFETCH(int ,a);
    QFETCH(int ,b);
    QFETCH(int ,result);
    int res=p->add(a,b);

    QCOMPARE(res,result);
}

void TestA::test_case3_data()
{
    QTest::addColumn<int>("a");
    QTest::addColumn<int>("b");
    QTest::addColumn<int>("result");
    QTest::newRow("A")<<1<<2<<3;
    QTest::newRow("B")<<2<<4<<6;
    QTest::newRow("result")<<3<<6<<7;

}
QTEST_MAIN(TestA)

#include "tst_testa.moc"
