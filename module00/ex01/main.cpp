/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:21:30 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/14 15:36:43 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"


int main(){
	PhoneBook book;
	std::string command;

	while (true)
	{
		std::cout<<"PLEASE ENTER A COMMAND"<<std::endl;
		if(!std::getline(std::cin, command))
		{
			std::cout<<std::endl;
			break;
		}
		if (command == "ADD")
			book.add();
		else if(command == "SEARCH")
			book.search();
		else if (command == "EXIT")
			break;
	}
	return 0;
}
