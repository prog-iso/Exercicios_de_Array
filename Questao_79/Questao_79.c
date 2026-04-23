#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    float notas[20], media = 0;
    int acima_media = 0;

    printf("Hoje começaremos a mexer com listas!!!\n\nEscreva a nota de todos os 20 estudantes da sua turma:\n");

    for (int i = 0; i < 20; i++)
    {
        printf("A nota do %dº estudante: ", i+1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }
    
    media = media/20;
    printf("\nE simples assim a média final das notas dos alunos é: %.2f", media);
    
    for (int i = 0; i < 20; i++) if (notas[i] > media) acima_media ++;
    printf("\nAlém disso, tivemos %d bons alunos, tirando acima da médida.", acima_media);

    while(getchar() != '\n');
    printf("\n\nAgora, vamos descansar. Feche o programa apertando enter.");
    getchar();
}