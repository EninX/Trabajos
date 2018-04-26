#include <iostream>

using namespace std;

int suma(int lista[],int tamanio){
	int resultado = 0;
	for(int i=0;i<tamanio;i++){
		resultado+=lista[i];
	}
	return resultado;
}

int sumarecur(int *puntero, int tamanio){
    if(tamanio==1){
        return *puntero;
    }else{
        *puntero=*puntero+sumarecur(puntero+1,tamanio-1);
        return *puntero;
    }
}
int main()
{
    int lista[]={1,2,3,4,5},tam=5;
    cout<<sumarecur(lista,5)<<endl;
    return 0;
}
