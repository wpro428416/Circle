#include <iostream>
#include "Circle.h"

Circle::Circle(Point  center,int r):Point(x,y)
{
    this->x=center.getx();
    this->y=center.gety();
    this->r=r;
}

Circle::~Circle(){}

Point Circle::getCenter(){
    return Point(x,y);
}

void Circle::move(int x,int y){
    Point::move(x,y);
}
