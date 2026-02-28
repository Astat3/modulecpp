/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:51:00 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 15:00:56 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DEFAULT") {
  this->_hit = 100;
  this->_energy = 50;
  this->_attack_damage = 20;
  std::cout<< _name << "Default constructor"<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_hit = 100;
  this->_energy = 50;
  this->_attack_damage = 20;
  std::cout << _name << "String constructor"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) {
  std::cout<< _name << "Copy Constructor"<< std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  std::cout<< _name << "overload operator of" << rhs._name<< std::endl;
  if (this != &rhs) {
	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
  }
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout<< _name << " is destroyed! "<< std::endl;
}

void ScavTrap::attack(const std::string &target) {
  if (_energy > 0 && _hit > 0) {
	std::cout << _name << "attacks " << target<< ", causing " << _attack_damage << " points of damage!"<< std::endl;
	_energy--;
  } else if (_hit == 0)
	std::cout << "ScavTrap " << _name<< " cannot attack because it has no hit points left!"<< std::endl;
  else
	std::cout << "ScavTrap " << _name<< " cannot attack because it has no energy left!" << std::endl;
}

void ScavTrap::guardGate() {
  if (_hit > 0)
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode."<< std::endl;
  else
	std::cout << "ScavTrap " << _name<< " cannot guard the gate because it is destroyed!" << std::endl;
}
