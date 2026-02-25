/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:46:46 by agallot           #+#    #+#             */
/*   Updated: 2026/02/25 14:46:47 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "zombie.hpp"

int main()
{


	Zombie *other = newZombie("Alain");
	Zombie Mama("Mama"); 
	Mama.annonce();
	delete other;

	return (0);
}

