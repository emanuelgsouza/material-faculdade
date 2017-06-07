# Linguagem C

## Funções

Funções são blocos de código do programa. A palavra de ordem quando usamos funções é o **reaproveitamento**.

Sintaxe:

```
<tipo> nomeFuncao (<tipo> parametro ...) {
  // bloco de codigo
}
```

Exemplo:

```c
int double (int num) {
  return num * 2;
}
```

Observaçoes:

+ Funções com **void** não necessitam de *return* no final ou em alguma parte do código.
+ O número de parâmetros, também será o número de tipos dos parâmetros. Os mesmos deverão ser separados com vírgulas.
+ O tipo da função especifíca o seu retorno. Portanto, tome muito cuidado em como irá retornar os dados.

------------------------------------------------------------------

## Strings

Strings são cadeias de caracteres. São como vetores, de char, mas que podem ser lidos e escritos com mais de um caracter.

+ Declaração de string

```c
char nome[30];

/* Inicializando strings */

char nome[30] = {"Emanuel Goncalves de Souza"};
```

Em `printf` e `scanf` você usa o `%s` para ler e escrever uma string inteira.

#### Funções importantes com strings

+ **gets()**: lê o que o usuário digitar, inclusive com espaços.
+ **strcmp()**: compara se duas variáveis são iguais. **Se sim, retorna 0, se não, retorna 1**.
+ **strcpy()**: copia o conteúdo de uma string para outra string.
+ **strcat()**: concatena o conteúdo de duas strings.

```c
char nome[10];
char sobrenome[30];
char aux nome[10];
char aux2 sobrenome[30];

// Captura o que é digitado pelo usuário
gets(nome);
gets(sobrenome);

// Concatena
strcat(nome, "");
strcat(nome, sobrenome);

// Copia
strcpy(aux, nome); // aux recebe o conteudo de nome
strcpy(aux2, sobrenome);

// Compara
strcmp(aux, nome); // retorna 0
strcmp(aux, sobrenome); // retorna 1
```
