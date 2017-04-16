#include <stdio.h>
#include <stdlib.h>

#define elements 5

void maiorOuMenor () {
  int vetor[elements], aux;

  for (int x = 0; x < elements; x++) {
    printf("Digite o %i° numero: ", x + 1);
    scanf("%i", &vetor[x]);
  }

  for (int x = 0; x < elements - 1; x++) {
    for (int y = 0; y < elements - 1 - x; y++) {
      if (vetor[y] > vetor[y + 1]) {
        aux = vetor[y];
        vetor[y] = vetor[y + 1];
        vetor[y + 1] = aux;
      }
    }
  }

  printf("O menor elemento no vetor e %i \n", vetor[0]);
  printf("O maior elemento no vetor e %i \n", vetor[elements - 1]);
}

int main() {

  maiorOuMenor();
  return 0;
}
