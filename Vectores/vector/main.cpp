#include <iostream>
#include "cmath"

using namespace std;

class Punto{
    public:
        int x,y;
};
class Vector{
    public:
            Punto inicio, fin;
};

void imprimir(Vector *v){
    cout<<"("<< v->inicio.x<<","<< v->inicio.y<<")->("<<v ->fin.x<< ";"<< v->fin.y<<")"<<endl;
}

float modulo(const Vector *v){
    int x = v->fin.x - v->inicio.x;
    int y = v->fin.y - v->inicio.y;
    return sqrt(x *x + y *y);
}



int main()
{
    Vector v;

    v.inicio.x = 1;
    v.inicio.y = 2;
    v.fin.x = 3;
    v.fin.y = 4;

//    imprimir(v);
//    cout<< modulo(v)<< endl;

    Vector arr[4];
    arr[0].inicio.x=1;
    arr[1].inicio.x=2;
    arr[2].inicio.x=3;
    arr[3].inicio.x=4;

    Vector *ptrV=&v;
    imprimir(ptrV);

    return 0;
}
