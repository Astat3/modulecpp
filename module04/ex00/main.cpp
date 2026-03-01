/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:25:22 by adamgallot        #+#    #+#             */
/*   Updated: 2026/03/01 18:12:55 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>



int main() {
      const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  i->makeSound();
  j->makeSound();
  meta->makeSound();

  delete j;
  delete i;
  delete meta;

  Dog basicDog;
  {
    Dog tmpDog = basicDog;
    basicDog = tmpDog;
  }

  Cat basicCat;
  {
    Cat tmpCat(basicCat);
    basicCat = tmpCat;
  }

  Animal basicAnimal;
  {
    Animal tmpAnimal = basicAnimal;
    basicAnimal = tmpAnimal;
  }

  const Animal *animals[4];
  for (int k = 0; k < 2; k++) {
    animals[k] = new Dog();
  }
  for (int k = 2; k < 4; k++) {
    animals[k] = new Cat();
  }
  for (int k = 0; k < 4; k++) {
    delete animals[k];
  }
  return 0;
}