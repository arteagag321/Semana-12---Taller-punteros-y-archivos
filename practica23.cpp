#include <stdio.h>
#include <stdlib.h>
struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

int main(){
    struct producto *prod;

    prod = (struct producto*)malloc(sizeof(struct producto));

    printf("Introduce el codigo\n");
    scanf("%d", &prod->codigo);
    printf("Introduce la descripción\n");
    scanf("%s", prod->descripcion);
    printf("Introduce el precio\n");
    scanf("%f", &prod->precio);

    printf("Codigo del artículo: %d\n", prod->codigo);
    printf("Descripcio %s\n", prod->descripcion);
    printf("Precio: €%f\n", prod->precio);

   free(prod);
   prod = NULL;
}
