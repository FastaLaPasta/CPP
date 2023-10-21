#include "Fixed.hpp"

Fixed::Fixed() {
    this->_fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src ) {
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=( const Fixed& src ) {
    std::cout << "copy assignement operator called" << std::endl;
    this->_fixed_point = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return ( this->_fixed_point );
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixed_point = raw;
}