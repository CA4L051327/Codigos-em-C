#include <stdio.h>
#include <stdlib.h>

void main()
{
    //DEFININDO VARIAVEIS
    int opcao;

    //CONFERE E VALIDA A OPCAO
        while(opcao <  1  ||  opcao  >  3){

    //INTERFACE DE MENU
        printf("Escolha uma opcao:");
        printf("\n1 - opcao 1");
        printf("\n2 - opcao 2");
        printf("\n3 - opcao 3");

    //LENDO  A OPCAO
    scanf("%d. &opcao");

    //RESULTADO DE ACORDO COM A OPÇAO ESCOLHIDA
        switch(opcao) {
    case 1:
            printf("\n Opcao 1 escolhida");
            break;
    case 2:
            printf("\n Opcao 2 escolhida");
            break;
     case 3:
            printf("\n Opcao 3 escolhida");
            break;
    default:
        printf("\n Opcao invalida");
            break;
}

}

}
