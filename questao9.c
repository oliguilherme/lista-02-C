/*
10) Fa�a um programa que, dado tr�s valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um tri�ngulo. Caso positivo, seu programa deve informar tamb�m se o tri�ngulo �
equil�tero, is�sceles ou escaleno. Caso contr�rio, seu programa deve escrever a mensagem ?N�o
formam um tri�ngulo?.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    char opcao;

    printf("Informe os tr�s lados do tri�ngulo: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("\n\tAs medidas formam um tri�ngulo!\n\n");
        printf("Deseja saber mais informa��es? (s/n): ");
        scanf(" %c", &opcao);
        if (opcao == 's')
            if (a == b && a == c)
                printf("\n\tOs valores formam um tri�ngulo equil�tero!\n\n");
            else if (a != b && a != c && b != c)
                printf("\n\tOs valores formam um tri�ngulo escaleno!\n\n");
            else
                printf("\n\tOs valores formam um tri�ngulo is�sceles!\n\n");
        else
            printf("\nFinalizando processo...\n\n");
    }
    else
        printf("\n\tAs medidas n�o formam um tri�ngulo!\n\n");

    system("pause");
    return 0;
}