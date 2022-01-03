#include <stdio.h>
#include <stdlib.h>

void main()
{
    //DEFININDO VARIAVEIS
    int a  =  10;

    //CONECTIVO LÓGICO (AND) , SE UMA COMPARAÇAO FOR FALSA, NAO ENTRA NO BLOCO
    if(a > 5 && a > 15){
        printf("\n A variavel 'a' esta entre 5 e 15");
    }

    //CONECTIVO LÓGICO (OR) , SE UMA COMPARAÇAO FOR VERDADEIRA, ENTRA NO BLOCO
    if(a > 5 || a > 15){
        printf("\n A variavel 'a' eh maior que 5 ou 15");
    }

   //MISTURANDO CONECTIVOS
    if( (a > 5 &&  a< 15)   ||   a  ==  20){
        printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 120");
    }

   //PAUSA O PROGRAMA
    system("pause");

}