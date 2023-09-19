#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <cstring>
# include <string>

class	Weapon
{
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		std::string	getType();
		void		setType(std::string type);

	private:
		std::string	_type;
};

#endif