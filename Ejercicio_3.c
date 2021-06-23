#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void){
srand(time(NULL));

int dado=(rand()%6)+1;
//if (dado==1||2||3||4||5) {
//printf("El resultado fue 6\n");
//return 0;
//}
printf("El resultado fue %d\n", dado);




  return 0;
}
