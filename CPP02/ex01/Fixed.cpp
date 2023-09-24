#include "Fixed.hpp"

Fixed::Fixed() {
    this->_fixed_point = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src ) {
    *this = src;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int nbr ) : _fixed_point(nbr << _fract_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nbr ) {
    //Extraire les parties entiere et fractionnaire du float
    int integerPart = static_cast<int>(nbr);
    float   fractionalPart = nbr - static_cast<float>(integerPart);

    //Stocker la partie entiere dans les 8 bits superieurs et la partie fractionnaire dans les 8 bits inferieurs
    _fixed_point = (integerPart << _fract_bits) | static_cast<int>(fractionalPart * (1 << _fract_bits));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const {
    return (static_cast<float>(_fixed_point) / (1 << _fract_bits));
}

int   Fixed::toInt( void ) const {
    return (_fixed_point >> _fract_bits);
    // return (_fixed_point / 256); il s'agit dans les deux cas de decaler les bits de 8 vers la droite
    // donc 2 a la puissance _fract_bits ci-dessus
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=( const Fixed& src ) {
    this->_fixed_point = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return ( _fixed_point );
}

void    Fixed::setRawBits( const int raw ) {
    _fixed_point = raw;
}

std::ostream&   operator<<( std::ostream &output, Fixed const& nbr ) {
    output << nbr.toFloat();
    return (output);
}