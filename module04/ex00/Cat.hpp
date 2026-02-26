/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:32:06 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 16:25:41 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animals.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
        void makeSound() const;
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &rhs);
};

#endif