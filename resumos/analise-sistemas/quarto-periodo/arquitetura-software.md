# Arquitetura e Processos de Software

## RUP - Rational Unified Process

Surgiu como um processo iterativo e incremental. Ao fim dos anos 90, ainda estava sobre a responsabilidade da Rational Software, porém, atualmente está na responsabilidade da IBM.

### Características principais

* Iterativo e incremental: divide o processo em 4 fases.
* Gerência de Requisitos: são completamente documentados e analisados.
* Modelagem visual e padronizada: UML é adotado como única ferramenta de modelagem
* Desenvolvimento baseado em componentes
* Controlar mudanças
* Verificar a qualidade

O RUP compoem-se de 3 perspectivas: **estáticas**, **dinâmica** e **prática**

### Elementos estáticos

* Papeis (Quem?): comportamento e responsabilidade de um indivíduo em uma equipe
* Produtos de trabalho (O que?): produto resultante de uma tarefa
* Tarefas (Como?): unidade de trabalho
* Fluxo de Trabalho (Quando?)

Os fluxos de trabalho podem estar inseridos nas seguintes disciplinas:

* **Modelagem de Negócio (Engenharia)**: estabelece o entendimento claro entre os *stakeholders*, de maneira a entender se o negócio será impactado de maneira positiva pelo software que será produzido. Serão usadas as técnicas já conhecidas de modelagem de Software.
* **Requisitos (Engenharia)**: estabelece os requisitos do sistema, ou seja, o que ele se propoem a fazer. Aqui são construídos os diagramas de casos de uso para modelar os requisitos funcionais.
* **Análise e Projeto (Design) (Engenharia)**: traduzir os requisitos em uma especificação de projeto. Consiste em obter uma visão do que o sistema deve fazer, a partir do requisitos funcionais.
* **Implementação (Engenharia)**: é a já conhecida implementação
* **Teste (Engenharia)**: consiste em avaliar a qualidade do software
* **Implantação (Engenharia)**: distribuir o software construído aos usuários
* **Gestão do Projeto (Apoio)**: se concentra em 3 aspectos:
	* Planejamento do projeto
	* Gerência de Risco
	* Monitoramento de progresso
* **Gerenciamento de Configuração e Mudança (Apoio)**: manter a integridade dos artefatos no processo e manter informações sobre sua evolução
* **Ambiente (Apoio)**: oferecer suporte ao projeto, com ferramentas e processos apropriados

### Fases do RUP

#### Iniciação

Objetivos:
* Estabelecer o escopo do projeto e limites
* Encontrar casos de uso críticos
* Apresentar arquitetura candidata
* Estimar custo e risco

Produtos:
* Visão de negócio
* Modelo de Caso de Uso
* Especificação de Requisitos
* Glossário de termos-chave
* Lista de riscos e planos de contingência

#### Elaboração

Objetivos:
* Definir e validar a arquitetura
* Criar plano para a fase de construção

Produtos:
* Modelo de casos de uso completo
* Descrição de Arquitetura de Software
* Plano de desenvolvimento do projeto
* Protótipo de arquitetura executável

#### Construção

Objetivos:
* Minimizar custos do desenvolvimento
* Obter versões funcionais

Produtos:
* Modelos completos
* Arquitetura da aplicação completa
* Versão operacional do sistema

#### Transição

Produtos:
* Protótipo operacional
* Documentação completa
* Caso de negócio completo

[Este link](https://sieodoesteves.files.wordpress.com/2014/10/rup-fases.jpg) mostra um diagrama de como está dividido os fluxos de trabalho dentro das diferentes fases do RUP

## Métodos Ágeis

### Manifesto Ágil

Evento ocorrido em 2001, nos EUA. Neste evento, foi criado o documentário de mesmo nome, com alguns valores:

* Indivíduos e interação mais que processos e ferramentas;
* Software funcionando mais que documentação abrangente;
* Colaboração com o cliente mais que negociação de contratos;
* Responder a mudanças mais que seguir um plano

### Princípios

* Entrega continua e tempestiva de software
* Mudanças nos requisitos são bem-vindas, mesmo nas fases finaisdo desenvolvimento
* Releases curtas
* Participação ativa e muito próxima do cliente
* Construir projetos em torno de indivíduos motivados
* Previlegiar a conversa franca
* O software de trabalho é a principal medida de progresso.
* Processos ágeis promovem o desenvolvimento sustentável.
*  Atenção contínua à excelência técnica e um bom design aumentaa agilidade.
* Há uma busca de melhoramento contínua
* As melhores definiçõesarquiteturais e de design,além das melhoresespecificações de requisitos, emergem de equipes auto-organizadas
* Seja simples, isto é, foque no que é de fato necessário e importante ao cliente

### Práticas Ágeis

* **Integração contínua**: busca incessante e continua da integração dos diferentes membros da equipe(s)
* **Equipe completa**: busca por equipes interdisciplinares
* **Propriedade coletiva do código**: o código e de propriedade e responsabilidade de todos
* **Releases curtas**
* **Refatoração**: todo código legado, ao ser mexido, precisa ser melhorado e refatorado
* **Busca por padrões de codificação**
* **Visibilidade do projeto**: o andamos do projeto e visto e acompanhado por todos
* **Backlog do produto**
* **Reuniões em pé**

### Metodologias Ágeis

* XP: eXtreme Programming
* SCRUM
* Kanban

## Scrum

E um arcabouço (framework) de processo usado para gerenciar o desenvolvimento de software.

Colocar link da formação Scrum do Rugby

Ele se baseia em três pilares:

* **Transparência**: significa garantir que os aspectossignificativos do processo devem ser visíveis para os envolvidos.
* **Inspeção**: os usuários do Scrum devem constantemente inspecionar os artefatos do projeto, visando cumprir uma meta a curto prazo.
* **Adaptação**: se um inspetor visualizar que um artefato possui um problema, ele precisa ser ajustado.

### Componentes do Scrum

#### Time Scrum

* Product Owner: pessoa responsável pela gerência do Backlog do produto, como por exemplo, caracterizar cada item do projeto. Qualquer mudança de prioridade precisa ser vista com o PO.
* Equipe de Desenvolvimento: formado pelos desenvolvedores do time.
* Scrum Master: e o cara responsável por garantir que o time esteja entregando. Prática o que se chama de liderança servidora. Auxilia tanto a equipe quanto o PO.

#### Atividades do Scrum

* Planejamento de Sprint: o Scrum Master trabalha de maneira a que todos os envolvidos entendam a importância dessa reunião. O objetivo aqui e pegar o Backlog de Produto, e determinar o Backlog de Sprint, com o entregável final.
* Reunião diária (Daily Scrum): evento de 15 minutos, em que os integrantes do time dizem como estão sendo realizadas suas tarefas.
* Revisão do Sprint: realizada ao final do Sprint, cujo objetivo e inspecionar o incremento feito e atualizar o Backlog do Produto, se necessário.

#### Retrospectiva do Sprint

Momento que se verifica se há coisas a melhorar em relação ao desenvolvimento e metodologia empregadas no último Sprint.

#### Backlog do Produto

É uma lista ordenada por prioridade com todas as tarefas concernentes ao projeto

## XP - eXtreme Programming

> Faça mais do que funciona e faça menos do que não funciona. Kent Beck

### Valores do XP

* **Simplicidade**: todo projeto baseado no XP busca ser o mais simples e funcional possível. Tal simplicidade se reflete no processo de desenvolvimento, sendo assim, a quantidade de artefatos é reduzida para: *requisitos*, *planos* e o *produto*.
* **Comunicação** 
* **Retroalimentação**: o XP é um método orientado a feedbacks, em que constantemente se busca ter feedbacks de todos os envolvidos no produto, desde o cliente até o desenvolvedor.
* **Coragem**

### Processo do XP

O XP é um processo de software iterativo e incremental. Cada projeto é subdividido em projeto menores, até chegar ao menor projeto, a *release*, que é um incremento que faça sentido para o negócio.

1. **Jogo do Planejamento**: consiste em três etapas
	1. **Exploração**: o cliente escreve as estórias de usuário em cartões. Aqui o cliente define e deixa claro o que ele espera daquela funcionalidade
	2. **Planejamento**: negociação e estimar prazos para execução das estórias.
	3. **Direção**: delimitado os prazos, é necessário assegurar que os mesmos serão cumpridos.
2. **Desenvolvimento**: iterações de 2 a 3 semanas, para o desenvolvimento das estórias de usuários planejadas e priorizadas

### Práticas do XP

* **Jogo do Planejamento**
* **Pequenas versões**
* **Design Simples**
* **Metáfora**: é uma simples descrição de como o sistema funciona
* **Teste contínuo**: TDD
* **Refatoração “Impiedosa”**: se é possível refatorar (simplificar o código), refatore.
* **Programação em pares**
* **Propriedade Coletiva do Código**: o código (produto), é responsabilidade de todos
* **Integração Contínua**
* **Semana de Trabalho de 40 horas (Ritmo Sustentável)**: horas extras são evitadas
* **Cliente no Local (On-site)**
* **Padrões de Codificação**

## Gerência de Configuração

> Disciplina que identifica a configuração do sistema em diferentes momentos, visando o controle das modificações nesse sistema

A Gerência de Configuração é reconhecidade pela norma ISO/IEC12207 e é prevista formalmente no RUP.

O GC sempre se baseia em alguns padrões. Tais padrões definem:

* Como os items que compoem o software são identificados
* Como as mudanças são gerenciadas
* Como novas releases são criadas

A GC sempre está relacionada à garantia de qualidade do software. Garantir a Qualidade aqui, é pretender que os padrões de qualidade estabelecidos, sejam cumpridos.

### Planejamento da Gerência da Configuração

O planejamento deve:

* Identificar a equipe e as ferramentas que serão usadas
* Estabeler um cronograma das atividades
* Identificar como os dois itens anteriores se relacionam

Com uma boa GC, é possível ter em mãos algumas métricas de qualidade:

* Índice de retrabalho
* Tempo médio entre falhas
* Modularidade dos componentes

Um bom planejamento, precisa levar em consideração alguns fatores importantes, como se um módulo interfere em outro, se o projeto possui geradores de documentação e como gerá-los a cada *release*, entre outras coisas.

### Plano de Gerenciamento de Configuração de Software

Qualquer mudança e resultado do planejamento, precisa ser registrado num plano de gerenciamento de configuração de software. Este documento servirá de referência no projeto.

#### Monitoração da Gerência da Configuração

Após planejado e criado o plano, é necessário monitorá-lo.

#### Métricas e Medidas de Gerência da Configuração

É possível também medir como está andando o gerenciamento do software. Algumas métricas que são usadas:

* Tempo para realização de mudanças
* Tempo para compilação do sistema
* Índice de aceitação a mudanças

### Identificação de Configuração de Software

Caracteriza os itens que serão controlados, bem como estabelece os esquemas de identificação para tais itens quando novas releases forem sendo feitas.

#### Identificação dos Itens a Serem Controlados

1. Entender a configuração do software no contexto da configuração do
sistema
1. Selecionar os itens de configuração de software
2. Desenvolver uma estratégia para rotular os itens de configuração de
software
4. Descrever os relacionamentos entre os itens

Alguns conceitos:

* **Item de Configuração do Software**: é uma parte integrante do software que será gerenciado. Pode ser uma documentação ou o código fonte, entre outros
* **Relacionamentos entre os Itens de Configuração de Software**: é importante entender como os diferentes itens se relacionam, de maneira a entender os impactos que um pode causar no outro.
* **Versão**: é um item de configuração em um dado momento. Mostra a evolução de um item, também.
* **Baseline**: consiste num conjunto de itens que compoem o software em um dado momento. É como uma fotografia (*snapshot*)
* **Biblioteca**: segundo a IEEE 610, `Uma biblioteca de software é uma coleção controlada de software e documentação relacionada, sendo projetada para auxiliar no desenvolvimento, uso e manutenção de software`.
* **Controle de Mudanças**: abrange o processo de quais mudanças serão feitas, aprovação destas mudanças entre outras coisas.
* **Gerenciamento de Liberações**: engloba a identificação, empacotamento e a entrega dos itens que estão no *baseline* do produto.
