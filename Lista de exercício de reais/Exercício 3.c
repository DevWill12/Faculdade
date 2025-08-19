#include <stdio.h>

int main() {
  int i, n;
  float x, y;
  int contador = 1;
  
  printf("Digite a quantiade de pontos: ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++){
    printf("Digite as coordenadas do ponto %d: ", contador);
    scanf("%f %f", &x, &y); 
    contador++;
    if (x >= 0 && y >= 0 && x*x + y*y <= 1)
      printf("O ponto pertence a região.\n");
    else
      printf("O ponto não pertence a região.\n");
  }
  
  return 0;
}