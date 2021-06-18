#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  if (a==0) {
  printf("ERR. el primer argumento: a. No puede ser cero\n");
  return 0;
  }
  double discriminant = b * b - 4.0 * a * c;
  if (discriminant < 0) {
  printf("Err. discriminant menor a 0 shutting down\n");
  return 0;
  }

  double root = sqrt(discriminant);

  printf("x1: %.2f\n", (-b + root) / (2.0 * a));
  printf("x2: %.2f\n", (-b - root) / (2.0 * a));
  return 0;
}
