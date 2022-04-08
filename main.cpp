#include <iostream>
#include <string>
#include <stdexcept>
#include "string_calculator.cpp"

int main()
{
	#ifndef FILE_INOUT
 
    	freopen("in.txt", "r", stdin);
 	
    	freopen("out.txt", "w", stdout);

    	freopen("err.txt", "w", stderr);
   
	#endif
    	std::string input_str; //input string containing integers
    	
    	std::getline(std::cin, input_str);
    	try
    	{
    		int result = add(input_str);
    		std::cout << "Addition is : " << result << "\n";
    	}
    	catch (std::invalid_argument& e)
    	{
    		std::cerr << e.what() << "\n";
    		return -1;
    	}
   	return 0;
}