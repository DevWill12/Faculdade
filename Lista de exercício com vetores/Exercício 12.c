#include <stdio.h>

int main() {
    int grau, i, j, m;
    float coef[10], q[10], r, resto;

    printf("Grau do polinômio: ");
    scanf("%d", &grau);

    printf("Coeficientes (do maior grau até o termo constante):\n");
    for (i = 0; i <= grau; i++) {
        printf("a%d: ", i);
        scanf("%f", &coef[i]);
    }

    printf("Número de valores de r: ");
    scanf("%d", &m);

    for (j = 0; j < m; j++) {
        printf("\nr: ");
        scanf("%f", &r);

        q[0] = coef[0];
        for (i = 1; i < grau; i++) {
            q[i] = coef[i] + q[i - 1] * r;
        }
        resto = coef[grau] + q[grau - 1] * r;

        printf("q(x): ");
        for (i = 0; i < grau; i++) {
            printf("%.2fx^%d", q[i], grau - 1 - i);
            if (i < grau - 1) printf(" + ");
        }

        printf("\nResto: %.2f\n", resto);
    }

    return 0;
}


