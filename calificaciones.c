/*Un profesor necesita un programa que permita guardar la calf. de 10 alumnos.
Una vez capturados las calf. dar la operacion de buscar una calf. e indicar el numero
de veces que se encuentra en la lista y en que numero de lista, de iguak manera
indicar cuantos alumnos hay reprobados y cuantos reprobados
Erick Orduño*/
#include<stdio.h>
#include<stdlib.h>

int main(){

int cal[10],n,c,nv=0,aprobado=0,reprobado=0;

printf("\n\t Programa calificaciones \n");
for(n=0;n<=9;n++){  //Comienza contador de calificaciones

    printf("\n\t Ingresa calif #%i \t",n+1);
    scanf("%i",&cal[n]);        //guarda calf. en el arreglo

    while(cal[n]<0 || cal[n]>10){       //verifica calf. en el arreglo

        printf("\n\t ERROR! \n\t Ingrese de nuevo calf.#%i \t",n+1);
        scanf("%i",&cal[n]);

    }
}

    do{
        reprobado=0;
        aprobado=0;
        nv=0;
        printf("\n\t Busq. por calf. \n\t Ingrese calf. a buscar: ");
        scanf("%i",&c);

        for(n=0;n<10;n++){      //contador de cal para iniciar comparacion con calf. ingresada
            if(cal[n]>=6){
                    aprobado++;
            }
            else{
                reprobado++;
            }
        }

        for(n=0;n<10;n++){      //contador para comparacio de valores de arreglo y calf. ingresada
            if(c==cal[n]){
                nv++;
                printf("\n El alumno con #lista %i tiene:  %i",n+1,c);

            }
        }

        printf("\n\n\t Se encontro la calf. %i veces",nv);
        printf("\n\t Los estudiantes reprobados son: %i",reprobado);
        printf("\n\t Los estudiantes aprobados son: %i",aprobado);
        printf("\n\n Desea buscar otra calf.? 1=Si \t");
        scanf("%i",&n);

    }

    while(n==1);
    system("pause");
    return 0;
}
