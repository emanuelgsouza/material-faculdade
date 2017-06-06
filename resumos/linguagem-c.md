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
