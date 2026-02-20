/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:38:04 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 15:19:32 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPEN_HPP
#define OPEN_HPP

#pragma once

#include <iostream>
#include <string>

/*attack -> targer lose hit points
clap repairs itself -> regains hit point
both cost 1 energy point
claptrap instance should not interact with one another
Everytime something happen, you should display a mess
also for constructor and destructor
*/

class ClapTrap{
	private:
		std::string _name;
		unsigned int _hit;
		int _energy;
		int _attack_damage;
	public:
		ClapTrap(std::string name);
		std::string Getname();
		ClapTrap(const ClapTrap& cpy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

std::ostream &operator<<(std:: ostream& out, ClapTrap &c);

#endif