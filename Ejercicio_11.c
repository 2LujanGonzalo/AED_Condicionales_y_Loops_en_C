#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int  main(int argc, char  *argv[]) {
  double x=atof(argv[1]);
  double y=atof(argv[2]);


  double Resultado=atan2(y,x);

  printf("El arcotangente de X:%f e Y:%f es: %.2f\n",x , y , Resultado );
//Por alguna razon lo imprime en radiales y no en grados.


  return 0;
}
