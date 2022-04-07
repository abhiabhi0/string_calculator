#include <iostream>
#include <string>
#include "string_calculator.cpp"

int main()
{
	#ifndef FILE_INOUT
 
    	freopen("in.txt", "r", stdin);
 	
    	freopen("out.txt", "w", stdout);
   
	#endif

    	std::string numbers; //input string containing integers
    	std::getline(std::cin, numbers);

    	int result = add(numbers);

    	std::cout << "Addition is : " << result << "\n";

    return 0;
}