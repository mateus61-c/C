#include <stdio.h>

int main(void) {

  char letra;

  printf("digite uma letra: ");

  // obtem apenas 1 character da entrada esejada
  letra = getc(stdin);
  printf("letra inserida\n");

  // imprime apenas 1 character
  putchar(letra);
  putchar('\n');
  return 0;
}
