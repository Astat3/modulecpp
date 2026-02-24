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