create table cliente(
  num_identificacao serial primary key,
  nome varchar(30) not null,
  logradouro varchar(20),
  número integer,
  complemento varchar(10),
  bairro varchar(20),
  cidade varchar(20),
  uf char(2),
  cep char(8),
  data_nascimento date,
  sexo char(1)
);

create table telefone(
  codigo serial primary key,
  num_identificaçãoCliente integer,
  tipo varchar(10) check(tipo in('celular',
  'residencial', 'comercial', 'radio')),
  numero integer
);

create table filme(
  identificador serial primary key,
  titulo VARCHAR(20) not null,
  ano_producao char(4)
);

create table dvd(
  codigo serial primary key,
  data_compra date not null,
  filme_identificador integer references filme (identificador)
);

create table locacao(
  num_cliente integer references cliente (num_identificacao),
  dvd_codigo integer references dvd (codigo),
  data_hora_locacao date not null,
  data_hora_devolucao date
);

create table ator(
  codigo serial primary key,
  nome varchar(30) not null,
  sexo char(2) check (sexo in('F', 'M', 'f', 'm')) not null,
  nacionalidade varchar(20),
  data_nascimento date not null,
  data_falecimento date
);

create table diretor(
  codigo serial primary key,
  nome varchar(30) not null,
  sexo char(2) check (sexo in('F', 'M', 'f', 'm')) not null,
  nacionalidade varchar(20),
  data_nascimento date not null,
  data_faleciment date
);

create table direcao(
  filme_identificador integer references filme (identificador),
  diretor_codigo integer references diretor (codigo)
);

create table atuacao(
  filme_identificador integer references filme (identificador),
  ator_codigo integer references ator(codigo)
);
