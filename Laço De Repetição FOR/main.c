#include <stdio.h>
#include <stdlib.h>

void main()
{
    //DEFININDO VARIAVEIS
    int cont;

            //TABUADA DO 5
    for(cont  =  1;  cont  <=  10;  cont++){
        printf("\n 5  X  %d  =  %d", cont, 5  *  cont);
}
        //CONTANDO 2 EM 2
        for(cont  =  0 ;  cont  <=  10;  cont  =  cont  +  2){
        printf("\n%d", cont);
}

        //CONTAGEM REGRESSIVA
           for(cont  =  10 ;  cont  > 0;  cont  --){
        printf("\n%d", cont);

        //PAUSA O PROGRAMA
        system("pause");

}

}
