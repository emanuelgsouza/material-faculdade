#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, num[10], aux[10], cont = 0;
  
  for (i = 0; i < 10; i++) {
    printf("Digite o %d numero: ", i+1);
    scanf("%d",&num[i]);
  }

  printf("\nOs numeros digitados foram: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }

  printf("\nOs numeros na ordem inversao sao: ");
  for(i = 9; i >= 0; i--){
    aux[cont] = num[i];
    printf("%d ", aux[cont]);
    cont++;
  }
  printf("\n");
  return 0;
}
