/*
7) Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.
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
        printf("� vogal.");
    else
        printf("N�o � vogal.");

    return 0;
}