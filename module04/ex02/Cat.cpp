/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 15:52:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/26 19:03:34 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animals.hpp"
#include "Brain.hpp"
#include <iostream>


Cat::Cat(){
    std::cout<<"Cat created !"<<std::endl;
    this->_type = "CAT";
    this->_brain = new Brain();
}

Cat::~Cat(){
    std::cout<<"Cat Killed !"<<std::endl;
    delete this->_brain;
}

void Cat::makeSound()const
{
    std::cout<<"Meow !"<<std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
    std::cout<<"Copy of: "<<cpy.getType()<<std::endl;
    this->_brain = new Brain(*(cpy._brain));
    
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        delete this->_brain;
        this->_brain = new Brain(*(rhs._brain));
    }
    return *this;
}