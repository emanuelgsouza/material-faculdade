// Faca um programa em C que solicite a digitacao de um valor estritamente positivo enquanto for desejo do usuario e informe se o valor digitado e primo ou nao-primo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number, condition, cont;

  do {
    printf("Digite um numero positivo: ");
    scanf("%d", &number);

    if (number <= 0) {
      printf("Digite um numero positivo! \n");
    } else {
      cont = 0;
      for (int x = 1; x <= number; x++) {
        if (number % x == 0) cont++;
      }
      if (cont > 2) printf("Numero nao primo \n");
      if (cont == 2) printf("Numero primo \n");
    }

    printf("Deseja continuar, 0 para sair, qualquer tecla para continuar: ");
    scanf("%d", &condition);

  } while(condition);
  return 0;
}
