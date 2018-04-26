#include <iostream>

using namespace std;

void copiar(char *lista1,char *lista2){
	for(int i=0;lista1[i]!='\0';i++){
		lista2[i]=lista1[i];
	}
}


int main()
{
    char palabra[]="simira";
    char hi[]="hola";
	copiar(palabra,hi);
    cout<<palabra;
    return 0;
}
