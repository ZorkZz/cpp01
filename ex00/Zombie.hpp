#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <cstring>
# include <string>

class Zombie
{
	public:
		Zombie*	newZombie(std::string name);
		void	randomChump( std::string name );
		void	announce( void );
		Zombie();
		~Zombie();

	private:
		std::string	name;
};


#endif