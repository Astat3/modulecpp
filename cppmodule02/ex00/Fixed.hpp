#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>


class Fixed
{
	private:
		int _fixed_point;
		static const int _fract_bits = 0;
	public:
		Fixed();
		Fixed(const Fixed &copy); //copy constructor
		Fixed &operator=(const Fixed& rhs);
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

#endif
