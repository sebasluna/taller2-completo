//NOMBRE:Triangulo
//AUTOR: Luis Sebastian Urbano Luna
//FECHA: 23 de febrero del 2017
//RESUMEN: Programa para saber el area de un triangulo tomando la variable dada por el usuario

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
float lArea;
float base,altura;
printf("Ingrese la Base del triangulo\n");
scanf("%f",& base);
printf("Ingrese la Altura del triangulo\n");
scanf("%f",& altura);
    {
lArea =((base*altura)/2);

printf ("La base del triangulo mide %f centimetros y la altura mide %f centimetros\n",base,altura);
printf ("El Area del triangulo es %f\n",lArea);
}
return 0;
}
