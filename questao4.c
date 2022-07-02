/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int escolha;
    float real, dolar;

    printf("R$");
    scanf("%f", &real);
    printf("$");
    scanf("%f", &dolar);

    printf("\tReal para dólar (1)");
    printf("\tDólar para real (2)\n");
    printf("\nOperação desejada:  ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    {
        dolar = real / 5.3;
        printf("\n\tR$%.2f em dólar é: $%.2f\n\n", real, dolar);
    }
    break;
    case 2:
    {
        real = dolar * 5.3;
        printf("\n\t$%.2f em reais é: R$%.2f\n\n", dolar, real);
    }
    break;
    default:
        printf("\n\tOperação inválida!\n\n");
    }

    return 0;
}