//Da vuelta el numero ingresado

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
int a = atoi(argv[1]);


while(a!=0){
printf("%d", a%10 );
a/=10;
}
printf("\n");
  return 0;
}
