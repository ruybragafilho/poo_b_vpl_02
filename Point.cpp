#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
  // TODO: implement this operator.
  return out << "(" << p.x << ", "<< p.y << ")";   
}

std::istream & operator >> (std::istream &in,  Point &p) {
  // TODO: implement this operator.
  in >> p.x >> p.y;
  return in;
}

Point Point::operator + (const Point &p) {
  // TODO: implement this operator.
  return Point( this->x + p.x, 
                this->y + p.y );
}

Point& Point::operator += (const Point &p) {
  // TODO: implement this operator.
  this->x += p.x;
  this->y += p.y;
  return *this;
}