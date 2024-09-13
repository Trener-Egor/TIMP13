#include "../src/function.hpp"
#include "gtest/gtest.h"

TEST(func_test, normal_test)
{
	ASSERT_EQ(function(3, 2), 1);
}
TEST(func_test, test_neg_value)
{
	ASSERT_EQ(function(-3,1), -3);
}
