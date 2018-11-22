# Resumo de Programação Orientada a Objetos

## O que é o Paradigma Orientado a Objetos?

## Quais os pilares da POO?

### Encapsumento

Tipos de atributo:

* private
* public
* protected
* default

## O que e uma classe?

## Estratégias de reuso de código

### Herança

#### Classe Abstrata

#### Classe final

### Interface

## Collections Framework

Links de Aprofudamento:
* https://www.devmedia.com.br/dissecando-a-java-collections-revista-java-magazine-96/22546
* https://www.caelum.com.br/apostila-java-orientacao-objetos/collections-framework/
* https://www.devmedia.com.br/diferencas-entre-treeset-hashset-e-linkedhashset-em-java/29077
* https://www.devmedia.com.br/conheca-a-api-java-collections/31995

Qual a diferença entre as implementações de coleções? **O algorítmo que elas implementam**

### Arrays:

* É uma lista sequencial. Primeiro aloca-se um espaço na memória, ai eu insiro os elementos em sequência
* Boa para busca aleatória, pois no momento de criação do array, eu ja sei aonde cada elemento do array está em memória.
* É ruim porque é um tamanho limitado, não é possível inserir mais elementos do que ele foi criado

### Interface List

#### Array List (lista sequencial)

Tem comportamento **semelhante ao array**, exceto que, ao tentar inserir mais elementos do que foi iniciado, ele não retorna uma excessão, antes, realoca memória para que o elemento seja inserido. O formato de realocação é o seguinte: ele duplica o espaço em memória e copia o antigo array para esse novo espaço.

#### Linked List (lista encadeada)

É bom para inserção, pois aloca em memória somente os elementos que forem inseridos. Porém, não é bom para busca aleatória devido ao fato de que para buscar um determinado elemento, é preciso percorrer toda a lista do início ao fim

### Interface Set

* Ligada a teoria dos conjuntos
* Não aceita duplicação de elementos já conhecidos

* **HashSet**: Implementa uma tabela de chave e valor, pois implementa **internamente o HashMap**. E não é possível ordenar os dados
* **TreeSet**: Já insere ordenado

### Interface Map

Faz mapeamento de chave-valor. A diferença entre as duas classes abaixo é que HashTable é *sincronized*, isto é, só permite um acesso por *thread*.

* HashMap
* HashTable

## Exceções

[Link de aprofundamento - Apostila Caelum](https://www.caelum.com.br/apostila-java-orientacao-objetos/excecoes-e-controle-de-erros/#lanando-excees)

#### Dois tipos de erro em Java:

* Em tempo de execução: explode na cara do usuário
* Em tempo de compilação: o programa nem compila

#### As exceções podem ser de dois tipos:

* **checked**: obriga-se a tratar
* **unchecked**: não e obrigado a tratar, geralmente é erro do programador. Exemplo: explodir a quantidade de elementos que são possíveis de inserir em um Array.

#### Como tratar exceções?

Usando o *try*, *catch* e *finally*

* **try**: é o corpo do código
* **catch**: é o lugar onde se captura qualquer excessão, das mais específicas as mais genéricas (Exception), cada uma com um bloco *catch*. Para eu imprimir, posso usar o *System.err*
* **finally**: sempre será executado

### varargs

* https://www.geeksforgeeks.org/variable-arguments-varargs-in-java/

### Enum

* https://www.devmedia.com.br/tipos-enum-no-java/25729

### Thread

*  https://www.caelum.com.br/apostila-java-orientacao-objetos/apendice-programacao-concorrente-e-threads/#threads
* https://www.devmedia.com.br/trabalhando-com-threads-em-java/28780

### Generics

* https://www.devmedia.com.br/usando-generics-em-java/28981
* https://www.devmedia.com.br/java-generics-trabalhando-com-metodos/30911
* Fila: https://www.caelum.com.br/apostila-java-estrutura-dados/filas
* Pilha: https://www.caelum.com.br/apostila-java-estrutura-dados/pilhas/

### Autoboxing e Unboxing

* https://www.devmedia.com.br/autoboxing-e-unboxing-em-java/28620
* https://www.devmedia.com.br/conhecendo-as-classes-wrappers-autoboxing-e-auto-unboxing/7384

### Padrão de Projeto Iterator

* https://www.devmedia.com.br/padrao-de-projeto-iterator-em-java/26733

### Interface Comparable

* http://blog.caelum.com.br/ordenando-colecoes-com-comparable-e-comparator/

### Anotações

* https://www.devmedia.com.br/entendendo-anotacoes-em-java/26772
* http://blog.alura.com.br/criando-anotacoes-no-java/
