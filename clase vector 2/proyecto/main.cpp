#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "PointArray.h"
using namespace std;

void swaper(Point &x, Point &y){//paso por referencia
    Point c=x;
    x=y;
    y=c;
}
void swaper_y(Point *x, Point *y){//paso por punteros
    Point c=*x;
    *x=*y;
    *y=c;
}
int main()
{
    Point p(4,3);
    Point q(6,7);

    swaper(p,q);//swap por referencia
    swaper_y(&p,&q);//swap por punteros
    Point *ptr1=&p;
    Point *ptr2=&q;
    ptr1->print();
    ptr2->print();
    Point *easy=new Point;//easy es un puntero
    easy->print();//imprime 0,0
    easy->offset(10,10);//imprime 10,10
    easy->print();
    delete easy;
    Vector v;
    v.print();
    return 0;

}
