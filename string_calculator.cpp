#include <string>
#include <sstream>
#include <vector>

/**
 * remove delimiters from the string
**/

void remove_delimiters(std::stringstream& ss)
{
	while (ss.peek() == ',' || ss.peek() == ' ' 
		|| ss.peek() == '\\' || ss.peek() == 'n' || ss.peek() == '/'
		|| ss.peek() == ';' || ss.peek() == '/'
		|| ss.peek() == '@' || ss.peek() == '#')
	{	
		//handling numbers seperated by whitespaces using ss.peek() == ' '
		//handling numbers seperated by comma using ss.peek() == ','
		//handling numbers seperated by newline using ss.peek() == '\\' || ss.peek() == 'n'
		//handling removing other delimiters
		ss.ignore();
	}
} 

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

	int i;

	//remove leading delimiters
	remove_delimiters(ss);

	while (ss >> i)
	{
		sum += i;

		remove_delimiters(ss);
	}


	// for (int num : nums)
	// {
	// 	sum += num;
	// }

	return sum;
}