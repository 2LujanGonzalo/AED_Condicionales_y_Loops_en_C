//Promedio de numeros random

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char  *argv[]) {

int n=atoi(argv[1]);

if (n<1) {

  printf("Numero ingresado no puede ser menor a uno\n");

  return 0;

}

srand(time(NULL));

int random=0;

int Contador=0;

int i=0;

int suma = 0;

while (Contador<n){
  random=rand()%101;
printf("%d\n",random );


suma += random;

Contador ++;
}
double promedio= suma / (double) n;

printf("Promedio:%.2f\n", promedio);

  return 0;

}
