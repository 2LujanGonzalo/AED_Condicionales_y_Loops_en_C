#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(int argc, char  *argv[]) {
float Numero_aureo=1.618034;
float sqrt5=sqrt(5);
int n=atoi(argv[1]);

float Fibonacci_number=0;

for (int i = 0; i < n; i++) {

Fibonacci_number= (pow(Numero_aureo,i))-(pow(1-Numero_aureo,i));
Fibonacci_number= Fibonacci_number / sqrt5 ;
printf("%.0f\n",Fibonacci_number );
}


  return 0;
}
