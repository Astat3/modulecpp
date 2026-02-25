/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:47:01 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:47:16 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#pragma once

#include <iostream>
#include <string>

/*
Private --> seules les fonctions à l'interieur 
de la classe ont le droit de modifier les var
*/
class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std:: string name);
		~Zombie();
	void annonce(void) const;
};

Zombie *newZombie(std:: string new_name);
void randomChump( std::string name );
#endif
