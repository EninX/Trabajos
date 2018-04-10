#include <iostream>

using namespace std;

void menormayorprom(int x, int y, int z , int &may,int &men, float &prom)
{
    float promedio;

    promedio=(float)(x+y+z)/3;

    if (x>y && x>z){
        cout<<"El mayor es : "<<x<<endl;

		if(y>z){
		cout<<"El menor es : "<<z<<endl;
		}else{
		cout<<"El menor es : "<<y<<endl;
		}
	}else if(y>x && y>z){

		cout<<"El mayor es"<<y<<endl;

		if(x>z){
		cout<<"El menor es : "<<z<<endl;
		}else{
		cout<<"El menor es : "<<x<<endl;
		}
	}else{
		cout<<"El mayor es : "<<z<<endl;
		if(x>y){
			cout<<"El menor es : "<<y<<endl;
		}else{
			cout<<"El menor es : "<<x<<endl;
		}
	}
    cout<<"El promedio es : "<<promedio<<endl;

}



int main()
{
    int mayor,menor;
    float prom;
    menormayorprom(3,4,5,mayor,menor,prom);
    cout<< prom <<endl;
    return 0;
}
