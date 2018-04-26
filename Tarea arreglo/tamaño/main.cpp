#include <iostream>

using namespace std;

int tamanio(char *lista){
	int tamanio=0;
	for(int i=0;lista[i]!='\0';i++){
		tamanio=tamanio+1;
	}
	return tamanio;
}

int main()
{
    char palabra[]="porfavorfunciona";
    cout<< tamanio(palabra)<<endl;
    return 0;
}
