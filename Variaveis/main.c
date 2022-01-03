#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void main()
{
    //DEFININDO VARIAVEIS
                int a;
                float b;
                char c;
                bool d;

    //PASSANDO VALORES
                a = 5;
                b = 1.70;
                c  = 'a';
                d = true;       // TRUE = 1, FALSE = 0

    //ESCREVENDO NA TELA
printf("\n O valor de a = %d",  a);
printf("\n O valor de b = %.2f",  b);
printf("\n O valor de c = %c\n",  c);
printf("\n O valor de d = %d",  d);

     // LENDO VALORES
scanf("%d" , &a);
scanf("%f" , &b);
scanf("  %c" , &c);
scanf("%d" , &d);

    //ESCREVENDO NA TELA
printf("\n O valor de a = %d",  a);
printf("\n O valor de b = %.2f",  b);
printf("\n O valor de c = %c\n",  c);
printf("\n O valor de d = %d",  d);

    //PAUSANDO
system("pause");
}
