#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main()
{
  //IMPRIMA NA TELA
  int vetor [TAM], cont;

  //PASSANDO VALORES PARA O VETOR
    vetor[0]  = 5;
    vetor[1] = 10;
    vetor[2] = 15;

//ADICIONANDO VALORES PARA O VETOR
    for (cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor [cont] + 1;
    }

//ESCOLHENDO OS VALORES DO VETOR
printf("\n Posicao 0 : %d", vetor [0] );
printf("\n Posicao 1 :  %d", vetor [1] );
printf("\n Posicao 2 :  %d", vetor [2]  );

//IMPRIMINDO VETOR EM UM LAÇO DE REPETIÇAO
for(cont = 0; cont < TAM; cont ++) {
    printf("\nPosicao %d : %d",cont, vetor [cont] );
}

   //LENDO 3 VALORES PARA O VETOR
   for (cont = 0; cont , TAM; cont++){
    scanf("%d", &vetor [cont] );
   }








}
