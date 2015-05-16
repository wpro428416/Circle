#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
class Point{
public:
    Point(int x,int y);
    ~Point();
    int getx();
    int gety();
    void move(int x,int y);
protected:
    int x,y;
};


#endif // POINT_H_INCLUDED
