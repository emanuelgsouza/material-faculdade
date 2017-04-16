#include <stdio.h>
#include <stdlib.h>

#define columns 3
#define lines 3

int main() {

  int matriz[columns][lines], acc = 0;

  for (int i = 0; i < columns; i++) {
    for (int j = 0; j < lines; j++) {
      printf("Insira um numero inteiro em matriz[%i][%i]: ", i, j);
      scanf("%i", &matriz[i][j]);
    }
  }

  for (int i = 0; i < columns; i++) {
    for (int j = 0; j < lines; j++) {
      if (matriz[i][j] == matriz[j][i]) acc++;
    }
  }

  if (acc == (columns * lines)) {
    printf("\nA matriz e simetrica\n");
  } else {
    printf("\nA matriz nao e simetrica\n");
  }

  return 0;
}
