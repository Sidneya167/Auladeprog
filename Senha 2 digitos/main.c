#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

int main()
{
    int Senhas[TAMANHO], Sentinela, i = 0, j;
    srand(time(NULL));
    while(i < TAMANHO)
    {
        Senhas[i] = rand() % 90 + 10;
        Sentinela = 0; //Não está no vetor
        j = i - 1;
        while(j >= 0 && Sentinela == 0)
        {
            if(Senhas[i] == Senhas[j])
                Sentinela = 1; //Já está no vetor
            j--;
        }
        if(Sentinela == 0)
            i++;
    }
    printf("Vetor: [");
    for(i = 0; i < TAMANHO; i++)
        printf(" %i ", Senhas[i]);
    printf(" ].\n");
    return 0;
}
