/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 18:41:17 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/14 17:14:56 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_HPP
#define PHONE_HPP
#pragma once


#include <iostream>
#include <string>

class contact{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_num;
        std::string _secret;
    public:
        contact(){;}
        ~contact(){;}
        void init();
        std::string getname()const{return this->_first_name;}
        std::string getlast()const{return this->_last_name;}
        std::string getnick()const{return this->_nickname;}
        std::string getphone()const{return this->_phone_num;}
        std::string getnum()const{return this->_phone_num;}
        std::string getsecret()const{return this->_secret;}
};

class PhoneBook
{
	private:
        contact _contact[8];
		int _index;
		bool _is_full;
	public:
		PhoneBook();
		~PhoneBook(){;}
		void add();
		void search();
};


#endif