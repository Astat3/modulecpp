
#include "zombie.hpp"

int main()
{


	Zombie *other = newZombie("Alain");
	Zombie Mama("Mama"); 
	Mama.annonce();
	delete other;

	return (0);
}

