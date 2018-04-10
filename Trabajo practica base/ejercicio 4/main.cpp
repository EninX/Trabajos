#include <iostream>

using namespace std;

int main()
{
     int a,b;
    cout<<"Ingrese el primero numero: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>b;

    if(a%2==0){
        cout<<a<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<a<<" No es multiplo de 2"<<endl;
    }
    if(b%2==0){
        cout<<b<<" Es multiplo de 2"<<endl;
    }
    else{
        cout<<b<<" No es multiplo de 2"<<endl;
    }
    if(a%b==0){
        cout<<a<<" Es multiplo de "<<b<<endl;
    }
    else{
        cout<<a<<" no es multiplo de "<<b<<endl;
    }
    if(a*a==b){
        cout<<a<<" al cuadrado tiene como resultado a "<<b<<endl;
    }
    else{
        cout<<a<<" al cuadrado no tiene como resultado a "<<b<<endl;
    }


}
