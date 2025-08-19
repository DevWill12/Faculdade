#include <stdio.h>

int main() {
    int n, m, i, j;
    float a[20], b[20], r[40] = {0};

    printf("Grau do polinômio p(x): ");
    scanf("%d", &n);
    printf("Coeficientes de p(x):\n");
    for (i = 0; i <= n; i++) {
        printf("a%d: ", i);
        scanf("%f", &a[i]);
    }

    printf("Grau do polinômio q(x): ");
    scanf("%d", &m);
    printf("Coeficientes de q(x):\n");
    for (i = 0; i <= m; i++) {
        printf("b%d: ", i);
        scanf("%f", &b[i]);
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            r[i + j] += a[i] * b[j];
        }
    }
    
    printf("Produto r(x) = ");
    for (i = 0; i <= n + m; i++) {
        printf("%.2fx^%d", r[i], i);
        if (i < n + m) printf(" + ");
    }
    printf("\n");

    return 0;
}



