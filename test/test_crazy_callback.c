#include "unity.h"

#include "crazy_callback.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_crazy_callback_should_return_2(void)
{
    TEST_ASSERT_EQUAL_INT(2, crazy_callback());
}
