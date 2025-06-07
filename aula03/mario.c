#include <stdio.h>

int main(void)
{
    int altura = 8;

    // Pergunta a altura ao usuário
    do
    {
        printf("Altura (1 a 8): ");
        scanf("%d", &altura);
    }
    while (altura < 1 || altura > 8);

    for (int i = 1; i <= altura; i++)
    {
        // Imprime os espaços à esquerda
        for (int espaco = 0; espaco < altura - i; espaco++)
        {
            printf(" ");
        }

        // Imprime os hashes
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        // Nova linha
        printf("\n");
    }

    return 0;
}

