#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon_ref) : weapon(weapon_ref)
{
	HumanA::name = name;
}

void	HumanA::attack()
{
	std::cout << name
			  << " attacks with their " 
			  << weapon.getType()       << std::endl;
}
