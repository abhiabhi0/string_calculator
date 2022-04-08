#include <string>
#include <sstream>

/**
 * string of numbers is passed as parameter
 * the sum of these numbers is returned
 * 
 * empty string has sum equal to 0
**/

int add(std::string numbers)
{
	//all numbers are stored in nums

	int sum = 0;

	std::stringstream ss(numbers);

	for (int i; ss >> i;)
	{
		sum += i;
		while (ss.peek() == ',' || ss.peek() == ' ' || ss.peek() == '\\' || ss.peek() == 'n')
		{	
			//handling numbers seperated by whitespaces using ss.peek() == ' '
			//handling numbers seperated by comma using ss.peek() == ','
			//handling numbers seperated by newline using ss.peek() == '\\' || ss.peek() == 'n'
			ss.ignore();
		}
	}

	return sum;
}