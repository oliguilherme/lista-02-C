//  1) Escreva um programa em C que leia tr�s valores e apresente qual � o maior e qual � o menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, maior, menor;

    printf("Digite tr�s n�meros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3)
    {
        maior = num1;
        if (num2 > num3)
            menor = num3;
        if (num3 > num2)
            menor = num2;
    }
    else if (num2 > num1 && num2 > num3)
    {
        maior = num2;
        if (num1 > num3)
            menor = num3;
        if (num3 > num1)
            menor = num1;
    }
    else if (num3 > num1 && num3 > num2)
    {
        maior = num3;
        if (num1 > num2)
            menor = num2;
        if (num2 > num1)
            menor = num1;
    }

    printf("O maior n�mero � %d e o menor n�mero � %d.", maior, menor);

    return 0;
}