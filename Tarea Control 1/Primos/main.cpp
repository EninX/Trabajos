#include <iostream>

using namespace std;

bool esPrimo(int x){
	int divisores=0;
	for(int i=1;i<=x;i++){
		if((x%i)==0)
			divisores+=1;
	}
	if(divisores!= 2)
		return false;
	return true;
}

int main()
{
    int y=9;
	if(esPrimo(y)==true)
		cout<<y<<" es un numero primo"<<endl;
	else
		cout<<y<<" no es un numero primo"<<endl;
	cout<<'\n';

	int n,contador=0,numeros=1;
	cout<<"ingrese la cantidad de numeros primos: ";
	cin>>n;
	cout<<'\n';
	cout<<"los "<<n<<" primeros numeros primos son; ";

	while(contador != n){
		if(esPrimo(numeros)==true){
			cout<<numeros<<",";
			numeros+=1;
			contador+=1;
		}
		++numeros;
	}
	cout<<'\n';
}
