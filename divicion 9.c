#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int  repite, num, suma = 0, total_num = 0;
    float divis = 9;


        do
        {
            do
            {
                printf ("\n Programa párrafo suma de numeros divisibles Entre Nueve \n");

                printf ("\n\t Introducir la cantidad divislible Entre 9\t");
                scanf ("%d", & num);

            }

            while (num%9 || num==0);
            {
              printf ("\n El Numero No Es divisible Entre 9 \n Intententa de Nuevo \n \t");
              scanf ("%d", & num);

              suma += num;
              total_num ++;



            }


        system ("cls");
        fflush (stdin);
        printf ("\n\t quieres repetir\n\t 1 para SI
                \n?");
        scanf ("% d", & repite);



        } while (repite==1);









system ( "PAUSE");
return 0;

}
