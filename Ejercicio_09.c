//El numero mayor

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
//printf("Cantidad de argumentos :%d\n",argc );
int max=0;

for (int i = 0; i < argc; i++) {
if (atoi(argv[i])>max) {
max= atoi(argv[i]);
}
}

printf("El maximo es :%d\n",max );

//if (a>b && a>c ) {
//printf("El mayor es: %d\n",a );

//} else if (b>a && b>c) {
//printf("El mayor es: %d\n",b );
//} else {
//printf("El mayor es: %d\n",c );
//}


return 0;
}
