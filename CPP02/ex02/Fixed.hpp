#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed & src );
    Fixed( const int nbr );
    Fixed( const float nbr);

    Fixed&  operator=( Fixed const & src );

    /*-----------------Comparison Operator-----------------*/
    bool    operator>( Fixed const & nbr ) const;
    bool    operator<( Fixed const & nbr ) const;
    bool    operator<=( Fixed const & nbr ) const;
    bool    operator>=( Fixed const & nbr ) const;
    bool    operator==( Fixed const & nbr ) const;
    bool    operator!=( Fixed const & nbr ) const;
    /*-----------------Arithmetic Operator-----------------*/
    Fixed   operator+( Fixed const & nbr ) const;
    Fixed   operator-( Fixed const & nbr ) const;
    Fixed   operator*( Fixed const & nbr ) const;
    Fixed   operator/( Fixed const & nbr ) const;
    /*-------------Increment/Decrement Operator------------*/
    Fixed   operator++( int );
    Fixed   operator--( int );
    Fixed&  operator++( void );
    Fixed&  operator--( void );
    /*------------------Min/Max functions------------------*/

    /*------------------Utils Functions--------------------*/
    int     getRawBits( void ) const;
    void    setRawBits( const int raw );
    /*------------------Conversion function----------------*/
    float   toFloat( void ) const;
    int     toInt( void ) const;

    private:
    int                 _fixed_point;
    const static int    _fract_bits = 8;
};

std::ostream&       operator<<( std::ostream &output, Fixed const & nbr );

#endif