#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	HumanB::name   = name;
	HumanB::weapon = nullptr;
}

void	HumanB::setWeapon(Weapon &weapon_ref)
{
	HumanB::weapon = &weapon_ref;
}

void	HumanB::attack()
{
	std::cout << name
			  << " attacks with their "
			  << (weapon ? weapon->getType() : "bare hands")
			  << std::endl;
}
