# Comunicação de dados

# Modelo OSI

|  Aplicação |           É a camada em que há um contato direto com o usuário           |
|:----------:|:------------------------------------------------------------------------:|
| Transporte |                           Comunicação fim a fim                          |
|    Rede    |              Roteamento de pacotes, comunicação entre redes              |
|   Enlace   | Enquadramento da informação, controle de acesso ao meio e fluxo de dados |
|   Física   |      Interface com o meio de transmissão, que pode ser guiado ou não     |

# Conceitos básicos

+ Transmissor: é o cara que está transmitindo num determinado momento
+ Receptor: é o mininote que recebe os dados
+ Interface: dispositivo que faz ponte entre receptor / transmissor e o meio físico
+ Canal de comunicação: é o meio físico em si

Há também a classificação entre os equipamentos da rede:

+ ETD ou DTE - Dispositivo final (Equipamento terminal de dados);
+ ECD ou DCE - Interface (Equipamento de comunicação de dados);

## Tipos de Tranmissão

+ Simplex: transmissor transmite e receptor recebe. O fluxo no meio é unidirecional.
+ Half-duplex: transmissor transmite, mas pode receber, **não ocorre simultaneamente**. O meio é bidirecional.
+ Full duplex: transmissor transmite e recebe **ao mesmo tempo**. O meio também é bidirecional.

## Tipos de meios físicos

+ Guiados: são aqueles em que os dados trafegarão com um percurso **fisico** definido. Podem ser: par metálico, coaxial e fibra ótica.
+ Não guiados: São aqueles em que o meio físico não impoem um percurso aos dados. São eles: rádio terrestre (celular, frequencia e *spread spectrum*), satélite, wifi, infra vermelho.

## Tipos de rede

+ Determinística: garante disponibilidade de forma intermitente. Se você tem 5 megas, o tem indefinidamente, sem *oscilar*.
+ Estatística: não garante disponibilidade de forma intermitente. Ou seja, é possível que a rede *oscile*.

-----------------------------

# Comutação

+ Por que é necessário a comutação? Por que o meio, na internet é compartilhado. E também, é impossível que todos venham a falar ao mesmo tempo e se o fizessem, a rede não suportaria. Por isso torna-se necessário compartilhar este meio e os recursos dele. Tipos de comutação:

## Circuito

#### Conceito

A partir do estabelecimento da conexão, os pacotes irão seguir um caminho pre-determinado. Tem-se como exemplo famoso, a rede de telefonia.

#### Vantagens
+ Comunicação e recursos dedicados
+ Garantia de transmissão com taxa constante

#### Desvantagens
+ Tempo de estabelecimento da conexão > tempo de transmissão
+ Subutilização da rede

## Pacotes

#### Conceito

Não há um caminho pre-determinado na rede. Conhecida como técnica do datagrama confiável. Geralmente não é orientada a conexão, salvo quando se é construído um circuito virtual, em que se é orientado a conexão.

#### Vantagens
+ Mais perfomática
+ Uso otimizado do meio
+ Melhor compartilhamento

#### Desvantagens
+ Overhead de cabeçalhos para que o pacote consiga chegar ao destino 'sozinho'
+ Sem garantia de banda

-----------------------------

# Modulação

Técnica de interpretação de um sinal e transforma-lo em um outro sinal, com características diferentes do original.

> PS: não confundir com a ideia de MODEM. Nem todo sinal analógico ao ser modulado, o será para o sinal digital.

## Tipos de Modulação

+ Por amplitude: distancia entre o pico maior e menor de um onda
+ Frequencia: tempo que a onda leva para seguir seu fluxo completo
+ Fase: por 'onde' a onda começa

## Processos de chaveamento

+ ASK: modular através da alteração da amplitude
+ FSK: modular através da alteração da frequencia. Possui boa imunidade a ruídos se comparado ao anterior.
+ PSK: modular através da alteração da fase
+ QPSK: modular através da alteração da fase e quadratura. Permite mais combinações e por isso, transmite mais bits que as ateriores
+ QAM: modular através da alteração da amplitude, quadratura e fase. Permite muito mais combinações, mas exigem interpretadores mais inteligentes.
+ PCM: Muito utilizado em CODEC de transformação de sinal analógico para digital. Principal uso: sistemas VOIP.

-----------------------------

# Multiplexação

### Por que é necessário multiplexar o meio?

A banda passante, ou seja, a quantidade de dados que se quer passar em um canal, geralmente é **maior do que o meio físico pode suportar ou transportar**. Sendo assim, é necessário fazer com que este meio possa transportar mais dados em seu limite de banda. Tal processo, é conhecido como multiplexação. A ideia é compartilhar um mesmo meio físico para múltiplas canais de transmissão.

### Tipos de Multiplexação

+ **FDM**: eu multiplexo o meio, dividindo-o em diferentes frequências.

![Gráfico ilustrando a FDM](https://promader.files.wordpress.com/2015/03/fdm.jpg)

Perceba na imagem acima, que, no eixo y eu tenho uma frequência máxima imposta pelo meio. Eu divido este canal em múltiplas faixas. Transportando assim, mais dados de diferentes origens no mesmo canal. Geralmente esta técnica é usada quando há ociosidade de frequência no canal.

+ **TDM**: eu multiplexo o meio, alocando-o de acordo com o tempo. Esta técnica é usada geralmente, quando há ociosidade no canal relacionado ao tempo em que o mesmo fica ocioso.

+ **CDM**: eu divido o meio levando a informação ao mesmo tempo, ou na mesma frequência, mas com códigos diferentes.

O canal a ser alocado pode ser:

- Dedicado: redes determinísticas.
- Chaveado: redes estatísticas.

-----------------------------

# Camada de Enlace

Tem como função garantir a confiabilidade da transferência de dados na rede. Possui as seguintes funções:

+ Estabelecer o enlace de dados
+ Sincronização de dados
+ Segmentação e delimitação das unidades de rede (aqui quadros Ethernet, como exemplo)
+ Controle de erro e controle de fluxo

## Segmentação da rede

Como vimos, nesta camada, ela tem como função segmentar a rede. Mas por que segmentar? **Por que é necessário que os hosts na rede não tenham colisões desnecessárias**. Quais tipos de segmentação?

![Domínios de colisão e broadcast](./images/colisao-broadcast.png)

+ *Domínio de colisão*: Na rede acima, há 4 domínios de colisão. Por quê? Lembre-se: **domínio de colisão é por quais caminhos um pacote poderá passar na rede**. Outra regra de ouro: **hubs são interfaces 'burras', pois simplesmente passam para a frente o pacote, gerando um domínio de colisão, pois todos recebem os pacotes que chegam ao hub. Já o switch, é mais esperto e cria um domínio de colisão para cada host conectado**.
+ *Domínio de broadcast*: Na rede acima há 2 domínios de broadcast. Por quê? Lembre-se: pacotes broadcast são pacotes enviados para todos os hosts da rede. Só que eles param nos roteadores, sendo assim, os roteadores funcionam como segmentadores de redes broadcast.

## Dispositivos e suas funções

+ Nível físico: hub e repetidor -- mesmo domínio de colisão.
+ Nível enlace: switch e brigde -- separa os domínios de colisão, mas não os de broadcast.

## Quadro Ethernet

## Controle de fluxo

+ Por hardware: RTS e CTS.
+ Por software: frame relay e controle explícito e implícito.

## Controle de Acesso ao Meio

Por quê é necessário controlar o meio? Nem todos podem falar ao mesmo tempo porque gera colisão, e ao falarem, é necessário colocar 'ordem na casa' para a retomada da transmissão. Então, se tornou necessário estabelecer protocolos de acesso ao meio. São divididos em **Métodos de acesso baseado em contenção e sem contenção**

### Com contenção

Não existe uma ordem de acesso, então é possível que haja a colisão e a mesma precisa ser tratada. O principal é o CSMA/CD

+ CSMA/CD - cada nó da rede fica escutando a mesma e toma duas decisões: 1) caso não haja transmissão eu transmito; 2) caso haja, eu espero que a mesma seja terminada. E se houver colisão. O nó mais próximo emite um sinal de que houve colisão. E todos os outros esperam determinado tempo para transmitir novamente.

### Sem contenção

Não há colisão devido a ter um controle na hora da comunicação. Nestas  redes há o conceito de token, que funciona como uma permissão para transmitir ou não, se tem o token, transmite, não o tem, não transmite.

## Perdas

+ Por atenuação: devido a grandes distancias, o sinal poderá se perder ou ser atenuado, tornando-se necessário mecanismos para convertê-lo a um sinal digital, por exemplo, usando repetidores de sinal.
+ Por ruídos: toda rede tem os seus ruídos. A dificuldade está em identificá-los no meio do sinal propriamente dito.
+ Distorção: os dois acima acabam gerando a distorção, que é quando o sinal final, no receptor, não consegue ser compreendido perfeitamente devido as perda na hora da transmissão.

# Ethernet

Na camada de enlace há inúmeros protolos. Estes são conhecidos como a família 802 devido ao número do grupo de pesquisa responsável por essa camada. Os mais importantes são:

| Número | Assunto                                 |
|--------|-----------------------------------------|
| 802.2  | LLC - Trata do Link do Controle Lógico  |
| 802.3  | Ethernet                                |
| 802.11 | Lan sem fio                             |
| 802.15 | Redes pessoais (Bluetooth como exemplo) |
| 802.16 | Redes de banda larga (WIMax)            |

## 802.2 - LLC

O link de controle lógico provê uma interface entre a camada de Rede e os métodos de acesso ao meio. Ele é importante devido ao fato de esta interface tornar desnecessária qualquer conhecimento de implantação do método de acesso a rede pela camada de Rede.

## 802.3 - Ethernet

Utiliza o método de acesso CSMA/CD

Imagens descrevendo como funciona o processo de transmissão no CSMA/CD

![Imagem 1](./images/tela1.png)
![Imagem 2](./images/tela2.png)
