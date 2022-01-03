#include <stdio.h>
#include <stdlib.h>

void main()
{
        //DEFININDO VARIAVEIS
    int a = 1, b = 10;

        //CONTANDO ATÉ 10
   while(a <= 10) {

        //IMPRIMINDO 'A' NA TELA
        printf("\n%d",  a);

        //INCREMENTO
       a = a  + 1 ;
}
    //CONTAGEM REGRESSIVA
    while(b  >=  1) {

        //IMPRIMINDO 'B' NA TELA
        printf("\n%d",  b);

        //INCREMENTO
        b = b - 1;
}
        //PAUSA O PROGRAMA
        system("pause");
}
