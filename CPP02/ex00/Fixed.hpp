#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed& src );

    Fixed&  operator=( Fixed const & src );

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    private:
    int                 _fixed_point;
    const static int    _fract_bits = 8;
};

#endif