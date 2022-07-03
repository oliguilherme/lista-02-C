/*
7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.
*/

#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char letra;
    printf("Digite a letra: ");
    letra = getchar();

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("É vogal.");
    else
        printf("Não é vogal.");

    return 0;
}