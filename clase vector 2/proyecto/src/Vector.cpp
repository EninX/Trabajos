#include <iostream>
#include <math.h>
#include "Point.h"
#include "Vector.h"
#include "PointArray.h"


Vector::Vector()
{
    Point start;
    Point end;
}
Vector::Vector(Point a,Point b){
    start=a;
    end=b;
}
Vector::Vector(Vector &v){
    start=v.start;
    end=v.end;
}
void Vector::offset(int x,int y){
    start.offset(x,y);
    end.offset(x,y);
}
void Vector::print(){
    start.print();
    std::cout<<" -> ";
    end.print();
    std::cout<<std::endl;
}
void Vector::module(){
    int x=(end.getX()- start.getX());
    int y=(end.getY()- start.getY());
    std::cout<<sqrt(x*x+y*y);
}
