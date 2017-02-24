//NOMBRE:Cirferencia_de_un_circulo
//AUTOR: Luis Sebastian Urbano Luna
//FECHA: 23 de febrero de 2017
//RESUMEN: Programa para saber el area,diametro y longitud de una circuferencia tomando la variable dada por el usuario

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
float lArea,lDiametro,longitudC;
float radio;
printf("Ingrese el valor de la circuferencia\n");
scanf("%f",&radio);
{
lArea =((3.14*radio)*radio);
lDiametro=2*radio;
longitudC = ((2*3.14)*radio);

printf ("El Radio de la circunferencia es %f\n",radio);
printf ("El Area de la circunferencia es %f\n",lArea);
printf ("El Diametro de la circunferencia es %f\n",lDiametro);
printf ("lA Longitud de la circunferencia es %f\n",longitudC);
}
return 0;
}
