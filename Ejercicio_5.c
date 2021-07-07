//numeros del 1000 al 2000

#include <stdlib.h>
#include <stdio.h>

int main(void){

int i=1001;//Si pongo i=1000 cuando lo ejecute saldrá :1000 1001 1002 1003 1004 1005
                                                    // 1006 1007 1008 1009 1010 despues sigue bien.


while (i<2000) {
printf("%d ",i++);
if (i%10==0||i%10==5) {
  printf("%d\n",i++ );
}
}


 return 0;
}
