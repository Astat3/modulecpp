/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:35:10 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 14:55:30 by agallot          ###   ########.fr       */
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
	if (new_contact.init() == false)
		return;
	this->_contact[_index] = new_contact;
	this->_index++;
	if (this->_index == 8)
	{
		this->_index = 0;
		this->_is_full = true;
	}
}


