#include <gtest/gtest.h>
#include <string>
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

//more than one numbers seperated by commas
TEST(test_add, numbers_seperated_by_commas_test)
{
	EXPECT_EQ(6, add("2, 4"));
	EXPECT_EQ(19, add("13 , 1, 5"));
}

//numbers seperated by newline
TEST(test_add, numbers_seperated_by_newline_characters_test)
{
	EXPECT_EQ(6, add("2\n4"));
	EXPECT_EQ(19, add("13\n1, 5"));
	EXPECT_EQ(19, add("13\n1\n5"));
}

//numbers seperated by different delimiters
TEST(test_add, numbers_seperated_by_different_delimiters_characters_test)
{
	EXPECT_EQ(14, add("//;1\n11;2"));
	EXPECT_EQ(16, add("//;1\n11;2 , 1@1"));
	EXPECT_EQ(19, add("#13\n1\n5"));
}

//negative numbers exception
TEST(test_add, negative_numbers_exception)
{
	try  
	{
		add("-3");
	}
	catch(std::invalid_argument& e)
	{
		EXPECT_EQ(e.what(), std::string("negatives not allowed -3 "));
	}

	try  
	{
		add("6, -2, -1, 5");
	}
	catch(std::invalid_argument& e)
	{
		EXPECT_EQ(e.what(), std::string("negatives not allowed -2 -1 "));
	}
}

int main() {
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}