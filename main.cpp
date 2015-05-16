#include <iostream>
#include "Circle.h"
#include "Point.h"

using namespace std;

int main(){
    Point center(10,20);
    Circle circle(center,5);

    cout<<circle.getCenter().getx()<<"."<<circle.getCenter().gety()<<endl;
    circle.move(30,20);
    cout<<circle.getCenter().getx()<<"."<<circle.getCenter().gety()<<endl;
    return 0;
}
