/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:34:43 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 17:42:19 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
  std::cout << "Default AAnimal created" << std::endl;
  this->_type = "Default";
}

AAnimal::~AAnimal() { std::cout << "Default AAnimal killed" << std::endl; }

std::string AAnimal::getType() const { return this->_type; }

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
  }
  return *this;
}

AAnimal::AAnimal(const AAnimal &cpy) {
  this->_type = cpy._type;
  std::cout << "Copy of: " << cpy.getType() << std::endl;
}