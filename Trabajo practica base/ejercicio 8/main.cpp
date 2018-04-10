#include <iostream>

using namespace std;

int main()
{
      int n, numero, digitos, reverso = 0;

     cout << "ingrese un numero: ";
     cin >> numero;

     n = numero;

     do
     {
         digitos = numero % 10;
         reverso = (reverso * 10) + digitos;
         numero = numero / 10;
     } while (numero != 0);

     cout << " el numero alreves es : " << reverso << endl;

     if (n == reverso)
         cout << " el numero es palindromo";
     else
         cout << " el numero no es palindromo";

    return 0;
}
