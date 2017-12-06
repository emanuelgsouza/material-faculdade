# Metodos e Tecnicas de Engenharia de Software

Esta matéria teve como objetivo mostrar os conceitos por trás da Engenharia de Software. A seguir, o que foi apresentado na matéria

## O que é Engenharia de Software?

Segundo o material da Unigranrio, Engenharia de Software é:

> A engenharia de software é o conjunto de técnicas, métodos e ferramentas para construção de sistemas e tem como objetivo ordenar o desenvolvimento e obter qualidade e satisfação dos clientes.

Para maior enriquecimento, trago a definição de Fritz Bauer, encontrada no site [DevMedia](https://www.devmedia.com.br/principios-da-engenharia-de-software/29630):

> Engenharia de Software é o estabelecimento e o emprego de sólidos princípios de engenharia de modo a obter software de maneira econômica, que seja confiável e funcione de forma eficiente em máquinas reais

---

## Processos de Software e Disciplinas da Engenharia de Software

Processos de software são as diversas fases para se construir e manter um software. Ter consciencia de um processo é importante para se manter um padrão que contribui para a qualidade de um software.

O que se entende como disciplinas de ES são as atividades aplicadas durante o processo de software que contribui para a construção e manutenção do mesmo. São elas:

### Gerencia de projetos

Todo projeto precisa de ***planejamento***. Sendo assim, essa disciplina é fundamental por propor esse planejamento ao desenvolvimento do software. Mas não somente o planejamento é importante, mas também o ***controle de execução do mesmo***.

### Levantamento de requisitos

É nesta fase que se ***levanta os requisitos funcionais e não-funcionais***. Os requisitos são as funcionalidades que o sistema precisa entregar. Sendo assim, é nesta disciplina que se estuda e define quais as funcionalidades serão contempladas no software.

É possível, para tanto, se utilizar de diferente tecnicas para o levantamento de requisitos: *brainstorming*, *questionário* ou entrevistas

### Análise

É a disciplina responsável por detalhar cada requisito levantado no processo anterior. O objetivo é detalhar passo-a-passo como o sistema será desenvolvido. É nesta disciplina que se criar os diferentes documentos da análise de projetos, tais como o Modelo Entidade-Relacionamento, quando o assunto é o bancod de dados. Quando são projetos orientados a objeto, cria-se os diagramas da UML, entre outros.

### Projeto

Cria-se uma solução tecnológica para o sistema considerando suas diferentes funções, requisitos e restrições. Há também a criação de diferentes documentos.

### Implementação

Aqui é a parte do desenvolvimento propriamente dito. Escolhe-se o conjunto de linguagens e tecnologias necessárias a construção do projeto.

### Teste

Esta disciplina tem como função prover os diferentes conjuntos de ferramentas para a validação e verifição do software. Aqui são criados os documentos de testes e o sistema é validado sobre diferentes perspectivas: desde do nível de código até a nível de interação do usuário.

### Implantação

Segundo a Unidade de Aprendizagem 3 da matéria:

> É a disciplina que finaliza o desenvolvimento e disponibiliza para uso no usuário. Os procedimentos são aprovados pelos stakeholders, treinamento é desenvolvido com os usuários do negócio e carga dos dados é efetivada.

### Manutenção

Disciplina que cuida da manutenção do software, bem como das diferentes tecnologias e metodologias utilizadas para isso.

### Qualidade

Segundo a Unidade de Aprendizagem 3 da matéria:

> Determina características necessárias para satisfazer a necessidade dos usuários do negócio.

---

## Ciclos de vida de um Software

Ciclo de vida diz respeito as etapas de como o software poderá ser contruído e em quais momentos são feitos os documentos resultantes dessas etapas.

Independentemente do ciclo escolhido, o processo será o mesmo:

* Conhecimento do problema
* Representação conceitual da solução
* E como a mesma será implantada

### Cascata

#### Caracteristicas

* As etapas são feitas seguidamente
* Cada término de etapa serve de entrada para outra etapa
* É gerado um documento a cada etapa

#### Pontos positivos

* Simples de implementar

#### Pontos negativos

* Tem-se dificuldade com mudanças de requisitos
* Demora-se para entregar algo utilizável para o usuário
* Processo burocrático

![](https://engenhariasoftware.files.wordpress.com/2013/01/cascata.png)

### Prototipagem

#### Caracteristicas

* Desenvolvimento rápido e portanto, rápida entrega

#### Pontos positivos

* Intensa participação do usuário
* Facilidade em modificar a estrutura do software

![](http://api.ning.com/files/aNZ9EZ3f4*xUo9zpIgot1pGWp0CNK*AJfry9rkERSGj7cPA65x8ck2bmeCnzghDCC0zLuJJQN4k3Ad0tv7BJwwJ956qbgXwW/proto.png)

### Espiral

#### Caracteristicas

* Tentativa de união do modelo em cascata com o modelo em protótipos
* Possui 4 etapas:
  * Planejamento - levantamento de requisitos;
  * Análise de riscos - projeto com a análise da viabilidade do sistema;
  * Engenharia - implementação;
  * Avaliação do usuário - validação por parte do usuário

#### Pontos negativos

* Senão bem pensado, pode se tornar complexo para algumas equipes
* Altamente dependente de tecnologia

### Iterativo e incremental

#### Caracteristicas

* Desenvolvimento realizado em partes
* Maleável e manutenível
* Rápida entrega em partes
* Ao finalizar um ciclo, recomeça-se ele

![](http://www.adonai.eti.br/wordpress/wp-content/uploads/2014/01/IncrementalEvolutivo.jpg)

### Modelo Evolutivo

#### Caracteristicas

* Parte do princípio que não é possível ter todos os requisitos num primeiro momento
* A partir do que o cliente colocar, é desenvolvido o sistema e entregue uma versão operacional
* O cliente da o feedback que é necessário para mais requisitos e assim volta ao início do ciclo
* O software já atende a requisitos do cliente mais cedo
* Não há preocupação na construção de documentos
* Há a necessidade de um forte gerenciamento neste modelo
* Há uma intensa participação do cliente

### RAD: Rapid Application Development

#### Caracteristicas

* Ciclos curtos de desenvolvimento, de 60 a 90 dias
* Paralelismo nas atividades
* Múltiplas equipes trabalhando no sistema
* Módulos de desenvolvimento independentes
* Prototipagem rápida e bastante interação com o cliente
* Padronização de telas e UI devido ao forte uso de frameworks componentizados

---

## Desenvolvimento ágil

### Scrum

A seguir, uma imagem que ilustra bem o fluxo do **Scrum**:

![](https://scrumorg-website-prod.s3.amazonaws.com/drupal/inline-images/2017-05/ScrumFrameworkTest.png)

#### Conceitos

* **Sprint**: ciclo iterativo de duração determinada. Ao final da sprint, o software é incrementado.

* **Backlog**: é o conjunto de requisitos priorizados pelo *Product Owner*.

* **Daily scrum**: é a reunião diária em que os integrantes da equipe dizem como está o andamento de suas tarefas

* **Retrospectiva**: é a reunião que tem como objetivo refletir sobre a Sprint passada.

* **Estória**: é o requisito documentado.

#### Conceitos

* **Product Owner**: é o proprietário do produto. É aquele que está mais próximo do cliente e de quem está interessado com o produto.

* **Scrum Master**: líder da equipe. É o que possui contato direto com o *Product Owner*.

* **A Equipe de Desenvolvimento**: é a equipe em si.

### XP eXtrem Programming

- **stand up meeting**: reuniões diárias em que os integrantes da equipe falam sobre o que fizerem / irão fazer. Tem duração, em média, de 30 minutos.

- **iterações ou releases**: a cada duas ou quatro semanas, o software irá ser incrementado de acordo com o desenvolvimento da equipe.

- **programação em par (pair programming)**: consiste na prática de dois programadores estarem trabalhando na mesma máquina na mesma tarefa. Há três motivos para isso: melhor aprendizado, concentração e qualidade.

- **desenvolvimento guiado a testes (TDD)**: todo o código e desenvolvimento, do início ao fim, visa ser testado continuamente. Por isso a presença constante adoção de automação de testes nesta metodologia.

- a adoção de **releases curtos** é outra característica. Isso possibilita que o sistema seja incrementado de maneira mais simples e objetiva, possibilitando um melhor trabalho.

- **código coletivo** juntamente com **refactoring** ajuda a manter o código mais robusto e manutenivel, pois, quanto mais pessoas olharem o código, maior a possibilidade de achar bugs e assim tornar o código melhor.

### É possível trabalhar com o Scrum e XP juntos?

Como foi possível ver, é possível trabalhar com os dois conjuntamente, tendo em vista que o foco do XP são boas práticas de programação, enquanto o Scrum se preocupa mais com a organização da equipe

---

## Ciclo de vida de um projeto

As informações a seguir foram extraídas do conteúdo programático da Unigranrio.

> Estabelecimento de uma sequencia de fases com o objetivo de realizar algo e garantir um bom gerenciamento.

### O que é o PMBOK

Segundo o PMBOK, ciclo de vida:

> Divide o desenvolvimento em fases que conectam o início de um projeto ao seu final, descrevendo trabalho técnico que deve ser realizado, as entregas que devem ser geradas em cada fase, o recurso envolvido e como controlar e aprovar cada fase.

O PMBOK define cinco grupos (fases) de processos:

+ **Iniciação**:
  + autoriza um projeto e o documenta
  + identifica as partes interessadas

+ **Planejamento**:
  + coleta requisitos
  + define o escopo do projeto
  + cria o EAP (abordado mais a frente)
  + estima custos entre outras coisas
  + define os padrões de qualidade

+ **Execução**:
  + materialização do que foi planejado

+ **Controle**:
  + monitora e controla a execução do projeto
  + realização do controle de qualidade

+ **Encerramento**:
  + lições aprendidas
  + projeto concluída

---

## EAP - Estrutura Analítica do Projeto

Segundo o material da faculdade:

> É uma decomposição hierárquica orientada à entrega do trabalho a ser executado pela equipe do projeto, para atingir os objetivos do projeto e criar as entregas necessárias.

A EAP organiza o projeto como um todo, divindindo o mesmo em menores partes, mais gerenciáveis, conhecidas como ***pacotes de trabalho***.

### Pacote de trabalho

É a menor parte gerenciável de um projeto. É o nível mais baixo do EAP, no qual é possível definir custos e prazos de maneira confiável.

---

## Controle de Projetos

> O controle de projetos é um processo necessário para garantir que os objetivos do projeto sejam alcançados através do monitoramento do progresso, e também visa identificar os desvios que devem ser tratados pela equipe.

Sendo assim, ele contem 3 fases:

+ **Monitoramento do projeto**
+ **Avaliação do desempenho do projeto**
+ **Ajustar e Intervir no projeto para fazer as mudanças que o trarão de volta ao planejado**

### Cronograma

Para tanto, é necessário ferramentas que auxiliam a essa tarefa, assim surgem os **cronogramas**

#### Cronograma de marcos

+ Mostra somente o início e fim das tarefas definidas como marcos

#### Cronograma detalhado

+ Representa todos os marcos e atividades do projeto

#### Cronograma sumarizado

+ Exibe apenas as iformações da atividade e de sua periodicidade

### Gráficos

#### Gráfico de Gantt

Permite a visualização do progresso do projeto. O objetivo é deixar a informação o mais transparente possível

![Exemplo de gráfico](https://d2myx53yhj7u4b.cloudfront.net/sites/default/files/2.PNG)

---

## Teoria de testes

> É a validação de requisitos propostos para o sistema. Validar aqui é utilizar o software exaustivamente, de maneira sistêmica buscando erros. O objetivo aqui é validar o software para que este vá para produção.

### Porquê testar?

Testar é importante porque possibilita a visualização de erros antes que o software vá para a produção. Um outro argumento a favor de testar, que veremos mais a frente, diz respeito ao fato de que testando, se melhora a qualidade do software, pois se garante que o mesmo irá possuir **confiabilidade**, **segurança** e **previsibilidade**.

### Técnicas de teste de software

#### Teste estrutural (caixa branca)

Visa testar o software pelo seu código, vendo se o mesmo possui a estrutura e coesão pretendidas. **É o teste a nível de componente**. Com esse teste é possível verificar se todas as estruturas possíveis foram percorridas e se o resultado foi o esperado depois disso.

#### Teste funcional (caixa preta)

Visa testar as funcionalidades do software visando saber se todas elas estão sendo atendidas. Ela é conhecida assim por não se importar em como o software foi construído, somente se suas funcionalidades foram atendidas.

### Tipos de testes

Há vários tipos de testes em que o objetivo é testar o software desde do nível de código (mais baixo nivel) até o nível do usuário (mais alto nível).

+ **Funcionalidade**: busca erros a nível de funcionalidade
+ **Interface**: verifica a usabilidade do software
+ **Desempenho**: verifica se o software atende as espectativas quando o comportamento do ambiente é esperado. Ex: testar se um server http responde com um bom desempenho quando recebe uma quantidade esperada de requisições.
+ **Carga (stress)**: visa testar o software com uma carga anormal de pressões do ambiente. Ex: testar se um server http responde com um bom desempenho quando recebe uma quantidade altamente anormal de requisições.
+ **Sensibilidade**: verifica se o sistema responde bem quando colocado em condições de instabilidade.
+ **Automático (automatizado)**: é testar de maneira automático e contínua o software.
+ **Regressão**: visa retestar partes do software que foram modificadas buscando erros que possam ter surgido.
+ **Alfa e beta**: os testes alfa acontecem quando o software é testado pelo desenvolvedor no ambiente do usuário. Já o teste beta é o inverso, quando o software é testado pelo desenvolvedor no ambiente do usuário.
+ **Aceitação**: teste realizado pelo usuário para validação dos requisitos.
+ **Segurança**: teste realizado para verificar a fragilidade do sistema quanto a invasões.

### Documento de plano de teste

Este documento visa fornecer um plano de como o software será testado e validado. Ele e fundamental por documentar o processo de teste como um todo. Tem-se um padrão internacional para criação de tais documentos que é a ISO IEEE-829.

---

## Qualidade de Software

> A qualidade de software é uma área de conhecimento da engenharia de software que tem o objetivo de garantir a qualidade do produto através da definição e normatização de processos de desenvolvimento.

Segundo Sommerville, há perguntas que norteiam a qualidade de software

+ Durante o processo de desenvolvimento os padrões de programação e documentação foram seguidos?
+ O software foi devidamente testado?
+ O software é suficientemente confiável para ser colocado em uso?
+ O desempenho do software é aceitável para uso normal?
+ O software é bem estruturado e compreensível?

### O CMMI e o modelo em estágios

CMMI é uma evolução do CMM e procura estabelecer um modelo único para o processo de melhoria corporativo, integrando diferentes modelos e disciplinas.
Então o CMMI se aplica a qualidade de software pois fornece às organizações uma direção sobre como ganhar controle de seu processo de desenvolvimento de software e como evoluir para uma cultura de excelência na gestão de software.

#### Os estágios do CMMI

+ Fase 1 - **Inicial (Ad-hoc)**: O nível 1 não possui áreas de processo.
+ Fase 2 - **Gerenciado**: processos já implementados.
+ Fase 3 - **Definido**: padronização de projetos.
+ Fase 4 - **Quantitativamente Gerenciado**: Coleta de dados.
+ Fase 5 - **Otimização**: Criatividade e feedback são usados para otimizar os processos.
