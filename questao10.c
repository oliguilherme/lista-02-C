/*
Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
seguida, calcule e mostre as raízes dessa equação, em que ? = b2– 4 * a * c e ax2 + bx + c = 0 representa uma equação do segundo grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do contrário, imprima:
    • Se ? < 0, não existe real. Imprima a mensagem “Não existe raiz”.
    • Se ? = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
    • Se ? > 0, existem duas raízes reais. Imprima as raízes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, raiz, raiz2;

    printf("Informe os coeficientes da equação: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a != 0.0)
    {
        delta = pow(b, 2) - 4.0 * a * c;
        printf("? = %.1f\n", delta);
        if (delta < 0.0)
            printf("\n\nComo ? é menor que zero, não existe raiz!\n\n");
        else if (delta == 0.0)
        {
            printf("\n\nComo ? é igual a zero, há apenas uma raíz.\n\n");
            raiz = (-b + sqrt(delta)) / (2.0 * a);
            printf("Resultado: %.1f\n\n", raiz);
        }
        else
        {
            printf("\n\nComo ? é maior que zero, há duas raízes.\n\n");
            raiz = (-b + sqrt(delta)) / (2.0 * a);
            raiz2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("\n\nResultado 1: %.1f. Resultado 2: %.1f\n\n", raiz, raiz2);
        }
    }
    else
        printf("\n\nNão é equação do segundo grau!\n\n");

    system("Pause");
    return 0;
}