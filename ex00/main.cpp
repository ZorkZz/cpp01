#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("aaaa");
	zombie->announce();
	randomChump("bonjour");
	delete zombie;
}