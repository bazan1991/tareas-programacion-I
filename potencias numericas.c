#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int p, num;

    printf ("\n programa que elva un numero a cierta potencia \n");

    printf ("\n\t Introduzca numero que dece elevar al cuadrado: \n");
    scanf ("%d", & num);

    for(p=1; p<=1; p++)
        {
            printf ("\n Respuesta: %d\t\n", num*num);
            printf ( "\n\n\n");
        }

    printf ("\n Introduzca numero que dece elevar al cubo: \n");
    scanf ("%d", & num);


    for(p=1; p<=1; p++)
        {
            printf ("\n Respuesta: %d\t\n", num*num*num);
            printf ("\n\n\n");
        }

    printf ("\n Introduzca numero que dece elevar al la cuarta: \n");
    scanf ("%d", & num);


    for(p=1; p<=1; p++)
        {
            printf ("\n Respuesta: %d\t\n", num*num*num*num);
            printf ("\n\n\n");
        }




system ("PAUSE");
return 0;
}
