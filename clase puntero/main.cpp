#include <iostream>
#include "point.h"

using namespace std;

void Swap(point &a, point &b){
    point tmp=a;
    a = b;
    b= tmp;

}

void Swap(point *a, point *b){
    point tmp=*a;
    *a = *b;
    *b= tmp;

}

int main()
{
    point p(4,3);
    point q(6,7);

    Swap(&p , &q);

    point *ptr1 = &p;
    point *ptr2 = &q;

    ptr1->print();
    ptr2->print();

    point *easy = new point;
    easy -> print();
    easy -> offset(10,10);
    easy -> print();

    delete easy;
    return 0;
}
