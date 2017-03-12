#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 20;
    float vetor1[length], vetor2[length], vetor3[length];

    for(int i = 0; i < length; i++) {
        printf("Digite um valor o vetor1: ");
        scanf("%f", &vetor1[i]);
        printf("Digite um valor o vetor2: ");
        scanf("%f", &vetor2[i]);
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    for(int i = 0; i < length; i++) {
        printf("\nPosicao vetor[%d] = %.2f", i, vetor3[i]);
    }

    return 0;
}
