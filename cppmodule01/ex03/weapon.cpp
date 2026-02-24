#include "Weapon.hpp"

void Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}

const std::string& Weapon::getType()const{
	return(_type);
}
