/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:29:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 17:17:14 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
  Brain *_brain;

public:
  Dog();
  ~Dog();
  void makeSound() const;
  Dog(const Dog &cpy);
  Dog &operator=(const Dog &rhs);
};

#endif
