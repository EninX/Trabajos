#include <iostream>

using namespace std;

void concatenar(char *lista1,char *lista2){
	void concatenar(char *lista1,char *lista2){
	int cont=0;
	while(lista1[cont]!='\0')
		cont++;
	for(int i=0;lista2[i]!='\0';i++){
		lista1[i+cont]=lista2[i];
	}
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
