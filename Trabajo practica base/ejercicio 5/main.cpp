#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=0;
    cout<<"ingresar numero  :";
    cin>>n;
    for(int i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2)
            {
              cout<<"No es Primo";
            }
            else
            {
                cout<<"Si es Primo";
            }
    return 0;


}
