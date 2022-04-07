#include <gtest/gtest.h>
#include "string_calculator.cpp"

//Empty string test
TEST(test_add, empty_string_test)
{
	EXPECT_EQ(0, add(""));
	EXPECT_EQ(0, add("   "));
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}