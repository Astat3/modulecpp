/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 18:27:13 by agallot           #+#    #+#             */
/*   Updated: 2026/02/20 18:54:17 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#pragma once
#include "open.hpp"

class Fragtrap: public ClapTrap
{
	public:
	Fragtrap();
	Fragtrap(std:: string name);
	~Fragtrap();
	Fragtrap(const Fragtrap &cpy);
	Fragtrap &operator =(const Fragtrap &rhs);
    void highFivesGuys(void);
};

std::ostream &operator<<(std:: ostream& out, ClapTrap &c);
#endif