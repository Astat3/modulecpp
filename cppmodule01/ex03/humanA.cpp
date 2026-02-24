#include "HumanA.hpp"


// En c++ une '&' doit être init dès sa naissance, si on attend d'être rentré dans la fonctio c'est deja trop tard.
//takes the weapon in the constructor.
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{
    std::cout<<_name<<" Died."<<std::endl;
}

void HumanA::attack()const
{
    std::cout<<_name<<" attacks with their "<<_weapon.getType()<<std::endl;
}