//como el anterior pero mejorado
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int max  =-999999;
  int suma =0;
  int min  =9999999;
  for (int i = 1; i < argc; i++) {
    suma+=atoi(argv[i]);
    if (atoi(argv[i])>max) {
      max= atoi(argv[i]);
  // min = max;
    }
    if (atoi(argv[i])<min) {
      min = atoi(argv[i]);
    }
  }
  double promedio= suma / (argc - 1);
  printf("Promedio:%.2f\n",promedio);
  printf("El maximo es :%d\n",max );
  printf("El minino es :%d\n", min);
  return 0;
}
