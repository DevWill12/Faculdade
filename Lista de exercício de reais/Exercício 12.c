#include <stdio.h>

#define TAMANHO 1000

int main() {
  float soma1, soma2, soma3, soma4;
  float negativos, positivos;
  int i, sinal;
  
  soma1 = 0;
  sinal = -1;
  for (i = TAMANHO; i > 0; i--) {
    soma1 += (float) sinal / i;
    sinal = -sinal;
  }

  soma2 = 0;
  sinal = 1;
  for (i = 1; i <= TAMANHO; i++) {
    soma2 += (float) sinal / i;
    sinal = -sinal;
  }

  positivos = 0;
  negativos = 0;
  for (i = 1; i <= TAMANHO; i++) {
    if (i % 2 == 1)
      positivos += (float) 1 / i;
    else
      negativos += (float) 1 / i;
  }
  soma3 = positivos - negativos;

  positivos = 0;
  negativos = 0;
  for (i = TAMANHO; i > 0; i--) {
    if (i % 2 == 1)
      positivos += (float) 1 / i;
    else
      negativos += (float) 1 / i;
  }
  soma4 = positivos - negativos;

  printf("Primeira soma = %.20g\n", soma1);
  printf("Segunda soma = %.20g\n", soma2);
  printf("Terceira soma = %.20g\n", soma3);
  printf("Quarta soma = %.20g\n", soma4);

  return 0;
}
