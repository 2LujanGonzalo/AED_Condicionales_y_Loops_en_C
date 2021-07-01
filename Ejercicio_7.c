#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
int contador = 0;
int n=1;


 while (contador < 7 ) {
printf("ln:%.2f\t n:%d\t n*ln(n):%.2f\t n²:%d\t n³:%.2f\t 2^n:%.2f\t\n",log(n), n, n*log(n), n*n, pow(n,3), pow(2,n) );
   n *= 2;
   contador ++;
 }

  return 0;
}
