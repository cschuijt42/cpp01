#include "Harl.hpp"
#include <iostream>

int main( int ac, char **av )
{
	if (ac != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]"
				  << std::endl;
		return 1;
	}

	Harl harl;
	int  complaint_level = harl.complaint_level_no(av[1]);

	switch (complaint_level)
	{
	case 0:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;

	case 1:
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;

	case 2:
		harl.complain("WARNING");
		harl.complain("ERROR");
		break;

	case 3:
		harl.complain("ERROR");
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
				  << std::endl;
		break;
	}
}
