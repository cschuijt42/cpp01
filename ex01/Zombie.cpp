#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << "Default constructor called." << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Named constructor called." << std::endl;
	Zombie::name = name;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed." << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
