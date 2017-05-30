#include <fun.h>
#include <ctest.h>

CTEST(arithmetic_suite, solution_1)
{
    const int income_test = 100000;
    const int data_test = 800;
    const int result = solution(income_test, data_test);
    const float expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(arithmetic_suite, solution_2)
{
    const int income_test = 10;
    const int data_test = 200;
    const int result = solution(income_test, data_test);
    const float expected = 0;
    ASSERT_EQUAL(expected, result);
}


CTEST(arithmetic_suite, solution_3)
{
    const int income_test = 100000;
    const int data_test = 200;
    const int result = solution(income_test, data_test);
    const float expected = 1;
    ASSERT_EQUAL(expected, result);
}



CTEST(arithmetic_suite, solution_4)
{
    const int income_test = 0;
    const int data_test = 200;
    const int result = solution(income_test, data_test);
    const float expected = 0;
    ASSERT_EQUAL(expected, result);
}


CTEST(arithmetic_suite, solution_5)
{
    const int income_test = 25000;
    const int data_test = 365;
    const int result = solution(income_test, data_test);
    const float expected = 1;
    ASSERT_EQUAL(expected, result);
}