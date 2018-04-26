#include <iostream>

using namespace std;

void invertir(int lista[],int tamanio){
	int x=tamanio-1,ue;
	for(int i=0;i<(tamanio/2);i++){
		ue=lista[i];
		lista[i]=lista[x];
		lista[x]=ue;
		x-=1;
	}
}

void invertirpuntero(int lista[],int tamanio){
    int x;
    int *ptr=lista;
    int *ue=lista[tamanio-1];
    while(ptr<=ue){
        x=*ptr;
        *ptr=*ue;
        *ue=x;
        ++ptr;
        --ue;
    }

}


int main()
{
    int arreglo[]={1,2,3,4,5},tamanio=5;
    invertir(arreglo,5);
    for (int i=0;i<tamanio;i++)
        cout<<arreglo[i];
    return 0;
}
