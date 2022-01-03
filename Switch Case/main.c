#include <stdio.h>
#include <stdlib.h>

int main()
{
   //DEFININDO VARIAVEIS
                int a = 2;
                char b = 'x';

    //CODIGO EXEMPLO COM (IF)
    if (a == 1){
            printf("\n Opcao escolhida: 1");
        }else if (a == 2){
            printf("\n Opcao escolhida: 2");
        }else if (a == 3){
            printf("\n Opcao escolhida: 3");
        }else{
            printf("\n Opcao invalida");
}

    //O MESMO CODIGO DE CIMA ADAPTADO AO (SWITCH)
            switch(a){
            case 1:
            printf("\n Opcao escolhida: 1");
            case 2:
            printf("\n Opcao escolhida: 2");
            case 3:
            printf("\n Opcao escolhida: 3");
            default:
            printf("\n Opcao invalida");
            break;
}

    //SWITCH COM (CHAR)
            switch (b){
            case 'x' :
                printf("\n A letra eh x");
                break;
            default:
                printf("\n Opcao invalida ");
}

     //PAUSA O PROGRAMA
            system("pause");
}
