/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 15:23:00 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 18:05:40 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#pragma once
#include "open.hpp"

class ScarvTrap: public ClapTrap
{
    public:
    ScarvTrap(std:: string name);
    ScarvTrap();
    ScarvTrap(const ScarvTrap &cp);
    ~ScarvTrap();
    void GuardGate();
    void attack(const std::string &target);
    ScarvTrap &operator =(const ScarvTrap &rhs);
    
};


std::ostream &operator<<(std:: ostream& out, const ClapTrap &c);
#endif