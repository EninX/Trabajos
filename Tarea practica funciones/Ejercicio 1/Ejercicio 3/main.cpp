#include <iostream>

using namespace std;

void esMultiplo(int numero1, int numero2)
{
    if(numero1%2==0 && numero2%2==0){
        cout<<"Los numeros son multiplos de 2"<<endl;
    }else if(numero1%2!=0 && numero2%2!=0) {
        cout<<"Los numeros no son multiplos de  2"<<endl;
    }else if(numero1%2==0 && numero2%2!=0){
        cout<<numero1<<" es multiplo de dos"<<endl;
        cout<<numero2<<" no es multiplo de dos"<<endl;
    }else{
        cout<<numero1<<" no es multiplo de 2"<<endl;
        cout<<numero2<<" es multiplo de 2"<<endl;
    }
    if(numero2%numero1==0){
        cout<<numero1<<" es multiplo de "<<numero2<<endl;
    }else if(numero1%numero2==0){
        cout<<numero2<<" es multiplo de "<<numero1<<endl;
    }
    int cuadrado=numero1*numero1;
    if(cuadrado==numero2){
        cout<<numero1<<" elevado al cuadrado es igual a "<<numero2<<endl;
    }

}

int main()
{
    esMultiplo(2,4);
}
