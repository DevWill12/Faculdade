#include <stdio.h>

int main() {
    int n, i;

    printf("Grau do polinômio: ");
    scanf("%d", &n);

    double coef[n + 1], derivada[n];
    
    for (i = 0; i <= n; i++) {
        printf("Coeficiente a%d: ", i);
        scanf("%lf", &coef[i]);
    }
    
    for (i = 1; i <= n; i++) {
        derivada[i - 1] = i * coef[i];
    }

    printf("\nCoeficientes da derivada:\n");
    for (i = 0; i < n; i++) {
        printf("a'%d = %.2lf\n", i, derivada[i]);
    }

    return 0;
}


