#include <QString>
#include <QtTest>
#include "meter_to_sazhen.h"
#include "swapper.h"

class BoitsovTest : public QObject
{
    Q_OBJECT

public:
    BoitsovTest();

private Q_SLOTS:
    void test_meter_to_sazhen();
    void test_swapper();
};

BoitsovTest::BoitsovTest()
{
}

void BoitsovTest::test_meter_to_sazhen()
{
    double length = 19;
    int int_sazhen, int_arshin;
    double vershok;
    meter_to_sazhen(length);
    QCOMPARE(int_sazhen, 8);
    QCOMPARE(int_arshin, 7);
    QCOMPARE(vershok, 11.4);
}

void BoitsovTest::test_swapper()
{
    int number_to_swap = 54321;
    int swapped_number;
    swapper(number_to_swap);
    QCOMPARE(swapped_number, 12345);
}

QTEST_APPLESS_MAIN(BoitsovTest)

#include "tst_testtesttest.moc"
