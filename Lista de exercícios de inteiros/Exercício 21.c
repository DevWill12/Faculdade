#include <stdio.h>

int main() {
    int n, anterior, atual, segmentos = 1;

    printf("Digite o número de elementos da sequência: ");
    scanf("%d", &n);

    printf("Digite os números: ");
    scanf("%d", &anterior);

    for (int i = 1; i < n; i++) {
        scanf("%d", &atual);
        if (atual != anterior) {
            segmentos++;
        }
        anterior = atual;
    }

    printf("Número de segmentos: %d\n", segmentos);
    return 0;
}
