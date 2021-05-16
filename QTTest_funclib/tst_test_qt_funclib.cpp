#include <QtTest>

// add necessary includes here
#include"../Funclib/funclib.h"
class Test_Qt_funclib : public QObject
{
    Q_OBJECT

public:
    Test_Qt_funclib();
    ~Test_Qt_funclib();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

Test_Qt_funclib::Test_Qt_funclib()
{

}

Test_Qt_funclib::~Test_Qt_funclib()
{

}

void Test_Qt_funclib::initTestCase()
{

}

void Test_Qt_funclib::cleanupTestCase()
{

}

void Test_Qt_funclib::test_case1()
{
Funclib zp;
int res=zp.add(1,1);

QCOMPARE(2,res);
}

QTEST_APPLESS_MAIN(Test_Qt_funclib)

#include "tst_test_qt_funclib.moc"
