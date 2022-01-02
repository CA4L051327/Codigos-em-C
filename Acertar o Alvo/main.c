#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ACELER 9.81

int main()
{
    //declaração das variaveis
    float alt_max, temp_traj, alc_hor, v_ini, ang_in, dist, tam_alvo;
    double ang_in_rad;

    //entrada de dados, atraves do comando do..while para fazer a validação da velocidade inicial e angulo de inclinação
    do
    {
        printf("Velocidade inicial (m/s): \n");
        scanf("%f", &v_ini);
        if(v_ini <= 0)
        {
            printf("\nVelocidade invalida! Digite novamente: \n\n");
        }
    }
    while(v_ini <= 0);

    do
    {
        printf("\nAngulo de inclinacao do canhao (em graus): \n");
        scanf("%f", &ang_in);

        if(ang_in <= 0 || ang_in >= 90)
        {
            printf("\nAngulo invalido! Digite novamente: \n\n");
        }
    }
    while(ang_in <= 0 || ang_in >= 90);

    //processamento dos dados para encontrar a altura maxima, alcance maximo e tempo da trajetoria
    ang_in_rad = (ang_in*M_PI)/180;
    alt_max = pow(v_ini, 2)*pow(sin(ang_in_rad), 2)/(2*ACELER);
    temp_traj = (2*v_ini*sin(ang_in_rad))/ACELER;
    alc_hor = (2*pow(v_ini, 2))*(cos(ang_in_rad)*sin(ang_in_rad))/ACELER;

    //entrada de dados, atraves do comando do..while para fazer a validação da distancia e do tamanho do alvo
    do
    {
        printf("\nDistancia em que se encontra o alvo (em metros): \n");
        scanf("%f", &dist);
        if(dist <= 0){
            printf("\nDistancia invalida! Digite novamente: \n\n");
        }

    }
    while(dist <= 0);

    do
    {
        printf("\nTamanho do alvo (em metros): \n");
        scanf("%f", &tam_alvo);
        if(tam_alvo < 20 || tam_alvo > 50){
            printf("\nTamanho invalido! Digite novamente: \n\n");
        }
    }
    while(tam_alvo < 20 || tam_alvo > 50);

    //comparações para descobrir se a bala acertou ou não o alvo
    if(alc_hor >= dist && alc_hor <= (dist + tam_alvo))
    {
        printf("\nPARABENS VOCE ACERTOU O ALVO!!! \n");
    }
    else{
        if(alc_hor > (dist + tam_alvo)){
            printf("\nVoce errou o alvo, a bala caiu depois!!! \n");
        }
        else{
            printf("\nVoce erro o alvo, a bala caiu antes!!! \n");
        }
    }

    //saida de dados
    printf("\nCONVERSAO EM RADIANOS: %.2f \n", ang_in_rad);
    printf("ALTURA MAXIMA: %.2fm \n", alt_max);
    printf("TEMPO DA TRAJETORIA: %.2fs \n", temp_traj);
    printf("ALCANCE HORIZONTAL: %.2fm \n", alc_hor);

    return 0;
}
