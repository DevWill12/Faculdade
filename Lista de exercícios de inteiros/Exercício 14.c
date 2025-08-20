#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, fib;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        fib = 0;
    } else if (n == 1) {
        fib = 1;
    } else {
        for (i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("F(%d) = %d\n", n, fib);

    return 0;
}
