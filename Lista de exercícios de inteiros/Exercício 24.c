#include <stdio.h>


int ehPalindromo(int n) {
    int original = n;
    int invertido = 0;
    int digito;

    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }


    if (original == invertido) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    printf("Digite um número natural: ");
    scanf("%d", &n);

    if (ehPalindromo(n)) {
        printf("O número é palíndromo.\n");
    } else {
        printf("O número não é palíndromo.\n");
    }

    return 0;
}

