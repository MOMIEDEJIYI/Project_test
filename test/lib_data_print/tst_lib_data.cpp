#include <QtTest>

// add necessary includes here
#include "../../lib/data_print/Data_print.h"
#include "../../lib/data_cal/Data_cal.h"

class lib_data : public QObject
{
    Q_OBJECT

public:
    lib_data();
    ~lib_data();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
};

lib_data::lib_data() {}

lib_data::~lib_data() {}

void lib_data::test_case1() {
    Data_print dp;
    dp.print_int(4);
}

void lib_data::test_case2() {
    Data_print dp;
    dp.print_string("hello!!!");
    Data_cal dc;
    QCOMPARE(dc.multiply(4, 5), 20);
}

void lib_data::test_case3() {
    Data_print dp;
    dp.print_add(10, 7);
}

QTEST_APPLESS_MAIN(lib_data)

#include "tst_lib_data.moc"
