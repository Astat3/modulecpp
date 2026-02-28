/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:24:30 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:25:05 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &cpy);
		virtual void makeSound()const;
		std::string getType() const;
		Animal &operator=(const Animal &rhs);
};

#endif