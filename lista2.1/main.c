#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia um número qualquer. Se positivo, escreva na
tela: "<numero>, positivo". Se negativo, escreva na tela: "<numero>,
negativo". Se igual à zero, escreva na tela: "<numero>, nulo".*/
/*desenvolvedora: @fischerxp*/

int main()
{
    float n1;
    printf("digite um numero: ");
    scanf("%f",&n1);
    if(n1>0)
        printf("%2.f, positivo",n1);
    else
    if(n1<0)
        printf("%2.f, negativo",n1);
    else
        printf("%2.f, nulo",n1);
    return 0;
}
