/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 18:38:25 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 18:56:42 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap()
{
	std::cout<<"Robot with no name"<<std::endl;
	this->_name = "Default";
	this->_energy = 100;
	this->_hit = 100;
	this->_attack_damage = 30;
}

Fragtrap::Fragtrap(std:: string name)
{
	std::cout<<"Robot: "<<name<<std::endl;
	this->_name = name;
	this->_energy = 100;
	this->_hit = 100;
	this->_attack_damage = 30;
	
}
Fragtrap::~Fragtrap()
{
	std::cout<<"FragTrap deconstructed"<<std::endl;
}
Fragtrap &Fragtrap::operator=(const Fragtrap&rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit = rhs._hit;
		this->_energy = rhs._energy;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}

Fragtrap::Fragtrap(const Fragtrap &cpy)
{
	std::cout<<"Copy Frag Called"<<cpy._name<<std::endl;
}

std::ostream &operator<<(std:: ostream& out, Fragtrap &c)
{
	out<<c.Getname();
	return (out);
}

void Fragtrap::highFivesGuys(void){
    std::cout<<"positive high-fives request on the standard output."<<std::endl;
}