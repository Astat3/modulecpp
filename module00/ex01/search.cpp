/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallot <agallot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:11:08 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/20 14:59:54 by agallot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "phone.hpp"


std::string format_text(std::string text)
{
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return text;
}

void    PhoneBook::search(void)
{
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (this->_contact[i].getname().empty())
            continue;

        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << format_text(this->_contact[i].getname());
        std::cout << "|" << std::setw(10) << format_text(this->_contact[i].getlast());
        std::cout << "|" << std::setw(10) << format_text(this->_contact[i].getnick());
        std::cout << "|" << std::endl;
    }
    std::cout << "|__________|__________|__________|__________|" << std::endl;

    std::string input;
    int         index = -1;

    std::cout << "Enter index to display details: ";
    if (!std::getline(std::cin, input))
        return;

    if (input.length() == 1 && std::isdigit(input[0]))
    {
        index = std::atoi(input.c_str()) - 1;
        
        if (index >= 0 && index < 8 && !this->_contact[index].getname().empty())
        {
            std::cout << "\n--- Contact Details ---" << std::endl;
            std::cout << "First Name: " << this->_contact[index].getname() << std::endl;
            std::cout << "Last Name : " << this->_contact[index].getlast() << std::endl;
            std::cout << "Nickname  : " << this->_contact[index].getnick() << std::endl;
            std::cout << "Phone     : " << this->_contact[index].getphone() << std::endl;
            std::cout << "Secret    : " << this->_contact[index].getsecret() << std::endl;
        }
        else
        {
            std::cout << "Error: Invalid index or empty contact." << std::endl;
        }
    }
    else
    {
        std::cout << "Error: Please enter a valid digit (1-8)." << std::endl;
    }
}