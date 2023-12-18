#include <stdio.h>
#include <stdlib.h>

/*
Programa que pide un número entero entre 1 y 10
y guarda en un fichero de texto de nombre tabla-n.txt la tabla de multiplicar de ese número,
donde n es el número introducido
*/

int main() {

  int numero;

  printf("Introduce un numero: \n");
  scanf("%d", &numero);

  FILE *f;
  f = fopen("tabla.txt", "w");

  for (int i = 0; i <= 10; i++) {
    fprintf(f, "%d * %d = %d\n", numero, i, numero * i);
  }

  fclose(f);

  return 0;
}
