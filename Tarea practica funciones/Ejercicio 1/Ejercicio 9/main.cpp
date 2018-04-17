#include <iostream>

using namespace std;

int fibonaci(int cantidad){
    int x=1, y=1,z,fibo=3;
	cout<<x<<'\t';
	cout<<y<<'\t';
	while(fibo < cantidad){
		z=x+y;
		cout<<z<<'\t';
		fibo+=1;
		x=y;
		y=z;
	}
	z=x+y;
	x=y;
	y=z;
	return y;
}
