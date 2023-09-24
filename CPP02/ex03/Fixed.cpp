#include "Fixed.hpp"

/*---------------------Constructors/Destructor---------------------*/
Fixed::Fixed() {
    this->_fixed_point = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src ) {
    *this = src;
    //std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed( const int nbr ) : _fixed_point(nbr << _fract_bits) {
    //std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nbr ) : _fixed_point(roundf(nbr * (1 << _fract_bits))){
    //std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

/*---------------------Conversion functions---------------------*/
float Fixed::toFloat( void ) const {
    return (static_cast<float>(_fixed_point) / (1 << _fract_bits));
}

int   Fixed::toInt( void ) const {
    return (_fixed_point >> _fract_bits);
    // return (_fixed_point / 256); il s'agit dans les deux cas de decaler les bits de 8 vers la droite
    // donc 2 a la puissance _fract_bits ci-dessus
}



/*---------------------Utils Functions---------------------*/
void    Fixed::setRawBits( const int raw ) {
    _fixed_point = raw;
}

int Fixed::getRawBits( void ) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return ( _fixed_point );
}


/*---------------------Overload operator functions---------------------*/
Fixed&  Fixed::operator=( const Fixed& src ) {
    this->_fixed_point = src.getRawBits();
    return *this;
}

std::ostream&   operator<<( std::ostream &output, Fixed const& nbr ) {
    output << nbr.toFloat();
    return (output);
}

bool    Fixed::operator>( Fixed const & nbr ) const {
    return (this->getRawBits() > nbr.getRawBits());
}

bool    Fixed::operator<( Fixed const & nbr ) const {
    return (this->getRawBits() < nbr.getRawBits());
}

bool    Fixed::operator<=( Fixed const & nbr ) const {
    return (this->getRawBits() <= nbr.getRawBits());
}

bool    Fixed::operator>=( Fixed const & nbr ) const {
    return (this->getRawBits() >= nbr.getRawBits());
}

bool    Fixed::operator==( Fixed const & nbr ) const {
    return (this->getRawBits() == nbr.getRawBits());
}

bool    Fixed::operator!=( Fixed const & nbr ) const {
    return (this->getRawBits() != nbr.getRawBits());
}

Fixed   Fixed::operator+( Fixed const & nbr ) const {
    return (this->toFloat() + nbr.toFloat());
}

Fixed   Fixed::operator-( Fixed const & nbr ) const {
    return (this->toFloat() - nbr.toFloat());
}

Fixed   Fixed::operator*( Fixed const & nbr ) const {
    return (this->toFloat() * nbr.toFloat());
}

Fixed   Fixed::operator/( Fixed const & nbr ) const {
    return (this->toFloat() / nbr.toFloat());
}

Fixed   Fixed::operator++( int ) {
    Fixed   tmp(*this);
    tmp._fixed_point = this->_fixed_point++;
    return (tmp);
}

Fixed   Fixed::operator--( int ) {
    Fixed   tmp(*this);
    tmp._fixed_point = this->_fixed_point--;
    return (tmp);
}

Fixed&   Fixed::operator++( void ) {
    this->_fixed_point += 1;
    return (*this);
}

Fixed&   Fixed::operator--( void ) {
    this->_fixed_point -= 1;
    return (*this);
}
