#include <stdio.h>

int main()
{
    int i;
    printf("Los multiplos de 3 entre 1 y 100 son: ");
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
