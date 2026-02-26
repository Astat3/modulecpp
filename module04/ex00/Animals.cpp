/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:34:43 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 16:23:53 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"


Animal::Animal()
{
    std::cout<<"Default Animal created"<<std::endl;
    this->type = "Default";
}

Animal::~Animal()
{
    std::cout<<"Default Animal killed"<<std::endl;
}

std::string Animal::getType ()const{
    return this->type;
}

void Animal::makeSound()const{
    return;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}

Animal::Animal(const Animal &cpy)
{
    std::cout<<"Copy of: "<<cpy.getType()<<std::endl;
}