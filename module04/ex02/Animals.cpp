/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:34:43 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 19:45:46 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"


Animal::Animal()
{
    std::cout<<"Default Animal created"<<std::endl;
    this->_type = "Default";
}

Animal::~Animal()
{
    std::cout<<"Default Animal killed"<<std::endl;
}

std::string Animal::getType ()const{
    return this->_type;
}

// void Animal::makeSound()const{
//     return;
// }

Animal &Animal::operator=(const Animal &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

Animal::Animal(const Animal &cpy)
{
    std::cout<<"Copy of: "<<cpy.getType()<<std::endl;
}