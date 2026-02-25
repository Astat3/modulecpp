/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:49:24 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:49:26 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
}

const std::string& Weapon::getType()const{
	return(_type);
}
