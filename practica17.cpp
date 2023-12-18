#include <stdio.h>
#include <stdlib.h>

int main() {
  float vector[5];

  for (int i = 0; i < 5; i++) {
    printf("Introduce un número real\n");
    scanf("%f", &vector[i]);
  }

  float *puntero = vector;
  float media = 0;

  for (int i = 0; i < 5; i++) {
    media += *(puntero + i) / 5;
  }

  printf("La media de los valores del vector es %.2f\n", media);

  return 0;
}
