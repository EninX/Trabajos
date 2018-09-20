#include <iostream>

using namespace std;

int main()
{
    int rest,sum=0,produ=0;

    for(int i=1;i<=100;++i){
        sum+=i;
        produ+=(i*i);
    }

    sum*=sum;
    rest=sum-produ;
    cout<<"la resta es: "<<rest<<endl;
    return 0;
}
