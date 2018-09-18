#include <iostream>

using namespace std;

int main()
{
    long long numero,x=0,y=1,z=1,sum=0;
    cout<<"Numero: ";cin >> numero;
    for(int i=1;i<numero;i++){

        z=x+y;
        cout << z << " - ";
        if(!(z%2)){sum+=z;}
        if(z>numero){i=numero;}
        x=y;
        y=z;

    }
    cout << endl<< sum;
    return 0;
}
