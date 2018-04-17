#include <iostream>

using namespace std;

bool palindromo(int numero){
    int n, digitos, reverso = 0;
	n = numero;
	do{
		digitos = numero % 10;
		reverso = (reverso * 10) + digitos;
		numero = numero / 10;
	}
	while (numero != 0);
	if (n == reverso)
		return true;
	else
		return false;
}
