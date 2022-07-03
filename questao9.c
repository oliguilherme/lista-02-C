/*
10) Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem ?Não
formam um triângulo?.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    char opcao;

    printf("Informe os três lados do triângulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\n\tAs medidas formam um triângulo!\n\n");
        printf("Deseja saber mais informações? (s/n): ");
        scanf(" %c", &opcao);
        if (opcao == 's')
            if (a == b && a == c)
                printf("\n\tOs valores formam um triângulo equilátero!\n\n");
            else if (a != b && a != c && b != c)
                printf("\n\tOs valores formam um triângulo escaleno!\n\n");
            else
                printf("\n\tOs valores formam um triângulo isósceles!\n\n");
        else
            printf("\nFinalizando processo...\n\n");
    }
    else
        printf("\n\tAs medidas não formam um triângulo!\n\n");

    system("pause");
    return 0;
}