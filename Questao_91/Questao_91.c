#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define tam 50

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[tam];

    printf("Vamos verificar a existência de um valor numa lista?\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 100;
        printf(" %d,", vetor[i]);
    }
    printf("\b.");

    printf("\n\n\nAgora, vejamos quantos números repetidos temos nesse vetor:");

    for(int i = 0; i < tam; i++)
    {
        int rep = 0;
        for(int j = 0; j < tam-1; j++)
        {
            if(vetor[i]==vetor[j] && i != j)
            {
                if(j < i) break;
                if(rep == 0) printf("\n\nO número %d aparece pela primeira vez na posição %d;", vetor[i], i+1);

                printf("\n\t-> O número %d se repete pela %dº vez na posição %d;", vetor[i], rep+1, j+1);
                rep++;
            }
        }
        if(rep != 0) printf("\b.");
    }
 
    printf("\n\nAcabei meu trabalho aqui. Feche o programa apertando enter.");
    getchar();
}