#include <stdio.h>

int main() {
  
    int a, b, resto;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }

    printf("O maior divisor comum desses dois números é %d", a);

    return 0;
