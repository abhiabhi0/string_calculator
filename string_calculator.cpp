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

	int sum = 0;

	std::stringstream ss(numbers);

	int i;

	//remove leading delimiters
	remove_delimiters(ss);

	bool is_neg = false;
	std::string excption_str = "negatives not allowed ";

	while (ss >> i)
	{
		if (i < 0)
		{
			is_neg = true;
			excption_str += std::to_string(i) + " ";
		}
		else  
		{
			sum += i;
		}
		remove_delimiters(ss);
	}

	if (is_neg)
	{
		sum = 0;
		throw std::invalid_argument(excption_str);
	}

	return sum;
}