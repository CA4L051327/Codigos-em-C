#include <stdio.h>
#include <stdlib.h>

int main()
{
                    int idade=1, cont=0;
                    float altura=0, acmidade = 0, media;

            while (idade >0) {

                    printf ("Insira sua idade:\n");
                    scanf( "%i",   &idade);

                if (idade >0) {
                        printf ("Insira sua altura:\n");
                        scanf(  "%f",   &altura);

                    if (altura <1.20 || altura >1.70) {
                        cont++;
                        acmidade += idade;
                        media = acmidade/cont;
                        printf("A media eh %2.f\n", media);

                }

                }

            }

      return 0;
}

