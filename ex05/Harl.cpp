#include "Harl.hpp"
#include <iostream>

void Harl::complain(std::string level) {
	char first = std::toupper(level[0]);
	switch (first)
	{
	case 'D':
		this->debug();
		break;
	case 'I':
		this->info();
		break;
	case 'W':
		this->warning();
		break;
	case 'E':
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

void Harl::debug(void) {
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}
