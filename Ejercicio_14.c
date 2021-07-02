#include <stdlib.h>
#include <stdio.h>

//Factoriales

int main(int argc, char  *argv[]) {
  int n=atoi(argv[1]);
int Contador=0;
int suma_final=1;
int i=1;
while (Contador < n) {
suma_final=suma_final*i;
i+=1;
Contador++;
}


printf("%d\n",suma_final);


  return 0;
}
