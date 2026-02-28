/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:50:37 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 15:01:40 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("DEFAULT"), _hit(10), _energy(10), _attack_damage(0) {
  std::cout << "ClapTrap " << _name << "Default Constructor"<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hit(10), _energy(10), _attack_damage(0) {
  std::cout << "ClapTrap " << _name << "String constructor"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
	: _name(cpy._name), _hit(cpy._hit), _energy(cpy._energy),_attack_damage(cpy._attack_damage) {
  std::cout << "ClapTrap " << _name << " is cloned! "<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
  std::cout << "ClapTrap " << _name << "got " << rhs._name<< "! Overload Operator" << std::endl;
  if (this != &rhs) {
	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << _name << " is destroyed!"<< std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (_energy > 0 && _hit > 0) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "<< _attack_damage << " points of damage!" << std::endl;
	_energy--;
  } else if (_hit == 0)
	std::cout<< _name<< " cannot attack because it has no hit points left!"<< std::endl;
  else
	std::cout <<_name<< " cannot attack because it has no energy left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (_hit == 0) {
	std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
	return;
  }
  if (amount >= _hit) {
	_hit = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount<< " points of damage and is destroyed!" << std::endl;
  } else {
	_hit -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount<< " points of damage! It now has " << _hit << " hit points left."<< std::endl;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energy > 0 && _hit > 0) {
	_hit += amount;
	_energy--;
	std::cout <<_name << " repairs itself for " << amount<< " hit points! It now has " << _hit << " hit points."<< std::endl;
  } else if (_hit == 0)
	std::cout <<_name<< " cannot be repaired because it is destroyed!" << std::endl;
  else
	std::cout<< _name<< " cannot be repaired because it has no energy left!"
<< std::endl;
}

std::string ClapTrap::getName() const { return this->_name; }
