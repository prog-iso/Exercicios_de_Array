#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[20];

    printf("Vamos ler vetores.\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < 19; i++)
    {
        vetor[i] = rand() % 1000;
        printf(" %d,", vetor[i]);
    }
    vetor[19] = rand() % 1000;
    printf(" %d.", vetor[19]);

    printf("\nAgora, vamos lê-lo de trás para frente: ");
    for(int i = 19; i > 0; i--)
    {
        printf(" %d,", vetor[i]);
    }
    printf(" %d.", vetor[0]);

    printf("\n\nAperte enter para encerrar o código.");
    getchar();
}