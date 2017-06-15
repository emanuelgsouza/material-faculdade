/*
 * Escreva um programa em C grave em um arquivo o nome e duas notas de dez alunos.
 * Em seguida o programa deve ler os dados do arquivo e imprimir na tela o nome e
 * a média de todos os alunos aprovados (media >= 6.0).
*/

#include<stdio.h>
#include<stdlib.h>

/*
 * Definindo constantes
 * @public MAX_STUDENTS = numero maximo de estudantes
 * @public MAX_CARACTERES = numero maximo de caracteres para os nomes
 * @public MEDIA = a media para aprovacao
 * @public Student = estrutura para estudante
*/

#define MAX_CARACTERES 50
#define MAX_STUDENTS 10
#define MEDIA 6.0

struct Student {
  char nome[MAX_CARACTERES];
  float note1;
  float note2;
  float media;
};

int main () {
  /*
   * Variaveis da funcao principal
   * @private file = ponteiro para posterior arquivo
   * @private students = array de estudantes
  */
  struct Student students[MAX_STUDENTS];
  FILE *file;

  file = fopen("bd.txt", "w");

  /* Caso haja algum erro na abertura do arquivo, como permissao */
  if (file == NULL) {
    printf("Acesso negado ao arquivo");
    fclose(file);
    return 1;
  }

  /* Fazendo a leitura dos dados e gravacao no arquivo */
  for (int i = 0; i < MAX_STUDENTS; i++) {
    printf("Digite o nome do aluno %i: ", i + 1);
    scanf("%s", &students[i].nome);
    printf("Digite a primeira nota do aluno %i: ", i + 1);
    scanf("%f", &students[i].note1);
    printf("Digite a segunda nota do aluno %i: ", i + 1);
    scanf("%f", &students[i].note2);
    students[i].media = (students[i].note1 + students[i].note2) / 2;
    printf("\n");

    /* Inserindo dados no arquivo */
    fprintf(file, "%s \n", students[i].nome);
    fprintf(file, "%.2f \n", students[i].note1);
    fprintf(file, "%.2f \n", students[i].note2);
    fprintf(file, "%.2f \n\n", students[i].media);
  }

  /*
   * Fechando o arquivo para posterior abertura em modo de leitura.
   * Isto e necessario, pois se poderia ter aberto o arquivo em modo de leitura
   * e escrita, todavia, o mesmo precisaria existir.
   * Desta forma, caso o arquivo não exista, ele cria para escrita e se torna
   * necessario fecha-lo para posterior abertura em modo de leitura.
  */
  fclose(file);
  file = NULL;

  /*
   * Abrindo o arquivo em modo de leitura e lendo seus dados, os armazenando no
   * array de structs.
  */
  file = fopen("bd.txt", "r");
  for (int i = 0; i < MAX_STUDENTS; i++) {
    fscanf(file, "%s\n%f\n%f\n%f\n\n", &students[i].nome, &students[i].note1, &students[i].note2, &students[i].media);
    if (students[i].media >= MEDIA) {
      printf("O aluno %s com media %.2f esta aprovado!\n", students[i].nome, students[i].media);
    }
  }

  fclose(file);
  return 0;
}
