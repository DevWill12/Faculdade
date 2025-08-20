#include <stdio.h>

int main(){

    int n;
    int i = 1;
    int soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    while (i <= n){
        soma = soma +i;
        i = i + 1;
    }

    printf("A soma dos primeiros %d números inteiros é: %d\n", n, soma);
    return 0;
}
