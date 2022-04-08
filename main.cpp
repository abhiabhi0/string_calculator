#include <iostream>
#include <string>
#include <regex>
#include "string_calculator.cpp"

int main()
{
	#ifndef FILE_INOUT
 
    	freopen("in.txt", "r", stdin);
 	
    	freopen("out.txt", "w", stdout);
   
	#endif
    	std::string input_str; //input string containing integers
    	
    	std::getline(std::cin, input_str);
    	
    	int result = add(input_str);

    	std::cout << "Addition is : " << result << "\n";

    return 0;
}