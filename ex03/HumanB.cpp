#include "HumanB.hpp"
#include "Weapon.hpp"

//constructor
HumanB::HumanB(std::string name): _name(name)
{
}

//destructor
HumanB::~HumanB()
{
}

//setter
void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

void	HumanB::attack()
{
	std::string weapon_type;

	weapon_type = this->_weapon.getType();
	std::cout << this->_name << " attacks with their " << weapon_type << std::endl;
}
