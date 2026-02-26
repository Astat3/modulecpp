/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:25:22 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 19:48:45 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {

  Animal testAnimal;
  const Animal *testAnimalPtr = new Animal();
  delete testAnimalPtr;

  return 0;
}