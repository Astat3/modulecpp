#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#pragma once

#include <iostream>
#include <string>

/*
Private --> seules les fonctions à l'interieur 
de la classe ont le droit de modifier les var
*/
class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std:: string name);
		~Zombie();
	void annonce(void) const;
};

Zombie *newZombie(std:: string new_name);
void randomChump( std::string name );
#endif
