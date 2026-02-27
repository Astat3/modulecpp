/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 01:29:07 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/27 01:29:10 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
int main()
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout<<a.getRawBits()<<std::endl;
	std::cout<<b.getRawBits()<<std::endl;
	std::cout<<c.getRawBits()<<std::endl;	
	return 0;
}