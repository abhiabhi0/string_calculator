#include <gtest/gtest.h>
#include "string_calculator.cpp"

//Empty string test
TEST(test_add, empty_string_test)
{
	EXPECT_EQ(0, add(""));
	EXPECT_EQ(0, add("   "));
}

//only one number is passed in string test
TEST(test_add, one_number_test)
{
	EXPECT_EQ(2, add("2"));
	EXPECT_EQ(13, add("13"));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}