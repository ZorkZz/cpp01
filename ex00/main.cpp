#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("aaaa");
	zombie->announce();
	randomChump("hello");
	delete zombie;
}