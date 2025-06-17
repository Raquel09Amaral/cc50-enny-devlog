#include <stdio.h>

int main(void)
{
    int altura;

    do
    {
        printf("Altura (1 a 8): ");
        scanf("%d", &altura);
    }
    while (altura < 1 || altura > 8);

    for (int i = 1; i <= altura; i++)
    {
        for (int espaco = 0; espaco < altura - i; espaco++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        printf("  "); // gap entre as torres

        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
