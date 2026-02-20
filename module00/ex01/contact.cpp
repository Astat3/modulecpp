/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:05:27 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 15:58:27 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"


bool contact::init()
{
	do {
		std::cout << "First Name: ";
		if (!std::getline(std::cin, this->_first_name))
			return false;
		for (size_t i = 0; i < this->_first_name.length(); i++) 
		{
    				if (this->_first_name[i] == '\t')
        				this->_first_name[i] = ' ';
		} 
	}while (this->_first_name.empty() && this->_first_name.find_first_not_of("\t") == std::string::npos);

	do {
		std::cout << "Last Name: ";
		if (!std::getline(std::cin, this->_last_name))
			return false;
		for (size_t i = 0; i < this->_last_name.length(); i++) 
		{
    				if (this->_last_name[i] == '\t')
        				this->_last_name[i] = ' ';
		} 
	} while (this->_last_name.empty() && this->_last_name.find_first_not_of("\t") == std::string::npos);

	do {
		std::cout << "Nickname: ";
		if (!std::getline(std::cin, this->_nickname))
			return false;
		for (size_t i = 0; i < this->_nickname.length(); i++) 
		{
    				if (this->_nickname[i] == '\t')
        				this->_nickname[i] = ' ';
		} 
	} while (this->_nickname.empty() && this->_nickname.find_first_not_of("\t") == std::string::npos);

	do {
		std::cout << "Phone Number: ";
		if (!std::getline(std::cin, this->_phone_num))
			return false;
		for (size_t i = 0; i < this->_phone_num.length(); i++) 
		{
    				if (this->_phone_num[i] == '\t')
        				this->_phone_num[i] = ' ';
		} 
	} while (this->_phone_num.empty() && this->_phone_num.find_first_not_of("\t") == std::string::npos);

	do {
		std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, this->_secret))
			return false;
		for (size_t i = 0; i < this->_secret.length(); i++) 
		{
    				if (this->_secret[i] == '\t')
        				this->_secret[i] = ' ';
		} 
	} while (this->_secret.empty() && this->_secret.find_first_not_of("\t") == std::string::npos);
	return true;
}