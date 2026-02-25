/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:47:49 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:47:51 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "zombie.hpp"
void Zombie::setname(std:: string& name)
{
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0 || N > 1000000)
	{
		std::cout<<"Wrong number, returning NULL"<<std::endl;
		return (NULL);
	}
	Zombie *horde = new (std::nothrow) Zombie[N];
	if (!horde)
	{
		std::cout<<"Failing allocation !"<<std::endl;
		return NULL;
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].setname(name);
	}
	return (horde);
}