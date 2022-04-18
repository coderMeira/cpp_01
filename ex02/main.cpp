//***************************//
//*Template by pulgamecanica*//
//***************************//

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address of str = " << &str << std::endl;
	std::cout << "memory address of stringPTR = " << stringPTR << std::endl;
	std::cout << "memory address of stringREF = " << &stringREF << std::endl;

	std::cout << "value of str = " << str << std::endl;
	std::cout << "value pointed by stringPTR = " << stringPTR << std::endl;
	std::cout << "value pointed by stringREF = " << stringREF << std::endl;

	return (0);
}
