#include "Fixed.hpp"

//return the raw of a fixed
int Fixed::getRawBits(void)const
{
	return this->_fixed_point;
	
}
//modifie la fixed_point pour lui donner un int sans faire de conversion
void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

//fixed to 0;
Fixed::Fixed():_fixed_point(0)
{
	std::cout<<"Constructor called !"<<std::endl;
}

//fixed b(a) | copy constructor
Fixed::Fixed(const Fixed& copy)
{
	this->_fixed_point = copy.getRawBits();
}

//overloading operator "="


//insert a floating representation of the fixed inserted as a parameters
//overloading operator
std::ostream &operator<<(std:: ostream& out, const Fixed &c)
{
	out<<c.toFloat();
	return out;
}
//destructor
Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}
// int to fix
Fixed::Fixed(const int num)
{
	this->_fixed_point = num << _fract_bits;
}


//constructor float to int.
Fixed::Fixed(const float n)
{
	this->_fixed_point=roundf(n * (1 << _fract_bits));
}
//fixed to float 
float Fixed::toFloat( void ) const
{
	return (float)this->_fixed_point / (float)(1 << _fract_bits);
}

//fixed to int
int Fixed::toInt(void )const{
	return ((int)this->_fixed_point >> _fract_bits);
}


/*--------------ARITHMETICS OPERATOR-----------------------*/

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &a)const{
	Fixed res;
	res.setRawBits(this->_fixed_point + a.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &a)const{
	Fixed res; 
	res.setRawBits(this->_fixed_point - a.getRawBits());
	return res;
}

// Fixed b(Fixed(2) * Fixed(5)) 
		//le compilateur comprend --> objet de gauche devient this | objet de droite Fixed(5
		// donc pas besoin de mettre deux arguments;
Fixed Fixed::operator*(const Fixed &a)const{
	return Fixed(this->toFloat() * a.toFloat());
}

Fixed Fixed::operator/(const Fixed &a)const{
	if (a.getRawBits() == 0)
	{
		std::cerr<<"Division By 0"<<std::endl;
		return Fixed(0);
	}
	return(Fixed(this->toFloat() / a.toFloat()));
}
/*--------------BOOL OPERATOR-----------------------------*/

//const a la fin transforme this en lecture seule -> réduction des risques.
bool Fixed::operator>(const Fixed &a) const
{
	return(this->_fixed_point > a.getRawBits());
}

bool Fixed::operator<(const Fixed &a) const
{
	return(this->_fixed_point < a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a)const{
	return(this->_fixed_point <= a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a)const{
	return (this->_fixed_point >= a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const
{
	return(this->_fixed_point  != a.getRawBits());
}

bool Fixed::operator==(const Fixed &a)const
{
	return(this->_fixed_point == a.getRawBits());
}
/*----------------INCREMENTATION OPERATOR-------------------*/
//pré incremententation
Fixed &Fixed::operator++(void)
{
	this->_fixed_point++;
	return (*this);
}
//post incrementation
Fixed Fixed::operator++(int)
{
	Fixed tmp;
	tmp = *this;
	this->_fixed_point++;
	return (tmp);
}

Fixed &Fixed::operator--(){
	this->_fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp;
	tmp = *this;
	this->_fixed_point--;
	return (tmp);
}
/*----------MIN:/MAX------------------*/
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

const Fixed &Fixed::max(const Fixed&a, const Fixed &b){
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}