#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
  Weapon &_weapon; // elle doit être liée à une adresse mémoire dès sa creation
                   // | Ne peut pas être nulle
  std::string _name;

public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();
  void attack() const;
};


#endif