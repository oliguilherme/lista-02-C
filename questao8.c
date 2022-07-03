/*
8) Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
? ?a? - Aritmética.
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

    printf("\n\tMédia Ponderda (p)\tMédia Aritimética (a)\n\n");
    printf("Qual opção de média deseja realizar? ");
    scanf(" %c", &opcao);
    printf("Informe as três notas: ");
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
        printf("\n\tOpção inválida:/\n\n");
        break;
    }

    system("pause");
    return 0;
}