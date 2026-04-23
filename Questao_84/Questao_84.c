#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int tam;

    printf("Vamos operar com ||2|| vetores.\n\n");

    printf("Primeiro, qual será o tamanho dos vetores? ");
    scanf("%d", &tam);

    printf("\nAgora, vamos criar os 2 vetores:\n");
    int vetor_1[tam], vetor_2[tam];
    tam--;
    
    printf("\tPrimeiro vetor, vetor 1:");
    for(int i = 0; i < tam; i++)
    {
        vetor_1[i] = rand() % 1000;
        printf(" %d,", vetor_1[i]);
    }
    vetor_1[tam] = rand() % 1000;
    printf(" %d.", vetor_1[tam]);

    printf("\n\tSegundo vetor, vetor 2:");
    for(int i = 0; i < tam; i++)
    {
        vetor_2[i] = rand() % 1000;
        printf(" %d,", vetor_2[i]);
    }    
    vetor_2[tam] = rand() % 1000;
    printf(" %d.", vetor_2[tam]);

    printf("\n\nE, finalmente, vamos calcular a soma desses vetores:");
    for(int i = 0; i < tam; i ++)
    {
        printf(" %d,", vetor_1[i]+vetor_2[i]);
    }
    printf(" %d.", vetor_1[tam]+vetor_2[tam]);

    while(getchar() != '\n');
    printf("\n\nAperte enter para encerrar o código.");
    getchar();
}