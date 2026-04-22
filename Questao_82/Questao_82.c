#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int A[10], M[10], X;

    printf("Vamos operar com vetores.\n\n");
    printf("Primeiro, precisamos criar um vetor:");
    
    for(int i = 0; i < 9; i++)
    {
        A[i] = rand() % 1000;
        printf(" %d,", A[i]);
    }
    A[9] = rand() % 1000;
    printf(" %d.", A[9]);

    printf("\n\nAgora, multipliquemos esse vetor por uma constante, qual o valor dela? ");
    scanf("%d", &X);

    printf("\nFeito isso, o novo vetor que temos é M: ");
    for(int i = 0; i < 9; i++)
    {
        M[i] = A[i] * X;
        printf(" %d,", M[i]);
    }
    M[9] = A[9]*X;
    printf(" %d.", M[9]);

    while(getchar() != '\n');
    printf("\n\nAperte enter para encerrar o código.");
    getchar();
}