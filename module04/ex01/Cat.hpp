/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:32:06 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:07:27 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"

#include "Animals.hpp"

class Cat : public Animal
{
    private:
        Brain* _brain;
	public:
		Cat();
		~Cat();
        void makeSound() const;
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &rhs);
};

#endif