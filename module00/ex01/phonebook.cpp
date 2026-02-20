/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:35:10 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/14 17:15:52 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	this->_is_full = false;
}
void PhoneBook::add()
{
	contact new_contact;
	/*init contact*/
	new_contact.init();
	this->_contact[_index] = new_contact;
	this->_index++;
	if (this->_index == 8)
	{
		this->_index = 0;
		this->_is_full = true;
	}
}


