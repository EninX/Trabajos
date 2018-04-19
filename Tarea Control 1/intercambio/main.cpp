#include <iostream>

using namespace std;

void intercambio(int a,int b){
a=a+b;
b=a-b;
a=a-b;
cout<<"el valor de a es:"<<a;
cout<<" \n";
cout<<"el valor de b es:"<<b;
cout<<" \n";
}
void bits(int a , int b){
a=a^b;
b=a^b;
a=a^b;
cout<<"el valor de a es:"<<a;
cout<<"\n";
cout<<"el valor de b es:"<<b;


}
int main()
{
     intercambio(1,2);
     bits(4,5);
}
