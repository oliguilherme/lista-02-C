/*
5) O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

                                        IMC                                         Interpretação
                                Menor que 18,5                                Abaixo do peso
                                Entre 18,5 e menor que 25               Peso normal
                                Entre 25 e menor que 30                  Sobrepeso
                                Entre 30 e menor que 35                  Obesidade grau 1
                                Entre 35 e menor que 40                  Obesidade grau 2
                                Maior ou igual a 40                          Obesidade grau 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso, h, imc;

    printf("Informe peso (em kg) e altura (em metros), respectivamente: ");
    scanf("%f%f", &peso, &h);

    imc = peso / pow(h, 2.0);

    if (imc < 18.5)
        printf("Abaixo do peso!");
    else if (18.5 <= imc && imc < 25.0)
        printf("Peso normal!");
    else if (25.0 <= imc && imc < 30.0)
        printf("Sobrepeso!");
    else if (30.0 <= imc && imc < 35.0)
        printf("Obesidade grau 1!");
    else if (35.0 <= imc && imc < 40.0)
        printf("Obesidade grau 1");
    else
        printf("Obesidade grau 3!");

    return 0;
}
