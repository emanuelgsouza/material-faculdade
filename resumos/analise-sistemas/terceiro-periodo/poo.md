# Programação Orientada a Objeto

## Introdução:

Princípios da Orientação a Objeto enumeradas por [Alan Kay](https://pt.wikipedia.org/wiki/Alan_Kay):

* Qualquer coisa é um objeto.
* Objetos realizam tarefas através da requisição de serviços.
* Cada objeto pertence a uma determinada classe.
* Uma classe agrupa objetos similares.
* Um classe possui comportamentos associados ao objeto.
* Classes são organizadas em hierarquias.

### Conceitos e mecanismos

* **Orientação a Objetos**: paradigma de programação. Links:
  * [Devmedia](https://www.devmedia.com.br/principais-conceitos-da-programacao-orientada-a-objetos/32285);
  * [Pilares da POO](https://www.devmedia.com.br/os-4-pilares-da-programacao-orientada-a-objetos/9264)

* **Conceitos estruturais**: classe, objeto, atributo, encapsulamento e polimofirsmo.

* **Conceitos comportamentais**: método / mensagem

* **Relacionamentos**: generalização / especialização (Herança), agregação / decomposição, associação

#### O que é um objeto no contexto da POO?

É toda estrutura de dado que possui atributos e métodos. Todo objeto, dentro do contexto da POO, é vinculado, isto é, segue o contrato de uma classe específica. A classe não possui lugar em memória, não possui "vida", mas o objeto sim, e possui lugar em memória. É comumente dito que, ao se criar um objeto a partir de uma classe, instanciamos uma classe numa variável.

* **Atributos**: propriedade nomeada do objeto que é capaz de armazenar um estado / valor
* **Método**: é uma operação que o objeto poderá executar
* **Mensagem**: é a chamada de um método de um objeto, no qual poderá ser passado determinados parâmetros e / ou esperar determinados valores / estados.

### Padrões de Projetos (Aula PCA)

#### Padrão MVC - Model View Controller

* **Camada de Model (domínio)**: aonde eu implemento as classes do Diagrama de Classes e é a camada de dados
* **Camada de View (visualização)**: responsável pela apresentação
* **Camada de Controller (controle)**: responsável pela implementação do Diagrama de Casos de Uso.

* Para cada classe no Diagrama de Classes, também se cria uma classe no pacote domínio
* Para cada classe no Caso de Uso, também se cria uma classe no pacote controller.
* Cada caso de uso vira um método numa classe.

#### Padrão Javabeans:

* Declaração dos atributos privados
* Métodos construtor (mesmo que vazio)
* Métodos Get e Set para cada atributo
