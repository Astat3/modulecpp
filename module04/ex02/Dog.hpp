/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:29:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:06:26 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animals.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_brain;
	public:
		Dog();
		~Dog();
        void makeSound() const;
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &rhs);
        void getType()const;

};

#endif

