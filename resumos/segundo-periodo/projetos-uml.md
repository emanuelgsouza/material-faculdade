# Analise e Projeto Orientados a Objeto

## Processo de desenvolvimento de software

+ **Análise**: consiste em levantar os requisitos do sistema proposto com o objetivo de entender o seu funcionamento.
+ **Projeto**: considera os aspectos lógicos e independentes de implementação. Nesta fase, determina-se como o sistema funcionará. Como artefatos são produzidos diagramas de casos de uso, diagramas de classes entre outros.
+ **Implementação**: é a fase de codificação utilizando linguagem de programação.
+ **Testes**: nesta etapa são realizados testes para verificação / detecção de erros.
+ **Implantação**: o sistema é impacotado, distribuído e instalado no ambiente do usuário.

## Requisitos

É uma condição ou uma necessidade que o sistema se propõe. Podem ser do tipo:

+ **Requisitos funcionais**: definem as funcionalidades a serem desenvolvidas do sistema. Exemplo:
> O sistema deve permitir lançar nota pelo professor.

+ **Requisitos não-funcionais**: declaram as características de qualidade que o sistema deve possuir e que estão relacionadas às suas funcionalidades. Exemplo:
> Confiabilidade, desempenho, segurança...

## Diagrama de Casos de Uso

> Um caso de uso representa quem faz o que (interage) com o sistema, sem considerar o comportamento interno do sistema

Em suma, o diagrama de Casos de Uso ilustra os requisitos funcionais do sistema, sem levar em conta como isso será implementado no sistema.

#### Conceitos importantes:

![Conceitos Iniciais](../images/uml/conceitos-iniciais.PNG)

+ **Elipse**: representa o caso de uso, ou seja, as funções/funcionalidades do sistema.
+ **Fronteira**: retangulo que demarca o espaço do sistema em relação ao espaço não participante do sistema.
+ **Ator**: pesssoa/sistema que interage com o sistema.
+ **Setas/Linhas**: representam os relacionamentos entre atores/funcionalidades
  + Ator primário: é o que dispara o caso de uso. Que interaje diretamente com o caso de uso.
  + Ator secundário: é que auxilia o ator primário na execução do caso de uso. Não interaje diretamente com o caso de uso.

#### Estereótipos - ocorre entre casos de uso:

+ Include: representa um relacionamento obrigatório. Exemplo: ao executar o caso de uso `efetuar venda`, obrigatoriamente será executado o caso de uso `emitir nota fiscal`.

+ Extend: representa um relacionamento não obrigatório. Exemplo: para ser executado o caso de uso `efetuar venda`, não é obrigatório executar o caso de uso `autorizar venda`.

Exemplo:

![Exemplo de Include e Extensão](../images/uml/extend-include-uml.PNG)

## Diagrama de Classes
