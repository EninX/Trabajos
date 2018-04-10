#include <iostream>

using namespace std;

int sucesionprimos(int n)
{
     for (int j=2;j<=n;j++){
        int a=0;
        for(int i=1;i<=n;i++){
            if(j%i==0){
            a++;
            }
        }
        if (a==2){
            cout<<j<<'\t';
        }
    }
}

int main()
{
    sucesionprimos(23);
    return 0;
}
