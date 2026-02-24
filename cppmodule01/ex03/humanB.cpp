#include "HumanB.hpp"



HumanB::HumanB(std:: string name) : _weapon(NULL), _name(name)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

HumanB::~HumanB()
{
    std::cout<<_name<<" Died"<<std::endl;
}

void HumanB::attack()const
{
    if (!_weapon)
    {
        std::cout<<"You need a weapon to attak !"<<std::endl;
        return;
    }
    else{
        std::cout<<_name<<" attacked with their "<<_weapon->getType()<<std::endl;
    }
}