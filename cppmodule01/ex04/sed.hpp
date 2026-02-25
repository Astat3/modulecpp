/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:50:26 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:50:28 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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