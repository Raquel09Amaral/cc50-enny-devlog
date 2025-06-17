#include <stdio.h>
#include <math.h>

int main(void)
{

    long numero_cartao;
    printf("Digite o número do cartão: ");
    scanf("%ld", &numero_cartao);
    
long temp = numero_cartao;
    int soma = 0;
    int digito;
    int contador = 0;

    while (temp > 0)
    {
        digito = temp % 10;

        // Se a posição for par (contando de trás pra frente, começando do 0)
        if (contador % 2 == 0)
        {
            soma += digito;
        }
        else
        {
            int dobro = digito * 2;
            soma += (dobro / 10) + (dobro % 10); // soma os dígitos do resultado
        }

        temp /= 10;
        contador++;
    }

    // Verifica se a soma final é múltipla de 10
    if (soma % 10 == 0)
    {
        // Extrair os dois primeiros dígitos
        long inicio = numero_cartao;
        while (inicio >= 100)
        {
            inicio /= 10;
        }

        // Verificar tipo de cartão
        if ((inicio == 34 || inicio == 37) && contador == 15)
        {
            printf("AMEX\n");
        }
        else if (inicio >= 51 && inicio <= 55 && contador == 16)
        {
            printf("MASTERCARD\n");
        }
        else if ((inicio / 10 == 4) && (contador == 13 || contador == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}
