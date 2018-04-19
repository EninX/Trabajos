#include <iostream>

using namespace std;

int potencia(int numero, int exponente){

    if (exponente==1){

      return numero;}
    else{
    return numero * potencia(numero, exponente-1);
}
}

int main()
{
    cout<<"la potencia es:"<<potencia(7,4);
    return 0;
}
