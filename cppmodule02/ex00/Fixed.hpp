/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamgallot <adamgallot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 01:29:04 by adamgallot        #+#    #+#             */
/*   Updated: 2026/02/27 01:29:05 by adamgallot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{
	private:
		int _fixed_point;
		static const int _fract_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy); //copy constructor
		Fixed &operator=(const Fixed& rhs);
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif
