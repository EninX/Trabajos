#include <iostream>

using namespace std;

int main()
{
        for(int a = 0; a < 333; a++){
            for(int b = a + 1; b < 666; b++){
               for(int c = b + 1; c < 666; c++){
                   if((a + b + c) == 1000){
                       if((a * a + b * b) == c * c){
                            cout<<"el valor de a:"<<a<<" b:"<<b<<" c:"<<c<<endl;
                           cout <<"el resultado de a*b*c es: "<<a*b*c<<endl;
                           break;
                        }
                    }
                }
           }
    }
    return 0;
}
