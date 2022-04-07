#include <gtest/gtest.h>
#include "string_calculator.cpp"

//Empty string test
TEST(test_add, empty_string_test)
{
	EXPECT_EQ(0, add(""));
	EXPECT_EQ(0, add("   "));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}