#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed& src );
    Fixed( const int nbr );
    Fixed( const float nbr);

    Fixed&              operator=( Fixed const & src );
    

    int                 getRawBits( void ) const;
    void                setRawBits( const int raw );
    float         toFloat( void ) const;
    int           toInt( void ) const;

    private:
    int                 _fixed_point;
    const static int    _fract_bits = 8;
};

std::ostream&       operator<<( std::ostream &output, Fixed const & nbr );

#endif