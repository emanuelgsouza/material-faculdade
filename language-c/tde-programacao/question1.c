#include <stdio.h>
#include <stdlib.h>

#define numberStudents 10
#define numberQuestions 8
#define criterio 6

int main() {

  char template[numberQuestions], students[numberQuestions][numberStudents];
  float porcent, approved = 0;
  int notes[numberStudents], acc;

  printf("Digite o gabarito:\n");
  for (int x = 0; x < numberQuestions; x++) {
    printf("Para a questao %i: ", x + 1);
    scanf(" %c", &template[x]);
  }

  printf("\nDigite as respostas dos alunos: \n");
  for (int x = 0; x < numberStudents; x++) {
    acc = 0;
    for (int y = 0; y < numberQuestions; y++) {
      printf("Digite a resposta do aluno %i para a questao %i: ", x + 1, y + 1);
      scanf(" %c", &students[x][y]);
      if (template[y] == students[x][y]) acc++;
    }
    notes[x] = acc;
    if (acc >= criterio) approved++;
    printf("\n");
  }

  printf("\nAs notas dos alunos foram: \n");
  for (int x = 0; x < numberStudents; x++) {
    printf("Para o %i° aluno: %i;\n", x + 1, notes[x]);
  }

  porcent = (approved / numberStudents) * 100;

  printf("\nA porcentagem de aprovacao foi de %.2f%% \n", porcent);

  return 0;
}
