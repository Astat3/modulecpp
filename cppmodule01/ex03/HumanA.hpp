/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:48:51 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:48:54 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
  Weapon &_weapon;
  std::string _name;

public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void attack() const;
};


#endif