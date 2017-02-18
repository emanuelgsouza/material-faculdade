// Faca um programa em C que solicite a digitacao de um valor estritamente positivo enquanto for desejo do usuario e informe se o valor digitado e par ou impar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number, condition;

  do {
    printf("Digite um numero positivo: ");
    scanf("%d", &number);

    if (number <= 0) {
      printf("Digite um numero positivo! \n");
    } else {
      if (number % 2 == 0) {
        printf("Numero par \n");
      } else {
        printf("Numero impar \n");
      }
    }

    printf("Deseja continuar, 0 para sair, qualquer tecla para continuar: ");
    scanf("%d", &condition);

  } while(condition);
  return 0;
}
