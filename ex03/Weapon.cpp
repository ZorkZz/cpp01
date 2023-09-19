#include "Weapon.hpp"

//constructor
Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::Weapon()
{
}

//destructor
Weapon::~Weapon()
{
}

//setter
void	Weapon::setType(std::string type)
{
	this->_type = type;
}


// getter
std::string	Weapon::getType()
{
	return (this->_type);
}
