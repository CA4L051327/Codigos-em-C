#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
   //RESPONSAVEL POR AUMENTAR O (RAND) DE FORMA DIFERENTE
   srand(   (unsigned)  time (NULL) ) ;

   //VARIAVEL QUE RECEBE O RESTO DA DIVISAO DO NUMERO POR 3 (ALEATORIO ENTRE 0 E 2)
    int aleatorio = rand () %3;

   //VARIAVEL QUE RECEBE O RESTO DA DIVISAO DO NUMERO POR 5 (ALEATORIO ENTRE 1 E 5)
    int aleatorioSegundo = (rand() % 5)  +  1;

    //IMPRIME O VALOR
    printf("%d", aleatorioSegundo);

    //PAUSA O PROGRAMA APOS EXECUTAR
        system("pause");
}
