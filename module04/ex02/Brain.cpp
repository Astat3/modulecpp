/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 16:38:14 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/28 17:16:51 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain Created" << std::endl;
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = "I have an Idea !";
  }
}

Brain::~Brain() { std::cout << "Brain Killed" << std::endl; }

Brain::Brain(const Brain &cpy) {
  std::cout << "Copy Brain Called" << std::endl;
  for (int i = 0; i < 100; i++) {
    this->ideas[i] = cpy.ideas[i];
  }
}

Brain &Brain::operator=(const Brain &rhs) {
  if (this != &rhs) {
    int i = 0;
    while (i < 100) {
      this->ideas[i] = rhs.ideas[i];
      i++;
    }
  }
  return *this;
}