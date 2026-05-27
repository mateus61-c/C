#include <stdio.h>

int main(void) {
  // reverva espaco para 2 variaveis inteiras
  float num1, num2;

  // atribuir valor a variavel
  num1 = 2,15;
  num2 = 7,54;

  // imprimir o valor real das variaveis
  printf("%f\n%f\n", num1, num2);

  printf("digite o valor de num1 e num2 ");

  // sobrescreve o valor das variaveis
  scanf("%f%f", &num1, &num2);
  // imprimi o valor das variaveis ja sobrescritas
  printf("%f\n%f\n", num1, num2);
  return 0;
}
