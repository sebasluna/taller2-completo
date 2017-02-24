//NOMBRE:Salario
//AUTOR: Luis Sebastian Urbano Luna
//FECHA: 23 de febrero del 2017
//RESUMEN: Programa para saber el salario de un empleado mas las horas extras

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int Noc,Doc,Festi;
int hora1,hora2,hora3,hora4;
int Diurnas,Nocturnas,Dominicales,Festivos,Tsalario;

printf("Ingrese las horas que trabajo en el dia\n");
scanf("%d",& hora1);
printf("Ingrese las horas que trabajo en la noche\n");
scanf("%d",& hora2);
printf("Ingrese las horas de trabajo dominicales\n");
scanf("%d",& hora3);
printf("Ingrese las horas que trabajo los festivos\n");
scanf("%d",& hora4);
    {
        Diurnas = 2500*hora1;
Noc = (2500*0.35);
        Nocturnas = ((2500+Noc)*hora2);
Doc = (2500*0.50);
        Dominicales = ((2500+Doc)*hora3);
Festi = (2500*0.75);
        Festivos = ((2500+Festi)*hora4);
Tsalario = (((Diurnas+Nocturnas)+Dominicales)+Festivos);

printf ("El valor de las horas diurnas es: %d\n",Diurnas);
printf ("El valor de las horas nocturnas es: %d\n",Nocturnas);
printf ("El valor de las horas dominicales es: %d\n",Dominicales);
printf ("El valor de las horas festivas es: %d\n",Festivos);
printf ("Su salario total es: %d\n",Tsalario);
}
return 0;
}
