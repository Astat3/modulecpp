/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:56:04 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 15:00:24 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
  FragTrap a;

  FragTrap b("RBobo");

  FragTrap c(b);
  c.takeDamage(0);

  FragTrap d("BOBO");
  d = b;

  b.attack("OUI"); 
  b.takeDamage(50); 
  b.beRepaired(25);
  b.highFivesGuys();

  b.takeDamage(100);
  b.attack("aah");
  b.highFivesGuys();
  return 0;
}
