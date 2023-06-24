#include "Zombie.hpp"

int	main()
{
	Zombie *allocated_zombie = newZombie("Heap");
	randomChump("Stack");
	allocated_zombie->announce();
	delete allocated_zombie;
}
