/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:36:11 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 15:44:09 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScarvTrap::ScarvTrap(std:: string name): ClapTrap(name)
{
	std::cout<<"ScarvTrap Created !"<<std::endl;
}
ScarvTrap::~ScarvTrap(){
	std::cout<<"ScarvTrap Destroyed !"<<std::endl;
}