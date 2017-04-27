#!/bin/bash

# Disponibilizar uma agenda telefônica que permita executar as seguintes operações: criar, recuperar, ordenar, atualizar e remover contatos. Além de operações para informar o estado da agenda (a quantidade de contatos existentes na agenda ou a quantidade de espaço disponível para novos contatos) e os aniversariantes do dia ou mês.

#Campos mínimos da agenda telefônica:

#- Nome

#- Sobrenome

#- Telefone fixo (dd) (telefone)

#- Telefone celular (dd) (telefone)

#- Data de aniversário


# funções
showMenu () {
  clear
  echo "------------------------------------------"
  echo "                  MENU                    "
  echo "------------------------------------------"
  echo "Olá, bem vindo a agenda telefonica"
  lines=$(wc -l agenda.txt | awk '{print $1}')
  echo "Há $lines contato(s) na agenda"
  echo "Digite o número da opção que quer escolher:"
  echo "1 - Criar contato"
  echo "2 - Visualizar um contato específico"
  echo "3 - Ordenar contatos"
  echo "4 - Editar contato"
  echo "5 - Remover contato"
  echo "0 - Sair da agenda"
  printf "Digite sua escolha: "
  read choise

  case $choise in
    1) createContact ;;
    2) searchContact ;;
    3) sortContacts ;;
    4) editContact ;;
    5) removeContact ;;
  esac
}

goMenu () {
  printf "Gostaria de voltar ao menu? (s/n): "
  read op
  case $op in
    s) showMenu ;;
    n) $1 ;;
  esac
}

createContact () {
  clear
  echo "------------------------------------------"
  echo "            ADICIONAR CONTATO             "
  echo "------------------------------------------"
  echo "Adicionando um contato"
  printf "Digite o nome: "
  read name
  printf "Digite o sobrenome: "
  read lastName
  printf "Digite o telefone fixo (dd)XXXX-XXXX: "
  read telephone
  printf "Digite o telefone celular (dd)9XXXX-XXXX: "
  read phone
  printf "Digite a data de aniversario dd/mm/aaaa: "
  read birthday
  echo "$name : Nome: $name $lastName, telefone $telephone, celular $phone, nasceu em $birthday" >> agenda.txt
  showMenu
}

searchContact () {
  clear
  echo "------------------------------------------"
  echo "             PROCURAR CONTATO             "
  echo "------------------------------------------"
  printf "Digite um nome para pesquisa: "
  read search
  cut -d : -f1 agenda.txt | grep $search agenda.txt -i
  goMenu searchContact
}

sortContacts () {
  clear
  echo "------------------------------------------"
  echo "            ORDERNAR CONTATOS             "
  echo "------------------------------------------"
  cp agenda.txt agenda.txt-bkp
  sort agenda.txt-bkp > agenda.txt
  rm agenda.txt-bkp
  echo "Os contatos foram ordenados"
  goMenu sortContacts
}

removeContact () {
  clear
  echo "------------------------------------------"
  echo "              REMOVER CONTATO             "
  echo "------------------------------------------"
  printf "Digite o nome do contato para deletar, confira se esse contato existe antes: "
  read contact
  cp agenda.txt agenda.txt-bkp
  grep $contact -iv agenda.txt-bkp > agenda.txt
  rm agenda.txt-bkp
  echo "Contato deletado com sucesso"
  goMenu removeContact
}

editContact () {
  clear
  echo "------------------------------------------"
  echo "               EDITAR CONTATO             "
  echo "------------------------------------------"
  printf "Digite o nome do contato que queres editar: "
  read search
  result=$(cut -d : -f1 agenda.txt | grep $search agenda.txt -i)
  echo $result > lixo
  lines=$(wc -l lixo | awk '{print $1}')
  if [[ lines == 0 ]]; then
    echo "A sua pesquisa não retornou nenhum resultado!"
    goMenu
  fi
  echo "O contato como esta hoje: $result"
  printf "Digite o nome: "
  read name
  printf "Digite o sobrenome: "
  read lastName
  printf "Digite o telefone fixo (dd)XXXX-XXXX: "
  read telephone
  printf "Digite o telefone celular (dd)9XXXX-XXXX: "
  read phone
  printf "Digite a data de aniversario dd/mm/aaaa: "
  read birthday
  cp agenda.txt agenda.txt-bkp
  grep $search -iv agenda.txt-bkp > agenda.txt
  rm agenda.txt-bkp lixo
  echo "$name : Nome: $name $lastName, telefone $telephone, celular $phone, nasceu em $birthday" >> agenda.txt
  goMenu
}

main () {
  test -f agenda.txt || touch agenda.txt
  echo "------------------------------------------"
  echo "                 AGENDA                   "
  echo "------------------------------------------"
  showMenu
}

clear
main
