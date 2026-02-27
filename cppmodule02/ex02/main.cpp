#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << b << std::endl;

  std::cout << Fixed::max(a, b) << std::endl;

  Fixed c(10.5f);
  Fixed d(2.0f);
  std::cout << "c: " << c << ", d: " << d << std::endl;
  std::cout << "c + d = " << c + d << " (expected 12.5)" << std::endl;
  std::cout << "c - d = " << c - d << " (expected 8.5)" << std::endl;
  std::cout << "c * d = " << c * d << " (expected 21)" << std::endl;
  std::cout << "c / d = " << c / d << " (expected 5.25)" << std::endl;

  std::cout << "c > d : " << (c > d) << " (expected 1)" << std::endl;
  std::cout << "c < d : " << (c < d) << " (expected 0)" << std::endl;
  std::cout << "c >= d: " << (c >= d) << " (expected 1)" << std::endl;
  std::cout << "c <= d: " << (c <= d) << " (expected 0)" << std::endl;
  std::cout << "c == c: " << (c == c) << " (expected 1)" << std::endl;
  std::cout << "c != d: " << (c != d) << " (expected 1)" << std::endl;

  Fixed e(5.0f);
  std::cout << "e initially: " << e << std::endl;
  std::cout << "--e: " << --e << std::endl;
  std::cout << "e: " << e << std::endl;
  std::cout << "e--: " << e-- << std::endl;
  std::cout << "e: " << e << std::endl;

  std::cout << "Min(c, d): " << Fixed::min(c, d) << std::endl;
  std::cout << "Max(c, d): " << Fixed::max(c, d) << std::endl;

  const Fixed f(100.0f);
  const Fixed g(200.0f);
  std::cout << "const Min(f, g): " << Fixed::min(f, g) << std::endl;
  std::cout << "const Max(f, g): " << Fixed::max(f, g) << std::endl;

  return 0;
}