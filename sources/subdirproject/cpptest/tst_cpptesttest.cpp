#include <QString>
#include <QtTest>
#include "rat_num.h"

using std::string;

class CpptestTest : public QObject
{
    Q_OBJECT

public:
    CpptestTest();

private Q_SLOTS:
    void test_rational_sum();
    void test_rational_multi();
    void test_rational_divide();
};

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

QTEST_APPLESS_MAIN(CpptestTest)

#include "tst_cpptesttest.moc"
