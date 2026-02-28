/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:52:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 16:08:02 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
  std::cout << "Cat created !" << std::endl;
  this->type = "CAT";
}

Cat::~Cat() { std::cout << "Cat Killed !" << std::endl; }

void Cat::makeSound() const { std::cout << "Meow !" << std::endl; }

Cat::Cat(const Cat &cpy) : Animal(cpy) {
  this->type = cpy.type;
  std::cout << "Copy of: " << cpy.getType() << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
  if (this != &rhs) {
    this->type = rhs.type;
  }
  return *this;
}