#ifndef VECTOR_H
#define VECTOR_H

#include "Point.h"

class Vector
{
    public:
        Vector();
        Vector(Point,Point);
        Vector(Vector&o);
        void offset(int ,int);
        void print();
        void module();

    private:
        Point start,end;
};

#endif // VECTOR_H
