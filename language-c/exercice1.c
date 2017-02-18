// Faca um programa que verifique o sexo de 10 alunos de uma turma e ao final mostre o percentual de meninos e meninas

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char sexo;
  float numberGirls = 0;
  float numberBoys = 0;
  float percentualBoys;
  float percentualGirls;

  for (int i = 0; i < 10; i++) {
    do {
      printf("Digite o sexo do aluno: ");
      scanf(" %c", &sexo);
      if ( (toupper(sexo) != 'F') && (toupper(sexo) != 'M') ) {
        printf("Entrada invalida. So eh permitido valores M ou F\n");
      }
    } while( (toupper(sexo) != 'F') && (toupper(sexo) != 'M') );

    if (toupper(sexo) == 'F') {
      numberGirls++;
    }
    if (toupper(sexo) == 'M') {
      numberBoys++;
    }
  }

  percentualBoys = (numberBoys / 10) * 100;
  percentualGirls = (numberGirls / 10) * 100;

  printf("Percentual de meninos: %.2f \n", percentualBoys);
  printf("Percentual de meninas: %.2f \n", percentualGirls);

  getchar();
  return 0;
}
