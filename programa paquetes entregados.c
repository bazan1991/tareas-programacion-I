#include<stdio.h>
#include<stdlib.h>
int main()
{
    char repetir;
    int totalPaquetes, lunes, martes, miercoles, jueves, viernes, sabado, domingo;
    float promedio;
    printf("\n\t\t\t\t \"PAQUETERIA BAZAN\"\n\n\n");
    do
    {
        printf ("\n\tIngrese numero de paquetes del dia Lunes: \t");
        scanf("%i",&lunes);

        printf ("\n\tIngrese numero de paquetes del dia Martes: \t");
        scanf("%i",&martes);

        printf ("\n\tIngrese numero de paquetes del dia Miercoles: \t");
        scanf("%i",&miercoles);

        printf ("\n\tIngrese numero de paquetes del dia Jueves: \t");
        scanf("%i",&jueves);

        printf ("\n\tIngrese numero de paquetes del dia Viernes: \t");
        scanf("%i",&viernes);

        printf ("\n\tIngrese numero de paquetes del dia Sabado: \t");
        scanf("%i",&sabado);

        printf ("\n\tIngrese numero de paquetes del dia Domingo: \t");
        scanf("%i",&domingo);


        while(lunes<=0||martes<0||miercoles<=0||jueves<=0||viernes<=0||sabado<=0||domingo<=0)
        {
            printf("\n\t Error!!!\n\n Numero de paquetes entregados por dia:\n\t");
            scanf("%i", lunes);
                        scanf("%i", martes);
                                    scanf("%i", miercoles);
                                                scanf("%i", jueves);
                                                            scanf("%i", viernes);
                                                                        scanf("%i", sabado);
                                                                                    scanf("%i", domingo);
        }

        totalPaquetes=lunes+martes+miercoles+jueves+viernes+sabado+domingo;


        fflush(stdin);
        printf("\n\n\t Desea registrar otro dato? s/n\n");
        scanf("%c",&repetir);
    }while(repetir=='s'||repetir=='S');

     promedio=(float)totalPaquetes/7;
     printf("\n\t\t El total de paquetes entregados es: %i\n\n", totalPaquetes);
     printf ("\n\t\t El promedio de paquetes entregados en una semana es: %.2f\n\n\n\n", promedio);
     system ("pause");
    return 0;
}

