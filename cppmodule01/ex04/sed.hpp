#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

class Sed {
private:
  std::string _inFile;
  std::string _outFile;

public:
  Sed(std::string inFile);
  ~Sed();
  bool replace(const std::string &s1, const std::string &s2);
};

#endif