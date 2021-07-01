#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void){
srand(time(NULL));

int dado=(rand()%8)+1;

 if (dado >= 6) {
printf("El resultado fue 6\n");
return 0;
 }

printf("El resultado fue %d\n", dado);




  return 0;
}
