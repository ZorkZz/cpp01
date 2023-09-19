#include "HumanA.hpp"

//constructor
HumanA::HumanA(std::string name, Weapon	weapon)
{
	this->_name = name;
	this->_weapon = weapon;
}

//destructor
HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::string weapon_type;

	weapon_type = this->_weapon.getType();
	std::cout << this->_name << " attacks with their " << weapon_type << std::endl;
}