#include <stdio.h>
#include <stdlib.h>

void main(){

            int a  =  5, b  =  10, c  =  15;

            //MAIOR
            if(a > 2){
            printf("\n %d eh maior que 2"  ,  a);
            }

            //MAIOR OU IGUAL
            if(c   >=  b){
                printf("\n %d eh maior ou igual que %d",   c,   b);
            }
            //MENOR
            if(a  <  10){
                printf("\n %d eh menor que 10"  ,  a);
            }
            //MENOR OU IGUAL
            if(a  <=  10){
                printf("\n %d eh menor ou igual a 10"  ,  a);
            }
            //DIFERENTE
            if(c  !=  10){
                printf("\n %d nao eh 10"  ,  c);
            }

            system("pause");
}


