#include <stdio.h>

int main(void) {
  // reverva espaco para 2 variaveis inteiras
  int num1, num2;

  // atribuir valor a variavel
  num1 = 10;
  num2 = 20;

  // imprimir o valor real das variaveis
  printf("%d\n%d\n", num1, num2);

  printf("digite o valor de num1 e num2 ");

  // sobrescreve o valor das variaveis
  scanf("%d%d", &num1, &num2);
  // imprimi o valor real das variaveis ja sobrescritas
  printf("%d\n%d\n", num1, num2);
  return 0;
}
