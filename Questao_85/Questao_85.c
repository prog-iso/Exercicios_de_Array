#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"pt_BR.UTF-8");
    setlocale(LC_NUMERIC,"C");

    srand(time(NULL));

    int temp[365], acima_media = 0, max_temp = 0, min_temp = 50, max_pos, min_pos;
    float media = 0;

    printf("Vamos verificar a temperatura média desse ano?\n\nPrimeiro, verifiquemos as temperaturas desse ano:");

    for (int i = 0; i < 365; i++)
    {
        temp[i] = 10 + rand()%40;
        printf("\n\tNo %dº dia do ano foi: %d°C", i+1, temp[i]);
        media += temp[i];

        if (max_temp < temp[i])
        {
            max_temp = temp[i];
            max_pos = i+1;
        }

        if (min_temp > temp[i])
        {
            min_temp = temp[i];
            min_pos = i+1;
        }
    }

    media = media/365.0;

    printf("\n\nPor fim, analisemos os dados da temperatura:");
    printf("\n\tA) A menor temperatura desse ano foi: %d°C", min_temp);
    printf("\n\tA) A maior temperatura desse ano foi: %d°C", max_temp);
    printf("\n\tC) A temperatura média nesse ano foi: %.2f°C", media);

    for (int i = 0; i < 365; i++) if (temp[i] > media) acima_media ++;
    printf("\n\tD) E a quantidade de dias com temperatura acima da média: %d", acima_media);

    printf("\n\nAgora, vamos descansar. Feche o programa apertando enter.");
    getchar();
}