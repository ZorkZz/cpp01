#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}