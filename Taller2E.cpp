//NOMBRE:Dolar
//AUTOR: Luis Sebastian Urbano Luna
//FECHA: 23 de febrero del 2017
//RESUMEN: Programa para saber la cantidad de dolares que tiene un usuario

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
int lValor,lCantidad,Tdolar;
printf("Ingrese el Valor del Dolar\n");
scanf("%d",&lValor);
printf("Ingrese la Cantidad de Dolares que tiene\n");
scanf("%d",&lCantidad);
{
Tdolar = lValor*lCantidad;

printf ("El Valor del Dolar es %d\n",lValor);
printf ("La Cantidad de Dolares son %d\n",lCantidad);
printf ("El Total de Dinero en Dolares es %d\n",Tdolar);
}
return 0;
}
