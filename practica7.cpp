#include <conio.h>
#include <stdio.h>

int main()
{
    int dia;
    printf("\n Introduzca dia de la semana: ");
    scanf("%d", &dia);
    switch (dia)
    {
    case 1:
        printf("\n Lunes");
        break;
    case 2:
        printf("\n Martes");
        break;
    case 3:
        printf("\n Miercoles");
        break;
    case 4:
        printf("\n Jueves");
        break;
    case 5:
        printf("\n Viernes");
        break;
    case 6:
        printf("\n Sábado");
        break;
    case 7:
        printf("\n Domingo");
        break;
    default:
        printf("\n ERROR: Dia incorrecto.");
    }
    getch(); 
    return 0;
}
