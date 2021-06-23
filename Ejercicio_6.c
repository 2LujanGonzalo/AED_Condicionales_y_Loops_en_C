#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
int main(int argc, char  *argv[]) {

int n=atof(argv[1]);

if (n<1) {

  printf("Numero ingresado no puede ser menor a uno\n");

  return 0;

}

srand(time(NULL));
int random=0;
int Contador=0;
while (Contador<n){
  random=rand()%101;
printf("%d\n",random );

Contador ++;
}
int contador2={random};

int contador3=0;
int i=0;
while (contador3<n) {
  printf("%d\n ",contador2[i]);
  i +1;
contador3 ++;
}

  return 0;

}
