/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, c, x, y, cont_negativo = 0, cont_positivo = 0;

    printf("Primeiro valor: ");
    scanf("%d", &a);
    if (a < 0)
        cont_negativo++;
    if (a > 0)
        cont_positivo++;

    printf("Segundo valor: ");
    scanf("%d", &b);
    if (b < 0)
        cont_negativo++;
    if (b > 0)
        cont_positivo++;

    printf("Terceiro valor: ");
    scanf("%d", &c);
    if (c < 0)
        cont_negativo++;
    if (c > 0)
        cont_positivo++;

    printf("Quarto valor: ");
    scanf("%d", &x);
    if (x < 0)
        cont_negativo++;
    if (x > 0)
        cont_positivo++;

    printf("Quinto valor: ");
    scanf("%d", &y);
    if (y < 0)
        cont_negativo++;
    if (y > 0)
        cont_positivo++;

    printf("Ao todo sao %d numeros positivos e %d numeros negativos", cont_positivo, cont_negativo);

    return 0;
}