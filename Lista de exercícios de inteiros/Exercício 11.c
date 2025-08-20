#include <stdio.h>

int main() {
    int n;
    int cont;
    int divisores = 0;

    printf("Digite um número para a verificação: ");
    scanf("%d", &n);

    for (cont = 1; cont <= n; cont++) {
        if (n % cont == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("Esse número é primo\n");
    } else {
        printf("Esse número não é primo\n");
    }

    return 0;
}
