# include <stdio.h>
# include <stdlib.h>
int main ()
{
    int d[10], men, suma=0,i, mas=0, menos=0;
    float promedio;
    printf ("\n\t \"BIBLIOTECA ESTADO DE MEXICO\" \n\t");
    for (i=0; i<10; i++)
    {
        printf ("\n Ingrese el numero de libros prestados en el dia #%i\t", i+1);
        scanf ("%i",&d[i]);
        while (d[i]<0)
        {
            printf ("\n\t Error! \n\t Ingrese de nuevo el numero de los libros del dia #%i \n\t", i+1);
            scanf ("%i",&d[i]);
        }

        suma+=d[i];
    }
    system ("cls");
    promedio = (float) suma /10;
    printf ("\n\t El promedio de libros prestados fue de %.2f \n\t", promedio);
    for (i=0; i<10; i++)
    {
        if (d[i] < promedio)
        {
            //printf ("\n El dia #%i se prestaron menos libros que el promedio (%i libros) \n\t", i+1, d[i]);
            menos++;
        }
        if (d[i] > promedio)
         {
            //printf ("\n\t El dia #%i se prestaron mas libros que el promedio (%i libros) \n\t", i+1, d[i]);
            mas++;
         }
    }
    printf ("\n\t %i dias se prestaron mas libros que el promedio y %i dias se prestaron menos libros \n\t", mas, menos );
    system ("pause");
    return 0;
}
