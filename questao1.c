//  1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, maior, menor;

    printf("Digite três números inteiros: ");
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

    printf("O maior número é %d e o menor número é %d.", maior, menor);

    return 0;
}