#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int c=atoi(argv[3]);

if (a>b && a>c ) {
printf("El mayor es: %d\n",a );

} else if (b>a && b>c) {
printf("El mayor es: %d\n",b );
} else {
printf("El mayor es: %d\n",c );
}




  return 0;
}
