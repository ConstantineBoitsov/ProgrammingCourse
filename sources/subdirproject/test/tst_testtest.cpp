#include <QString>
#include <QtTest>
#include "brick.h"
#include "matrix.h"
#include "meter_to_sazhen.h"
#include "swapper.h"

class TestTest : public QObject
{
    Q_OBJECT

public:
    TestTest();

private Q_SLOTS:
    void test_meter_to_sazhen();
    void test_brick();
    void test_swapper();
    void test_matrix();
};

TestTest::TestTest()
{
}

void TestTest::test_meter_to_sazhen()
{
    double length = 19;
    meter_to_sazhen(length);
    QCOMPARE(meter_to_sazhen(length), 8, 7, 11.4);
}

void TestTest::test_brick()
{
    int length = 3;
    int width = 3;
    int height = 3;
    int hole_length = 5;
    int hole_width = 5;
    brick(length, width, height, hole_length, hole_width);
}

void TestTest::test_swapper()
{
    int number_to_swap = 12345;
    swapper(number_to_swap);
    QCOMPARE(swapped_number, 54321);
}

void TestTest::test_matrix()
{
    int coloumns = 3;
    int rows = 3;
    QCOMPARE(post_matrix[1][1], 35);
    QCOMPARE(post_matrix[2][2], 3);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
