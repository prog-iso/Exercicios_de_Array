#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[50], vetor_rep[50], numero, rep = 0;

    printf("Vamos verificar a existência de um valor numa lista?\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < 49; i++)
    {
        vetor[i] = rand() % 100;
        printf(" %d,", vetor[i]);
    }
    vetor[49] = rand() % 100;
    printf(" %d.", vetor[49]);

    printf("\n\nAgora, vejamos quantos números repetidos temos nesse vetor:\n");

    for(int i = 1; i < 50; i++)
    {
        if(vetor[i] == vetor[i-1]) rep++;
        else if(rep > 0)
        {
            printf("\n\tO número %d aparece %d vezes da posição %d até %d", vetor[i-1], rep, i - rep, i);
            rep = 0;
        }
    }
 
    printf("\n\nAcabei meu trabalho aqui. Feche o programa apertando enter.");
    getchar();
}