#include <iostream>
#include <string>
using namespace std;
int main()
{	
	long long num=600851475143, i=2,fact,cont=2;
    	while(i<num){
        	if(num%i==0){
            	fact=i;
            	while(fact%cont != 0){
                	cont++;
               		if(cont==fact-1){
                    	cout<<fact<<endl;
                    	cont=2;
                    	break;
                	}
            	}
       		}
        	i++;
    	}
}
