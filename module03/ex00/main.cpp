/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 14:34:40 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 14:34:41 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap a;

  ClapTrap b("Bob");
  ClapTrap c(b);
  c.takeDamage(0);

  ClapTrap d("Target");
  d.takeDamage(15);
  d.takeDamage(5);

  ClapTrap e("Assignee");
  e = b;

  b.attack("Enemy");
  b.beRepaired(5);
  b.takeDamage(10);
  b.takeDamage(10);
  b.attack("Enemy2");
  b.beRepaired(5);
  return 0;
}