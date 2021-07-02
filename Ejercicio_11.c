#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int  main(int argc, char  *argv[]) {
  double x=atof(argv[1]);
  double y=atof(argv[2]);


  double Resultado=atan2(y,x);
Resultado= Resultado * 180 / 3.14159265359;
  printf("El arcotangente de X:%f e Y:%f es: %.2f\n",x , y , Resultado );


  return 0;
}
