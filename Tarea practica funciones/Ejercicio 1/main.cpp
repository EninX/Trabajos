#include <iostream>
 using namespace std;
int factorial(int);

 int main()
 {
      int n;
      int fact=1;
       cout<<"Ingresar numero  :";
       cin>>n;
      cout<<"factorial del numero es :"<<factorial(n);
      for(int i=1;i<=n;i++)
      {
            fact=i*fact;
      }
      cout<<"el factorial de n es :"<<fact;
       return 0;

}
int factorial(int n)
{
    int fac=1;
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
