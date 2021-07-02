//Cuadrado del numero hasta el ingresado

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int n=atoi(argv[1]);
for (int i = 1; i <=n ; i++) {
  printf("%d\n",i );
  printf("Cuadrado de %d es %d\n",i, (i*i) );
}

  return 0;
}
