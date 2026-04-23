#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int vetor[30], vetor_reduz[30], numero, rep = 0;

    printf("Vamos verificar a existência de um valor numa lista?\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < 29; i++)
    {
        vetor[i] = rand() % 100;
        printf(" %d,", vetor[i]);
    }
    vetor[29] = rand() % 100;
    printf(" %d.", vetor[29]);

    printf("\n\nAgora, vejamos se tem um valor nesse vator.\nEscreva um número: ");
    scanf("%d", &numero);

    for (int i = 0; i < 30; i++) if (vetor[i] == numero) rep++;

    if (rep == 0) printf("\nDesculpa, não encontrei esse número na lista (>_<)");
    else printf("O número %d aparece %d vezes", numero, rep);
    
    while(getchar() != '\n');
    printf("\n\nAcabei meu trabalho aqui. Feche o programa apertando enter.");
    getchar();
}