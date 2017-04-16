#include <stdio.h>
#include <stdlib.h>

#define tam 2

int convertHourMinutes (int hour) {
  return hour * 60;
}

int convertHour (int hour) {
  if (hour > 12) return hour - 12;
  return hour;
}

int calculate (int hourGame[tam][tam]) {
  int accHour = 0, accMinutes = 0;
  int hour1 = convertHour(hourGame[0][0]);
  int hour2 = convertHour(hourGame[1][0]);
  printf("Hora 1: %i\n", hour1);
  printf("Hora 2: %i\n", hour2);
  if (hour1 > hour2) {
    accHour = hour1 - hour2;
  }
  if (hour2 > hour1) {
    accHour = hour2 - hour1;
  }
  accMinutes = hourGame[0][1] + hourGame[1][1];
  printf("accHour: %i\n", accHour);
  printf("accMinutes: %i\n", accMinutes);
  return convertHourMinutes(accHour) + accMinutes;
}

int main() {

  int hours[tam][tam];

  printf("Digite a hora de inicio jogo: ");
  scanf("%i", &hours[0][0]);
  printf("Digite os minutos da hora de inicio jogo: ");
  scanf("%i", &hours[0][1]);

  printf("Digite a hora de termino jogo: ");
  scanf("%i", &hours[1][0]);
  printf("Digite os minutos da hora de termino jogo: ");
  scanf("%i", &hours[1][1]);

  printf("O tempo de duracao do jogo foi de: %i minutos \n", calculate(hours));
  return 0;
}
