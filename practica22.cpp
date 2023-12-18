#include <stdio.h>

struct entrada_museo {
    int hora;
    int minuto;
    int num_asistentes;
    float precio_total;
};

float calcular_precio(int edad) {
    if (edad < 6) {
        return 0;
    } else if (edad >= 6 && edad <= 15) {
        return 5;
    } else if ((edad >= 16 && edad <= 26) || edad >= 65) {
        return 8;
    } else {
        return 10;
    }
}

int main() {
    int num_grupos = 0;
    char respuesta = 'S';
    float precio_grupo = 0;
    float descuento = 0;
    float precio_total = 0;
    int i, j;

    while (respuesta == 'S') {
        num_grupos++;
        printf("Grupo %d:\n", num_grupos);

        struct entrada_museo entrada;
        printf("Hora de entrada (formato 24 horas): ");
        scanf("%d:%d", &entrada.hora, &entrada.minuto);

        printf("Número de asistentes: ");
        scanf("%d", &entrada.num_asistentes);

        for (i = 0; i < entrada.num_asistentes; i++) {
            int edad;
            printf("Edad del asistente %d: ", i + 1);
            scanf("%d", &edad);
            precio_grupo += calcular_precio(edad);
        }

        if (entrada.num_asistentes >= 5) {
            descuento = precio_grupo * 0.1;
        }

        precio_total = precio_grupo - descuento;
        entrada.precio_total = precio_total;

        printf("Precio total para el grupo: %.2f euros\n", precio_total);

        printf("¿Desea acceder al museo con un nuevo grupo? (S/N): ");
        scanf(" %c", &respuesta);
    }

    printf("Gracias por visitar el museo. ¡Hasta pronto!\n");

    return 0;
}
