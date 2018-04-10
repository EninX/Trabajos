#include <iostream>

using namespace std;

int main()
{
        int Numero, i=2, A=1, B=1, C=0;



    printf("Digite el Numero: ");

    scanf("%d", & Numero);





    if (Numero == 0)

    {

       printf("La Serie Fibonacci del Numero %d es: 0 \n", Numero);

    }

        if (Numero ==1)

    {

       printf("La Serie Fibonacci del Numero %d es: 1 \n", Numero);

    }

        if (Numero == 2)

    {

       printf("La Serie Fibonacci del Numero %d es: 1 1 \n", Numero);

    }

    if (Numero >=3)

    {



    printf("%d %d ", A,B);

       do

       {



               C=A+B;

               A=B;

               B=C;



               printf("%d \n", C);



               i= i+1;



       }while(Numero > i);

    }



    system("pause");

    return 0;
}
