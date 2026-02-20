/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:36:11 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 18:06:29 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScarvTrap::ScarvTrap(std:: string name): ClapTrap(name)
{
	std::cout<<"ScarvTrap Created !"<<std::endl;
}

ScarvTrap::ScarvTrap()
{
	this->_name = "DEFAULT";
	std::cout<<"Scarv Constructor no args"<<std::endl;
}
ScarvTrap::~ScarvTrap(){
	std::cout<<"ScarvTrap Destroyed !"<<std::endl;
}

void ScarvTrap::GuardGate()
{
	std::cout<<"This Scarv is now in gatekeep mode"<<std::endl;
}

void ScarvTrap::attack(const std::string &target)
{
	if (this->_energy == 0 || this->_hit == 0)
	{
		std::cout<<"I can't attack !"<<std::endl;
		return;
	}
	std::cout<<"ScarVtrap"<<this->_name<<" attacks"<<target<<", causing one points of damage !"<<std::endl;
	this->_energy--;
}


ScarvTrap &ScarvTrap::operator=(const ScarvTrap &rhs)
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

ScarvTrap::ScarvTrap(const ScarvTrap &cp)
{
	std::cout<<"Cpy constr Scar called"<<std::endl;
}