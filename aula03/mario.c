#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // # = i
    // espaço = altura - i

    int altura = 8; // Altura da escada

// Pergunta a altura ao usuário
    do
    {
        printf("Altura (1 a 8): ");
        scanf("%d", &altura);
    }
    while (altura < 1 || altura > 8); // Garante que a altura esteja entre 1 e 8

    for (int i = 1; i <= altura; i++)
    {
        // Primeiro, imprimimos os ESPAÇOS
        for (int espaco = 0; espaco < altura - i; espaco++)
        {
            printf(" ");
        }

        // Agora imprimimos os "hashes" (#)
        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        // Pula para a próxima linha
        printf("\n");
    }

    return 0;
}

