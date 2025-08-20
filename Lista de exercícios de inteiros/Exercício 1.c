#include <stdio.h>

int main() {
    int n, quad;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    scanf("%d", &n);

    while (n != 0) {
        quad = n * n;
        printf("O quadrado de %d é %d\n", n, quad);
        scanf("%d", &n);
    }

    printf("Encerrando o programa.\n");

    return 0;
}
