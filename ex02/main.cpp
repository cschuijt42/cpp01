#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR  = &string;
	std::string &stringREF  = string;

	std::cout << "Memory addresses:\n"
			  << "String    : " << &string    << "\n"
			  << "Pointer   : " << &stringPTR << "\n"
			  << "Reference : " << &stringREF << "\n" << std::endl;
	
	std::cout << "Values:\n"
			  << "String    : " << string     << "\n"
			  << "Pointer   : " << *stringPTR << "\n"
			  << "Reference : " << stringREF  << std::endl;

}
