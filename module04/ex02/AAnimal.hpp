/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:24:30 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 17:35:42 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
  std::string _type;

public:
  AAnimal();
  virtual ~AAnimal();
  AAnimal(const AAnimal &cpy);
  virtual void makeSound() const = 0;
  std::string getType() const;
  AAnimal &operator=(const AAnimal &rhs);
};

#endif