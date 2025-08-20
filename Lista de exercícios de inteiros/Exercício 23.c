#include <stdio.h>

int main() {
    int n, original, invertido = 0, digito;

    printf("Digite um número natural: ");
    scanf("%d", &n);

    original = n;
    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    if (original == invertido) {
        printf("O número é palíndromo.\n");
    } else {
        printf("O número não é palíndromo.\n");
    }

    return 0;
}

