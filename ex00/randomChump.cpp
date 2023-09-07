#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::randomChump(std::string name)
{
	Zombie *new_one = this->newZombie(name);
	new_one->announce();
}