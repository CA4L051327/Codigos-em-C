#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome [10];

    printf("Digite seu nome: \n");
    scanf("%s", nome);
    printf("Digite sua idade: \n");
    scanf("%d", idade);
    printf("A idade do (a) %s eh d", nome, idade);

    return 0;
}
