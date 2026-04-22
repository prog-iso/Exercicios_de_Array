#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[20], maior = 1000;
    int posicao;

    printf("Vamos comparar números hoje.\n\n");
    printf("Primeiro geremos um vetor com 20 números:\n");

    for(int i = 0; i <20; i++)
    {
        vetor[i] = rand() % 1000;
        printf("O %dº número é: %d\n", i+1, vetor[i]);

        if (maior > vetor[i])
        {
            maior = vetor[i];
            posicao = i+1;
        }
    }

    printf("\nAgora vejamos, o menor número desses 20 é o {%d}, que é o %dº.", maior, posicao);

    printf("\n\nAperte enter para encerrar o código.");
    getchar();
    
}