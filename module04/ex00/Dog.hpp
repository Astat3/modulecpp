/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:29:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:52:23 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animals.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
        void makeSound() const;
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &rhs);

};

#endif

