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
		Fixed(const Fixed &copy);
		Fixed(const int num); // fix vers int
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator=(const Fixed& rhs);
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
		~Fixed();
};

std::ostream &operator<<(std:: ostream& out, const Fixed &c);

#endif
