#include "Fixed.hpp"

//return the raw of a fixed
int Fixed::getRawBits(void)const
{
	std::cout<<"GetRaw bits called"<<std::endl;
	return this->_fixed_point;
	
}
//modifie la fixed_point pour lui donner un int sans faire de conversion
void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

//fixed to 0;
Fixed::Fixed()
{
	std::cout<<"Constructor called !"<<std::endl;
	this->_fixed_point = 0;
}


//fixed b(a);
Fixed::Fixed(const Fixed& copy)
{
	std::cout<<"Copy constructor called !"<<std::endl;
	this->_fixed_point = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout<<"Overload operator called"<<std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return *this;
}

//insert a floating representation of the fixed inserted as a parameters
std::ostream &operator<<(std:: ostream& out, const Fixed &c)
{
	out<<c.toFloat()<<"Fixed: "<<c.getRawBits();
	return out;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
// int to fix
Fixed::Fixed(const int num)
{
	this->_fixed_point = num << _fract_bits;
}
//fixed to float 
float Fixed::toFloat( void ) const
{
	return (float)this->_fixed_point / (float)(1 << _fract_bits);
}

int Fixed::toInt(void )const{
	return ((int)this->_fixed_point >> _fract_bits);
}