# Modelagem de Dados

## Conceitos básicos

+ **Dado**: é o registro de um evento. É a base de toda informação.
+ **Informação**: dados com relevância e propósito. Dado que possui um significado.
+ **Conhecimento**: informação valiosa, previlegiada. Existe uma função é uma ação vinculada a ela.
+ **SGBD**: software que funciona como uma interface entre o banco de dados físico e o DBA.
+ **Banco de Dados**: coleção de dados relacionados.

## Funções do SGBD

+ Definir a estrutura do banco de dados;
+ Construir este banco, e
+ Manipulá-lo.

## Modelo Entidade e Relacionamento - Conceitos

+ **Entidade**: abstração de conjunto de objetos com características semelhantes.
+ **Atributo**: caracteristica comum a todos os objetos da entidade.
+ **Relacionamento**: associação entre entidades. Quando se estabele um, é necessário definir:
  + Como eles se comportam;
  + Grau dependencia
  + Associação entre as entidades
+ **Cardinalidade**: mostra o quantos objetos de uma entidade podem estar relacionados a outra entidade no relacionamento.
+ **Especialização**: Um entidade geral que é especializada em outras entidades com caracteristicas mais específicas
+ **Entidade Fraca**: Entidade que para existir, depende de outra. Exemplo clássico: Banco e agencia.
+ **Autorrelacionamento**: Quando os objetos de uma entidade se relacionam com outros pertencentes a mesma entidade

## Tipos de relacionamento

+ Um para um: um elemento de A está associado a um elemento de B
+ Um para muitos: um elemento de A está relacionado a vários elementos de B
+ Muitos para muitos: muitos elementos de A estão relacionados a muitos elementos de B

Observação: quando há cardinalidade de 0 para muitos ou 0 para um, diz-se que não é um relacionamento obrigatório.

## Aprofundando Conceitos

Quando especializamos uma entidade, procuramos definir que ela vai ter entidades derivadas dela com caracteristicas distintas. Daí deriva alguns outros conceitos:

+ **Disjunção**: quando uma entidade especializada pode ser outra especializada. Exemplo: (Aluno = classe geral) -> Bolsista e Monitor. Um bolsista pode ser um monitor.
+  **Restrição**: quando uma entidade especializada não pode ser uma outra. Exemplo: (Veículo Automotor) -> Carro, Caminhão, Trator. Um carro, não pode ser de outro espécie, a não ser carro. 
