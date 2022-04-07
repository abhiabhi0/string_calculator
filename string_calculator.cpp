#include <string>
#include <sstream>
#include <vector>

/**
 * string of numbers is passed as parameter
 * the sum of these numbers is returned
 * 
 * empty string has sum equal to 0
**/

int add(std::string numbers)
{
	//all numbers are stored in nums
	std::vector<int> nums;

	int sum = 0;

	std::stringstream ss(numbers);

	for (int i; ss >> i;)
	{
		sum += i; //adding integer to sum

		if (ss.peek() == ' ' || ss.peek() == ',')
		{
			//handling empty string using ss.peek() == ' '
			//handling numbers seperated by comma using ss.peek() == ','
			ss.ignore();
		}
	}

	//string is not empty
	if (!nums.empty())
	{
		for (int num : nums)
		{
			sum += num;
		}
	}

	return sum;
}