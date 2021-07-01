#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
int contador = 0;
int n=1;
int power = 1;
 int i = 0;
 while (contador < 7 ) {
   printf("2^%d\t%d\n", i, power);
   power *= 2;
   n *= 2;
   i++;
   contador ++;
 }

  return 0;
}
