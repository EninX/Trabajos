#include <iostream>
#include <string>
using namespace std;
int main()
{

   int p=0, rev=0, rem=0, max1=0, max=0;
    for (int i = 999; i >= 100; i--)
   {
        for (int j = 999; j >= 100; j--)
       {
            p = i * j;
            while(p!=0)
            {
               rem = p % 10;
               rev = rev * 10 + rem;
               p = p / 10;
           }
           if (rev == (i*j))
           {
               max1 = rev;
               if (max1 > max)
               {
                   max = max1;
                }
           }           rem = 0;
            rev = 0;

        }
   }
    cout <<"el mayor palandomo del producto de 3 digitos es: "<<max<<endl;
    return 0;
}
