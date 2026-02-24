#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#pragma once
#include "Weapon.hpp"

class HumanB {
private:
  Weapon *
      _weapon; // varible standart qui occupe une taille fixe->8octet sur 64bits
  std::string _name;

public:
  HumanB(std::string name);
  ~HumanB();
  void setWeapon(Weapon &weapon);
  void attack() const;
};


#endif