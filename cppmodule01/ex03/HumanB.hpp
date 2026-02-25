/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:49:08 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:49:42 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#pragma once
#include "Weapon.hpp"

class HumanB {
private:
  Weapon *
      _weapon;
  std::string _name;

public:
  HumanB(std::string name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack() const;
};


#endif