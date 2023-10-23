#include "Point.hpp"

static Fixed   abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

//Verif si un point est a l'interieur d'un triangle
bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABC = abs(((b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX()) * (b.getY() - a.getY())) / 2);
    Fixed areaPBC = abs(((b.getX() - point.getX()) * (c.getY() - point.getY()) - (c.getX() - point.getX()) * (b.getY() - point.getY())) / 2);
    Fixed areaPCA = abs(((c.getX() - point.getX()) * (a.getY() - point.getY()) - (a.getX() - point.getX()) * (c.getY() - point.getY())) / 2);
    Fixed areaPAB = abs(((b.getX() - point.getX()) * (a.getY() - point.getY()) - (a.getX() - point.getX()) * (b.getY() - point.getY())) / 2);
    if (areaPAB == 0 || areaPBC == 0 || areaPCA == 0)
        return (0);
    return (areaABC == areaPAB + areaPBC + areaPCA);
}