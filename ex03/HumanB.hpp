#ifndef HumanB_HPP
# define HumanB_HPP

# include "Weapon.hpp"
# include <iostream>
# include <cstring>
# include <string>

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon weapon);

	private:
		Weapon		_weapon;
		std::string	_name;
};

#endif