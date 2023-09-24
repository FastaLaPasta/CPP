#include "Point.hpp"

/*-----------------Constructor/Destructor-----------------*/
Point::Point() : _x(1), _y(2) {
    //std::cout << "Point default constructor called" << std::endl;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
    //std::cout << "Point float constructor called" << std::endl;
}

Point::Point( const Point & src ): _x(src._x), _y(src._y){
    *this = src;
    //std::cout << "Point copy constructor called" << std::endl;
}

Point&  Point::operator=( const Point & src ) {
    ( Fixed )this->_x = src.getX();
    ( Fixed )this->_y = src.getY();

    return (*this);
}

Point::~Point() {
    //std::cout << "Point destructor has been called" << std::endl;
}

/*---------------------Utils functions--------------------*/

Fixed   Point::getX( void ) const {
    return (_x);
}

Fixed   Point::getY( void ) const {
    return (_y);
}

/*---------------Overloaded operator function--------------*/

