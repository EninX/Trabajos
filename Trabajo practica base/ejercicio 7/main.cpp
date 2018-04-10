#include <iostream>

using namespace std;

int main()
{

       int a,d,b=10000,res;
    cout<<"Ingrese un numero de 5 digitos: "<<endl;
    cin>>a;
    while(b>=0){

        d=a/b;
        cout<<d<<"  ";
        a=a%b;
        b=b/10;

    }
}
