#include "Weapon.hpp"

#ifndef HUMAN_B_H
#define HUMAN_B_H

class HumanB
{
	public:
		HumanB(std::string name);

		void	attack();
		void	setWeapon(Weapon &weapon_ref);

	private:
		std::string name;
		Weapon 		*weapon;
};

#endif
