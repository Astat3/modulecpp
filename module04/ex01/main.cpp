/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:25:22 by adamgallot        #+#    #+#             */
/*   Updated: 2026/03/01 18:13:29 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete j;
  delete i;

  const Animal *animals[4];
  for (int k = 0; k < 2; k++)
    animals[k] = new Dog();
  for (int k = 2; k < 4; k++)
    animals[k] = new Cat();

  for (int k = 0; k < 4; k++)
    delete animals[k];

  std::cout << "\n--- Deep Copy Scoped Test ---" << std::endl;
  {
    Dog basic;
    {
      Dog tmp = basic;
      basic = tmp;
    }
    Dog *heapDog = new Dog();
    Dog *heapDog2 = new Dog(*heapDog);
    delete heapDog;
    heapDog2->makeSound();
    delete heapDog2;
  }

  Dog myDog;
  Dog *dPtr = &myDog;
  myDog = *dPtr;

  Cat myCat;
  Cat *cPtr = &myCat;
  myCat = *cPtr;

  return 0;
}