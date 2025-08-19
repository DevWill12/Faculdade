#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void farey(int n) {
    int a = 0, b = 1, c = 1, d = n;

    printf("%d/%d\n", a, b);

    while (c <= n) {
        int k = (n + b) / d;
        int e = k * c - a;
        int f = k * d - b;

        a = c;
        b = d;
        c = e;
        d = f;

        if (mdc(a, b) == 1)
            printf("%d/%d\n", a, b);
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    farey(n);
    return 0;
}