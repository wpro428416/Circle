#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Point.h"

class Circle:public Point
{
public:
    Circle(Point center,int r);
    ~Circle();
    void move(int x,int y);
    Point getCenter();
private:
    int r;
};


#endif // CIRCLE_H_INCLUDED
