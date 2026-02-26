/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:38:01 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 18:51:42 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Dog Created"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog Killed"<<std::endl;
}

void Dog::makeSound()const{
    std::cout<<"Bark !"<<std::endl;
}

Dog::Dog(const Dog &cpy)
{
    std::cout<<"Copy of: "<<cpy.getType()<<std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        this->type = rhs.type;
    }
    return *this;
}
