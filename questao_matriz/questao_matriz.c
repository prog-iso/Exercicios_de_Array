#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int matriz[3][4], vetor[4], sum = 0;

    printf("Vamos mexer com matrizes!!!\n\n");

    printf("Primeiro criemos a matriz:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 1000;
            printf("|\t%d\t|", matriz[i][j]);
        }
    }

    
    printf("\n\nAgora, criemos um vetor contendo a soma de todas as linhas:\n");
    for (int i = 0; i < 4; i++)
    {
        vetor[i] = matriz[0][i] + matriz[1][i] + matriz[2][i];
        printf("|\t%d\t|", vetor[i]);
        sum += vetor[i];
    }

    printf("\n\nE, por último, mas não menos importante, a soma de todos os valores do vetor: %d", sum);

    printf("\n\n\nPara encerrar o código, digite enter.");
    getchar();
}