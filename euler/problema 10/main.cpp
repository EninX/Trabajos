#include <iostream>
#include <cmath>

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
   int long long n=2000000;
    int long long sum=0;
    for (int i=2; i<n; i++){
        if(isPrime(i))
            sum+=i;
    }
    cout<<"La suma de los numeros primos menores a: "<<n<<" es: " <<sum;

    return 0;
}
