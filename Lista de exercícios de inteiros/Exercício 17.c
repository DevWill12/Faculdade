#include <stdio.h>

int main() {
    int decimal, binario[32], i = 0;

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("O número em binário é: 0\n");
        return 0;
    }

    while (decimal > 0) {
        binario[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("O número em binário é: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");

    return 0;
}