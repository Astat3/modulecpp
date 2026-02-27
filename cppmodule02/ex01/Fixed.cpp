#include "Fixed.hpp"

// return the raw of a fixed
int Fixed::getRawBits(void) const {
  std::cout << "GetRaw bits called" << std::endl;
  return this->_fixed_point;
}
void Fixed::setRawBits(int const raw) { this->_fixed_point = raw; }

// fixed to 0;
Fixed::Fixed() : _fixed_point(0) {
  std::cout << "Default Constructor called !" << std::endl;
}

// fixed b(a) | copy constructor
Fixed::Fixed(const Fixed &copy) {
  std::cout << "Copy constructor called" << std::endl;
  *this = copy;
}

// overloading operator "="
Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "copy assignement operator called" << std::endl;
  if (this != &rhs)
    this->_fixed_point = rhs.getRawBits();
  return *this;
}

// insert a floating representation of the fixed inserted as a parameters
// overloading operator
std::ostream &operator<<(std::ostream &out, const Fixed &c) {
  out << c.toFloat();
  return out;
}
// destructor
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }
// int to fix
Fixed::Fixed(const int num) {
  std::cout << "Int constructor Called !" << std::endl;
  this->_fixed_point = num << _fract_bits;
}

// constructor float to int.
Fixed::Fixed(const float n) {
  std::cout << "Float constructor called" << std::endl;

  this->_fixed_point = roundf(n * (1 << _fract_bits));
}
// fixed to float
float Fixed::toFloat(void) const {
  return static_cast<float>(this->_fixed_point) /
         static_cast<float>(1 << _fract_bits);
}

// fixed to int
int Fixed::toInt(void) const { return this->_fixed_point >> _fract_bits; }