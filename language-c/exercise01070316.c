#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indices = 10;
    float products[indices], correction = 1.15;

    for(int i = 0; i < indices; i++) {
        printf("Digite o preco do produto: ");
        scanf("%f", &products[i]);
        products[i] *= correction;
    }

    for(int i = 0; i < indices; i++) {
        printf("\nProduto na posicao %d com  valor corrigido: R$%.2f", i, products[i]);
    }

    return 0;
}
