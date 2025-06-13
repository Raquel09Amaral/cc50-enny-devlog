#include <stdio.h>
#include <math.h>

int main(void)
{
    float valor;
    printf("Digite o valor do troco: ");
    scanf("%f", &valor);

    int centavos = round(valor * 100);

    int moedas25 = centavos / 25;
    centavos = centavos % 25;

    int moedas10 = centavos / 10;
    centavos = centavos % 10;

    int moedas5 = centavos / 5;
    centavos = centavos % 5;

    int moedas1 = centavos;

    int total_moedas = moedas25 + moedas10 + moedas5 + moedas1;

    printf("Moedas de 0.25: %i\n", moedas25);
    printf("Moedas de 0.10: %i\n", moedas10);
    printf("Moedas de 0.05: %i\n", moedas5);
    printf("Moedas de 0.01: %i\n", moedas1);
    printf("Valor devolvido: R$ %.2f\n", 
           moedas25*0.25 + moedas10*0.10 + moedas5*0.05 + moedas1*0.01);
    printf("Total de moedas: %i\n", total_moedas);
}


