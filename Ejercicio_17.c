//si los numeros son divisibles por n igual a 3

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int n=atoi(argv[1]);

  int i=1;

while(i!=101) {
  if (i%n==3) {
    printf("El numero:%d es divisible por %d\n",i, n);
  } else {
    printf("El numero: %d NO es divisible por: %d\n",i, n );
  }

i++;
}

  return 0;
}
