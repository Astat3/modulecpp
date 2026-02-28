/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:38:01 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 17:35:37 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <algorithm>

Dog::Dog() {
  this->_type = "Dog";
  std::cout << "Dog Created" << std::endl;
  this->_brain = new Brain();
}

Dog::~Dog() {
  std::cout << "Dog Killed" << std::endl;
  delete this->_brain;
}

void Dog::makeSound() const { std::cout << "Bark !" << std::endl; }

Dog::Dog(const Dog &cpy) : AAnimal(cpy) {
  std::cout << "DogCopy Constructor Called" << cpy._type << std::endl;
  this->_brain = new Brain(*(cpy._brain));
}

Dog &Dog::operator=(const Dog &rhs) {
  if (this != &rhs) {
    this->_type = rhs._type;
    delete this->_brain;

    this->_brain = new Brain(*(rhs._brain));
  }
  return *this;
}
