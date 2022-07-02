/*
4) Crie um programa que permita ao usu�rio escolher entre fazer a convers�o de Real para D�lar ou
de D�lar para Real. Utilize como taxa de c�mbio $1 igual a R$5.30.
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

    printf("\tReal para d�lar (1)");
    printf("\tD�lar para real (2)\n");
    printf("\nOpera��o desejada:  ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
    {
        dolar = real / 5.3;
        printf("\n\tR$%.2f em d�lar �: $%.2f\n\n", real, dolar);
    }
    break;
    case 2:
    {
        real = dolar * 5.3;
        printf("\n\t$%.2f em reais �: R$%.2f\n\n", dolar, real);
    }
    break;
    default:
        printf("\n\tOpera��o inv�lida!\n\n");
    }

    return 0;
}