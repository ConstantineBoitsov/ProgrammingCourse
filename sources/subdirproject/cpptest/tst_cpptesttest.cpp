#include <QString>
#include <QtTest>
#include "rat_num.h"
#include "swapper.h"
#include "meter_to_sazhen.h"


class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void test_rational_sum();
    void test_rational_multi();
    void test_rational_divide();
    void test_turnover();
//    void test_converter();
};

CpptestTest::CpptestTest()
{

}

void CpptestTest::test_rational_divide(){
    RationalNum num;
    num.Divide(2);
    QCOMPARE(num.ToDouble(), 0.06250);
}
void CpptestTest::test_rational_multi(){
    RationalNum num;
    num.Multi(2);
    QCOMPARE(num.ToDouble(), 0.25);
}

void CpptestTest::test_rational_sum(){
    RationalNum num;
    num.Sum(1);
    QCOMPARE(num.ToDouble(), 1.125);
}

void CpptestTest::test_turnover(){
    Swapper num;
    QCOMPARE(num.swapper(), 54321);
}

//void CpptestTest::test_converter(){
//    SAV result = new SAV(19);
//    QCOMPARE(result.Print(), "8 sazhen(s), 2 arshin(s), 11.4 vershok(s)");
//}

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
