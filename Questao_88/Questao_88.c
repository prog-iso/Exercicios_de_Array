#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[20], vetor_reduz[19], numero;

    printf("Vamos verificar a existência de um valor numa lista?\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < 19; i++)
    {
        vetor[i] = rand() % 100;
        printf(" %d,", vetor[i]);
    }
    vetor[19] = rand() % 100;
    printf(" %d.", vetor[19]);

    printf("\n\nAgora, vejamos se tem um valor nesse vator.\nEscreva um número: ");
    scanf("%d", &numero);

    for (int i = 0; i < 20; i++)
    {
        if (vetor[i] == numero)
        {
            int k = 0;

            printf("\nTemos esse valor na lista!\nVamos criar uma sem esse valor:");
            for (int j = 0; j < 20; j++)
            {
                if(j != i)
                {
                    vetor_reduz[k] = vetor[j];
                    printf(" %d,", vetor_reduz[k]);
                    k++;
                }
            }
            printf("\b.");
            break;
        }
        else if(i == 19) printf("\nDesculpa, não encontrei esse número na lista (>_<)");
    }
    
    while(getchar() != '\n');
    printf("\n\nAcabei meu trabalho aqui. Feche o programa apertando enter.");
    getchar();
}