#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length = 5, matricula[length];
    float nota[length];

    for(int i = 0; i < length; i++) {
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &matricula[i]);
        printf("Digite a nota deste aluno: ");
        scanf("%f", &nota[i]);
    }

    for(int i = 0; i < length; i++) {
        if(nota[i] > 6.0) {
            printf("\nO aluno com a matricula de n° %d foi aprovado com nota %.2f", matricula[i] + 1, nota[i]);
        }
    }
    printf("\n");
    return 0;
}
