#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int c=atoi(argv[3]);


if (a==b && a==c && b==c) {
  printf("Numeros iguales, cambialos\n" );
  return 0;
}


if (a>b && a>c ) {
printf("El mayor es: %d\n",a );

} else if (b>a && b>c) {
printf("El mayor es: %d\n",b );
} else {
printf("El mayor es: %d\n",c );
}

if (a<b && a<c ) {
printf("El menor es: %d\n",a );

} else if (b<a && b<c) {
printf("El menor es: %d\n",b );
} else {
printf("El menor es: %d\n",c );
}

 int promedio=a+b+c;
 promedio=promedio / 3;
 printf("%d\n", promedio);

return 0;
}
