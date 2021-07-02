#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
int a=atoi(argv[1]);
int b=atoi(argv[2]);

int c=a;
if (a>b) {
  printf("El primer numero no puede ser mayor que el primero\n" );
  return 0;
}

while (c<=b) {
if (c%3==0) {
printf("El numero:%d es divisible por 3\n", c);

}
c++;
}





  return 0;
}
