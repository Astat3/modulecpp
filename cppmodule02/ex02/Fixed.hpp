
/*
A static member function min that takes two references to fixed-point numbers as
parameters, and returns a reference to the smallest one.
• A static member function min that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the smallest one.
• A static member function max that takes two references to fixed-point numbers as
parameters, and returns a reference to the greatest one.
• A static member function max that takes two references to constant fixed-point
numbers as parameters, and returns a reference to the greatest one.
*/


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
/*-------CONSTRUCTOR-------*/
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int num);
		Fixed(const float n);
/*-------METHOD-------------*/
		float toFloat( void ) const;
		int toInt( void ) const;
		int	getRawBits( void ) const;
		void setRawBits( int const raw );
/*--------OPERATOR-------------*/
	Fixed &operator=(const Fixed& rhs);
	Fixed operator+(const Fixed &a) const;
	Fixed operator-(const Fixed &a) const;
	Fixed operator*(const Fixed &a) const;
	Fixed operator/(const Fixed &a) const;
	bool operator>(const Fixed &a)const;
	bool operator<(const Fixed &a)const;
	bool operator<=(const Fixed &a)const;
	bool operator>=(const Fixed &a)const;
	bool operator==(const Fixed &a)const;
	bool operator!=(const Fixed &a)const;
/*---------INCREMENTATION OPERATOR-----------------*/
	Fixed &operator++();
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed &operator--();
/*------------MIN/MAX----------*/
static Fixed& min(Fixed &a, Fixed &b);
static const Fixed& min(const Fixed &a, const Fixed &b);
static Fixed& max(Fixed &a, Fixed &b);
static const Fixed& max(const Fixed &a,const Fixed &b);
/*-------DESTUCTOR-----------*/
		~Fixed();
};

std::ostream &operator<<(std:: ostream& out, const Fixed &c);

#endif
