#include <stdio.h>
#include <stdlib.h>

void main()
{
        //DEFININDO VARIAVEIS
        int a  =  5 ;
        float b  =  2.5 ;
        char c  =  ' x ' ;

        //CONDICIONAL SIMPLES
        if(a == 5) {
        printf("\n A variavel  a  =  5");
    }
        if(b== 2.5) {
        printf("\n A variavel  b  =  2.5");
    }
        if(c == '  x  ') {
        printf("\n A variavel  c  = letra  x");
    }

        //NUMERO PAR OU IMPAR
    if (a  %  2  ==  1) {
        printf("\n   A variavel a eh impar");
    } else{
        printf("\n   A variavel a eh par");
    }

     //PAUSA O PROGRAMA
    system("pause");
}
