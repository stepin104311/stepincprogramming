#include "unity.h"
#include "prime.h"
void setup(){}
void teardown(){}
void test_prime(void)
{
TEST_ASSERT_EQUAL(5,prime(5));
TEST_ASSERT_EQUAL(17,prime(17));
TEST_ASSERT_EQUAL(73,prime(73));
}
void test_nonprime(void)
{
TEST_ASSERT_EQUAL(9,prime(9));
TEST_ASSERT_EQUAL(32,prime(32));
TEST_ASSERT_EQUAL(58,prime(58));
}
voi test_composite(void)
{
TEST_ASSERT_EQUAL(1,prime(1));
}
int test_main(void)
{
    ///Start unity test framework
UNITY_BEGIN();
///Run test functions
RUN_TEST(test_prime);
RUN_TEST(test_nonprime);
RUN_TEST(test_composite);
 ///close unity test framework
return UNITY_END();
}
