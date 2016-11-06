#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char repetir;
    int cpu=0, temp, i=1, tiempo, suma;
    float prom;

    printf ("\nPrograma Temperatura de la CPU\n\n\n");
    do
    {
    printf ("\n Cuantos CPU'S vas a ocupar?\n\t");
    scanf ("%d",& cpu);

        while(cpu<=0)
        {
            printf("\n\t Error!!!\n\n cuantos CPU´S vas a ocupar?:\n\t");
            scanf("%d", & cpu);

    while (i<=cpu)
    {
        printf ("\n\t Introducir La Temperatura %d\n", i);
        scanf ("%d",& temp);

        while (tiempo<0)
        {
           if (tiempo==0)
           {
               suma+=temp;
               printf ("\n\t La Suma total de la Temperatura de los Procesadores es: %d", suma);
           }
        }
    }
        }
        temp=temp+tiempo;
        i++;
        fflush(stdin);
        printf("\n\n\t Desea registrar otro valor? s/n\n");
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');
    prom=(float)temp/i;
    printf ("\n\t El Promedio De Las Temperaturas es: %.2f\t", prom);

system ("PAUSE");
return 0;
}

