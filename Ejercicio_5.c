//numeros del 1000 al 2000

#include <stdlib.h>
#include <stdio.h>

int main(void){

int i=1000;

while (i<2000) {
printf("%d ",i);
i++;
if (i%5==0) {
  printf("\n");
}
}


 return 0;
}
