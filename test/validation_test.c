#include <fun.h>
#include <ctest.h>

CTEST(arithmetic_suite, solution_5)
{
    const int income_test = 2500000000;
    const int data_test = 365;
    const int result = solution(income_test, data_test);
    const float expected = 0;
    ASSERT_EQUAL(expected, result);
}
