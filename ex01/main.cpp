#include "Zombie.hpp"

int	main()
{
	int		count = 5;
	Zombie	*horde = zombieHorde(count, "Steve");

	for (int i = 0; i < count; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
}
