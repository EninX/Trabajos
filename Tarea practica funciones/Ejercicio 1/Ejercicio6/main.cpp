#include <iostream>

using namespace std;

int separacion(int x){
    int d1,d2,d3,d4,d5;
    if(x>=10000){
        if(x<=99999){
            d1=x/10000;
            d2=(x%10000)/1000;
            d3=((x%10000)%1000)/100;
            d4=(((x%10000)%1000)%100)/10;
            d5=((((x%10000)%1000)%100)%10)/1;
            cout<<d1<<'\t'<<d2<<'\t'<<d3<<'\t'<<d4<<'\t';
        }
    }
    return d5;
}
