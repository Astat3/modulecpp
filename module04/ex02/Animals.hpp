/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:24:30 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 19:45:42 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
#define ANIMALS_HPP

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
		virtual void makeSound()const = 0;
		std::string getType() const;
		Animal &operator=(const Animal &rhs);
};

#endif