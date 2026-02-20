/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:43:03 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 15:20:11 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "open.hpp"

ClapTrap::ClapTrap(std:: string name) : _name(name), _hit(10), _energy(10), _attack_damage(0)
{
	std::cout<<"INITIALIZED"<<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destuctor called !"<<std::endl;
}

std::string ClapTrap::Getname()
{
	return this->_name;
}
std::ostream &operator<<(std:: ostream& out, ClapTrap &c)
{
	out<<c.Getname();
	return (out);
}

ClapTrap::ClapTrap(const ClapTrap &cp)
{
    std::cout<<"Constructor Copy called !"<<std::endl;
}
/*---------------------------------------------------------------------------------------------*/


void ClapTrap::attack(const std::string &target )
{
	if (this->_energy == 0 || this->_hit == 0)
	{
		std::cout<<"I can't attack !"<<std::endl;
		return;
	}
	std::cout<<"Claptrap"<<this->_name<<" attacks"<<target<<", causing one points of damage !"<<std::endl;
	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<this->_name<<" Got a hit !";
	this->_hit -= amount;
	if (amount>this->_hit)
	{
		std::cout<<"Only "<<this->_hit<<" remaining"<<std::endl;
	}
	else{
		this->_hit -= amount;
		std::cout<<"No more HP I died !"<<std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy == 0)
	{
		std::cout<<"I can't heal myself"<<std::endl;
		return;
	}
	this->_hit += amount;
	this->_energy--;
	std::cout<<amount<<" Hp restored"<<std::endl;
}

