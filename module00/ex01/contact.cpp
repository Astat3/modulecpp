/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:05:27 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/14 16:10:53 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"


void contact::init()
{
	do {
		std::cout << "First Name: ";
		if (!std::getline(std::cin, this->_first_name))
			return; 
	} while (this->_first_name.empty());

	do {
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, this->_last_name))
			return;
	} while (this->_last_name.empty());

	do {
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, this->_nickname))
			return;
	} while (this->_nickname.empty());

	do {
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, this->_phone_num))
			return;
	} while (this->_phone_num.empty());
	do {
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, this->_secret))
			return;
	} while (this->_secret.empty());
}