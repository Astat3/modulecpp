/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:47:40 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:47:41 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "zombie.hpp"


Zombie::~Zombie()
{
    std::cout<<"Killed: "<<_name<<std::endl;
}


void Zombie::announce(void)const
{
    std::cout<<"Name: "<<_name<<std::endl;
}