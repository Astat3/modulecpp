/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:25:22 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:38:17 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
  std::cout << "--- Test 1: Array of Animals ---" << std::endl;
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete j;
  delete i;

  std::cout << "\n--- Test 2: Copy constructor leak/crash ---" << std::endl;
  {
    Dog dogA;
    Dog dogB = dogA;
  }

  std::cout << "\n--- Test 3: Assignment operator issue ---" << std::endl;
  {
    Cat catA;
    Cat catB;
    catB = catA;

    Brain brainA;
    Brain brainB;
    brainB = brainA;
  }

  std::cout << "\n--- Test 4: Array test required by subject ---" << std::endl;
  {
    const Animal *animals[4];
    for (int k = 0; k < 2; k++)
      animals[k] = new Dog();
    for (int k = 2; k < 4; k++)
      animals[k] = new Cat();

    for (int k = 0; k < 4; k++)
      delete animals[k];
  }

  return 0;
}