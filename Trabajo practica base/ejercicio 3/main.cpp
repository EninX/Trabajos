#include <iostream>

using namespace std;

int main()
{
    float a,b,c,mayor;
    float promedio;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;
    cout<<"Ingrese el tecer numero: "<<endl;
    cin>>c;
    mayor=a;
    if(b>a){
        mayor=b;
    }
    if(c>a){
        mayor=c;
    }
    cout<<"El mayor numero es: "<<mayor<<endl;
    promedio=(a+b+c)/3;
    cout<<"El promedio de los numeros es: "<<promedio<<endl;
}
