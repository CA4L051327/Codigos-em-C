#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
        //DEFININDO VARIAVEIS
        bool a = true, b = false;

        // SE A FOR VERDADEIRO
        if(a){
                printf("\n A eh verdadeiro");
        }

        //COMPARANDO O B
        if(b){
            printf("\n B eh verdadeiro");
        } else {
        printf("\n B eh falso");
        }

        //COMPARANDO UMA FALSIDADE
            if(!b){
                printf("\n B eh falso");
            }

            //PAUSA O PROGRAMA APOS EXECUTAR
            system("pause");

}
