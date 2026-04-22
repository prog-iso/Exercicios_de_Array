#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor_1[15], vetor_2[15], igual = 0;

    printf("Vamos operar com ||2|| vetores.\n\n");
    printf("\nAgora, vamos criar os 2 vetores:\n");
    
    printf("\tPrimeiro vetor, vetor 1:");
    for(int i = 0; i < 14; i++)
    {
        vetor_1[i] = rand() % 20;
        printf(" %d,", vetor_1[i]);
    }
    vetor_1[14] = rand() % 20;
    printf(" %d.", vetor_1[14]);

    printf("\n\tSegundo vetor, vetor 2:");
    for(int i = 0; i < 14; i++)
    {
        vetor_2[i] = rand() % 20;
        printf(" %d,", vetor_2[i]);
    }    
    vetor_2[14] = rand() % 20;
    printf(" %d.", vetor_2[14]);

    for(int i = 0; i < 15; i++) if(vetor_1[i] == vetor_2[i]) igual++;
    printf("\n\nCom isso, temos que nos 2 vetores temos números iguais, nas mesmas posições %d vezes.", igual);

    printf("\n\nPara fechar o programa, aperte enter.");
    getchar();
}