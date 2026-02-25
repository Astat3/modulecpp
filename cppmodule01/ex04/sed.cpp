/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:50:00 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:50:01 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "sed.hpp"

Sed::Sed(std::string inFile) : _inFile(inFile) {
  this->_outFile = this->_inFile + ".replace";
}

Sed::~Sed() {}

bool Sed::replace(const std::string &s1, const std::string &s2) {
  if (s1.empty()) {
    std::cerr << "String is empty !" << std::endl;
    return false;
  }

  std::ifstream ifs(this->_inFile.c_str());
  if (!ifs.is_open()) {
    std::cerr << "Cannot open file" << this->_inFile << std::endl;
    return false;
  }

  std::string content;
  char c;
  while (ifs.get(c)) {
    content += c;
  }
  ifs.close();

  std::ofstream ofs(this->_outFile.c_str());
  if (!ofs.is_open()) {
    std::cerr << "Cannot create an output file " << this->_outFile
              << std::endl;
    return false;
  }

  size_t pos = 0;
  size_t prev = 0;
  while ((pos = content.find(s1, prev)) != std::string::npos) {
    ofs << content.substr(prev, pos - prev);
    ofs << s2;
    prev = pos + s1.length();
  }
  ofs << content.substr(prev);

  ofs.close();
  return true;
}
