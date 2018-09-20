#include <iostream>
#include<math.h>

using namespace std;

bool isPrime(int x){
    bool prime=true;
    for(int i=2; i<=sqrt(x);++i){
        if (x%i==0){
            prime=false;
            break;
        }
    }
    if (prime) return true;
    else return false;
}

int main()
{
     int i=2, k=0;
    do{
       if(isPrime(i) == true){
           k++;
       }
       i++;
   }
   while(k != 10001);
    cout<<"el 10001 primo es: "<<i-1;
    return 0;
}
