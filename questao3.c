/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a;

    printf("Informe o numero: ");
    scanf("%d", &a);

    if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0)
        printf("%d ou eh divisivel por 2, ou por 3, ou por 5.\n\n", a);

    else
        printf("%d nao eh divisivel por 2, nem por 3, nem por 5\n\n");
    return 0;
}