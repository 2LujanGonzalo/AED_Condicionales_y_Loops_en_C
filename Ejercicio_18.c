//Donde esta el vector

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
  int x=atoi(argv[1]);
  int y=atoi(argv[2]);

    if (x>0 && y>0) {
      printf("El vector esta en el I cuadrante\n");
    } else if (x<0 && y>0) {
     printf("El vector esta en el II cuadrante\n");
   }  else if (x<0 && y<0) {
    printf("El vector esta en el III cuadrante\n");
    } else if (x>0 && y<0) {
     printf("El vector esta en el IV cuadrante\n");
        }

  return 0;
}
