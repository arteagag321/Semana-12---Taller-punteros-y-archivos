#include <stdio.h>

struct cilindro {
  float diametro;
  float carrera;
};

struct motor {
  int identificador;
  struct cilindro cilindro;
  int num_cilindros;
  float cilindrada;
};

int main() {
  struct motor motorl;

  printf("Introduce el identificador\n");
  scanf("%d", &motorl.identificador);

  printf("Introduce el diametro del cilindro (mm)\n");
  scanf("%f", &motorl.cilindro.diametro);

  printf("Introduce la carrera del cilindro (mm)\n");
  scanf("%f", &motorl.cilindro.carrera);

  printf("Introduce el numero de cilindros\n");
  scanf("%d", &motorl.num_cilindros);



  printf("Identificador: %d\n", motorl.identificador);
  printf("Cilindrada: %.2f cm^3\n", motorl.cilindrada);
  printf("Carrera (mm): %.2f\n", motorl.cilindro.carrera);
  printf("No cilindros: %d\n", motorl.num_cilindros);
  printf("Cilindrada: %.2f\n", motorl.cilindrada);

  return 0;
}
