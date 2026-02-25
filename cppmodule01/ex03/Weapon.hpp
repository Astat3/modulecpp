/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:49:30 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:49:33 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#pragma once

#include <iostream>
#include <string>

class Weapon {
private:
  std::string _type;

public:
  Weapon(std::string weapon);
  ~Weapon() { ; }
  const std::string &getType() const;
  void setType(std::string weapon);
};


#endif