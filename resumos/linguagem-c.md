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

------------------------------------------------------------------

## Ponteiros

Ponteiros na linguagem C são variáveis que guardam o endereço de memória de outras variáveis. Seu uso é importante quando se quer modificar o escopo de uma função, que por padrão, possui **escopo global**. Ai quando se torna necessário modificar variáveis fora deste escopo, ponteiros mostra seu valor.

+ Declaração de ponteiros:

```c
// <tipo> *ponteiro;

int *ponteiro;

// Atribuindo um endereço de uma variável
ponteiro = &variavel;

// Acessando este valor
*ponteiro = 1; // variavel irá ter agora o valor 1
```

Observações:

+ Quando eu quero passar o endereço de uma variável, eu uso o `&`;
+ Quando eu quero acessar o valor e manipulá-lo, sobrescrevê-lo e afins, uso o `*`;
+ Vetores já são ponteiros por natureza.

### Usando ponteiros em funções

```c
void somaDois (int *ponteiro, int vet[]) {
  // Aqui estou dizendo a minha função: 'Você irá receber um ponteiro'
  *ponteiro += 2;

  // Trabalho com meu vetor aqui dentro
  vet[0] = 2;
  vet[1] = 4;
}

// Meu main
int main () {
  int a = 2;
  int vet[2];

  somaDois(&a, vet); // Repare que para eu passar o endereço da variavel a, eu uso o & e não preciso fazer isso com o vetor
  printf("O valor de a eh: %i", a); // O resultado será 2
  for (int x = 0; x < 2; x++) {
    printf("vet[%i] - %i\n", x, vet[x]);
  }
}
```
