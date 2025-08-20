#include <stdio.h>
#include <math.h>

int main(){

    int base, expoente;

    printf("Digite um número inteiro para base: ");
    scanf("%d", &base);
    printf("Digite um número inteiro (não negativo) para expoente: ");
    scanf("%d", &expoente);

    pow(base, expoente);
    printf("O resultado de %d elevado a %d é: %.0f\n", base, expoente, pow(base, expoente));

    return 0;
}
