#include <iostream>

using namespace std;

bool primo(int n)
{
    int a=0;
    for(int i=1;i<(n+1);i++){
         if(n%i==0){
             a++;
            }
         }
         if(a!=2)
            {
              return false;
            }
            else
            {
                return true;
            }

}

int main()
{
    cout<<primo(3)<<endl;
    return 0;
}
