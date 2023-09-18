#include "Zombie.hpp"

void	Zombie::announce( void )
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie[i] = Zombie(name);
	}
	
	return (zombie);
}