#include <stdio.h>
#include <stdlib.h>

#define tam 3

int reduce (int array[], int lenght) {
  int acc = 0;
  for (int x = 0; x < lenght; x++) {
    acc += array[x];
  }
  return acc;
}

float calculate (float notes[tam], int lenght, int weights[tam], char param) {
  float acc = 0, tot;

  if (param == 0) {
    tot = lenght;
    for (int x = 0; x < lenght; x++) {
      acc += notes[x];
    }
  } else {
    tot = reduce(weights, lenght);
    for (int x = 0; x < lenght; x++) {
      acc += (notes[x] * weights[x]);
    }
  }

  return acc / tot;
}

int main() {

  int weights[tam] = {5, 3, 2};
  char type;
  float notes[tam];

  for (int x = 0; x < tam; x++) {
    printf("Digite a %i° nota do aluno: ", x + 1);
    scanf("%f", &notes[x]);
  }

  printf("Voce gostaria de uma media ponderada (1) ou aritmetica (0)?: ");
  scanf(" %c", &type);

  printf("A media do aluno e: %.2f\n", calculate(notes, tam, weights, type));
  return 0;
}
