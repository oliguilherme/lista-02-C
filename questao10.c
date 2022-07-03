/*
Fa�a um programa que leia os coeficientes de uma equa��o do segundo grau. Em
seguida, calcule e mostre as ra�zes dessa equa��o, em que ? = b2� 4 * a * c e ax2 + bx + c = 0 representa uma equa��o do segundo grau. A vari�vel a tem de ser diferente de zero. Caso seja igual, imprima a mensagem �N�o � equa��o de segundo grau�. Do contr�rio, imprima:
    � Se ? < 0, n�o existe real. Imprima a mensagem �N�o existe raiz�.
    � Se ? = 0 existe uma raiz real. Imprima a raiz e a mensagem �Raiz �nica�.
    � Se ? > 0, existem duas ra�zes reais. Imprima as ra�zes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, raiz, raiz2;

    printf("Informe os coeficientes da equa��o: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a != 0.0)
    {
        delta = pow(b, 2) - 4.0 * a * c;
        printf("? = %.1f\n", delta);
        if (delta < 0.0)
            printf("\n\nComo ? � menor que zero, n�o existe raiz!\n\n");
        else if (delta == 0.0)
        {
            printf("\n\nComo ? � igual a zero, h� apenas uma ra�z.\n\n");
            raiz = (-b + sqrt(delta)) / (2.0 * a);
            printf("Resultado: %.1f\n\n", raiz);
        }
        else
        {
            printf("\n\nComo ? � maior que zero, h� duas ra�zes.\n\n");
            raiz = (-b + sqrt(delta)) / (2.0 * a);
            raiz2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("\n\nResultado 1: %.1f. Resultado 2: %.1f\n\n", raiz, raiz2);
        }
    }
    else
        printf("\n\nN�o � equa��o do segundo grau!\n\n");

    system("Pause");
    return 0;
}