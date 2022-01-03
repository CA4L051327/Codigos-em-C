#include <stdio.h>
#include <stdlib.h>

int main() {
    float sal = 1000, aumento = 1.5;
    int ano;
    for(ano = 2016; ano <= 2019; ano++) {
        sal = sal + sal*aumento/100.0;
        aumento *= 2;
    }

    printf("O salario atual eh: %.2f\n", sal);
    return 0;
}
