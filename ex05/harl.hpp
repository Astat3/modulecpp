/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:58:56 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/13 18:29:37 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#pragma once

#include <iostream>
#include <string>
/*pointer to a member function -> poitner */

class Harl
{
	private:
		void debug(void)
		{
			std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
		}
		void info(void)
		{
			std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
		}
		void warning(void)
		{
			std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
		}
		void error(void)
		{
			std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
		}
	public:
	Harl(){;}
	~Harl(){;}
	void	complain(std::string level);
};
#endif