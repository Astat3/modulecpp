/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:55:45 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 14:55:46 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DEFAULT") {
  this->_hit = 100;
  this->_energy = 100;
  this->_attack_damage = 30;
  std::cout << "FragTrap " << _name << "Default constructor"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_hit = 100;
  this->_energy = 100;
  this->_attack_damage = 30;
  std::cout << "FragTrap " << _name<< "String constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy) {
  std::cout << "FragTrap " << _name << "Copy Constructor"<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  std::cout << "FragTrap " << _name << "overlod Operator"<< rhs._name<<std::endl;
  if (this != &rhs) {
    this->_name = rhs._name;
    this->_hit = rhs._hit;
    this->_energy = rhs._energy;
    this->_attack_damage = rhs._attack_damage;
  }
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " is destroyed!"<< std::endl;
}

void FragTrap::highFivesGuys(void) {
  if (_hit > 0)
    std::cout << "FragTrap " << _name<< "High Five"<< std::endl;
  else
    std::cout << "FragTrap " << _name<< " cannot ask for a high five because it is destroyed!"<< std::endl;
}
