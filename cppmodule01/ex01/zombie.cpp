#include "zombie.hpp"


Zombie::~Zombie()
{
    std::cout<<"Killed: "<<_name<<std::endl;
}


void Zombie::announce(void)const
{
    std::cout<<"Name: "<<_name<<std::endl;
}