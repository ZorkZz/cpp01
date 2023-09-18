#include "Zombie.hpp"

Zombie	*newZombie(std::string new_name)
{
	return (new Zombie(new_name));
}
