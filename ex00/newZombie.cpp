#include "Zombie.hpp"

Zombie	*Zombie::newZombie(std::string new_name)
{
	Zombie	*new_one = new Zombie;

	new_one->name = name;
	return (new_one);
}
