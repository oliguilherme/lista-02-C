/*
6) Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no
calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem ?M�s
Inv�lido?.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Informe um n�mero para saber seu m�s relacionado:  ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Janeiro.\n");
        break;
    case 2:
        printf("Fevereiro.\n");
        break;
    case 3:
        printf("Mar�o.\n");
        break;
    case 4:
        printf("Abril.\n");
        break;
    case 5:
        printf("Maio.\n");
        break;
    case 6:
        printf("Junho.\n");
        break;
    case 7:
        printf("Julho.\n");
        break;
    case 8:
        printf("Agosto.\n");
        break;
    case 9:
        printf("Setembro.\n");
        break;
    case 10:
        printf("Outubro.\n");
        break;
    case 11:
        printf("Novembro.\n");
        break;
    case 12:
        printf("Dezembro.\n");
        break;
    default:
        printf("M�s inv�lido.\n");
    }
    return 0;
}