/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:48:23 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:48:29 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//takes the weapon in the constructor.
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
}

HumanA::~HumanA()
{
    std::cout<<_name<<" Died."<<std::endl;
}

void HumanA::attack()const
{
    std::cout<<_name<<" attacks with their "<<_weapon.getType()<<std::endl;
}