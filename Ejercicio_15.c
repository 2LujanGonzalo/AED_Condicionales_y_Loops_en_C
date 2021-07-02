#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int a=atof(argv[1]);
  int b=atof(argv[2]);
 int Dividendo=a;
 int Divisor=b;
int Division_resto=1;
int Division_Cociente=Dividendo/Divisor;

while (Division_resto!=0) {
Division_resto=Dividendo%Divisor;

Dividendo=Divisor;
Divisor=Division_resto;
}
printf("%d\n", Dividendo);

  return 0;
}
