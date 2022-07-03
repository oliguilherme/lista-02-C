/*
8) Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir
de tr�s notas. Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
a apresente a m�dia:
Op��es:
? ?a? - Aritm�tica.
? ?p? - Ponderada (pesos: 3,3,4).
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    float media_arit, media_ponderada, nota1, nota2, nota3;

    printf("\n\tM�dia Ponderda (p)\tM�dia Aritim�tica (a)\n\n");
    printf("Qual op��o de m�dia deseja realizar? ");
    scanf(" %c", &opcao);
    printf("Informe as tr�s notas: ");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    media_arit = (nota1 + nota2 + nota3) / 3.0;
    media_ponderada = (3.0 * nota1) + (3.0 * nota2) + (4.0 * nota3) / 12.0;

    switch (opcao)
    {
    case 'p':
        printf("\n\tResultado: %.2f\n\n", media_ponderada);
        break;
    case 'a':
        printf("\n\tResultado: %.2f\n\n", media_arit);
        break;
    default:
        printf("\n\tOp��o inv�lida:/\n\n");
        break;
    }

    system("pause");
    return 0;
}