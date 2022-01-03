#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void main()
{
    printf("%d", TAM);

    int i;

    //CONSTANTE ATÉ 10
    for(i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }

    //PAUSA O PROGRAMA
    system("pause");

}
