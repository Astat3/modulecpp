#include "zombie.hpp"

Zombie::Zombie(std:: string name)
{
    if (name.empty())
        return; 
    this->_name = name;
}

Zombie::~Zombie(){
    std::cout<<"KILLED "<<_name<<std::endl;
}

void Zombie :: annonce()const
{
    std::cout<<_name<<": BRAAAINZZZZZZ"<<std::endl;
}

Zombie *newZombie(std:: string heap_name)
{
	if (heap_name.empty())
	{
		std::cerr<<"Error a Zombie Must Have a name"<<std::endl;
		return NULL;		
	}
	Zombie *zomB1;
	zomB1 = new Zombie(heap_name);
	zomB1->annonce();
	return zomB1;
}
void randomChump( std::string name )
{
	Zombie mama(name);
	mama.annonce();
}