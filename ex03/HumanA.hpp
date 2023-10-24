#ifndef HumanA_HPP
# define HumanA_HPP

# include "Weapon.hpp"
# include <iostream>
# include <cstring>
# include <string>

class	HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();

	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif