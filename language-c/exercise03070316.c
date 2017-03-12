#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 20;
    float heigthPeoples[length];

    for(int i = 0; i < length; i++) {
        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &heigthPeoples[i]);
    }

    for(int i = 0; i < length; i++) {
        if(heigthPeoples[i] > 1.60) {
            printf("\nPessoa na posicao %d = %.2f", i, heigthPeoples[i]);
        }
    }

    return 0;
}
