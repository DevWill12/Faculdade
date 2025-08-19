#include <stdio.h>

int main() {
    int grau, pontos, i, j;

    printf("Informe o grau do polinômio: ");
    scanf("%d", &grau);

    double coeficientes[grau + 1];
    for (i = 0; i <= grau; i++) {
        printf("Coeficiente a%d: ", i);
        scanf("%lf", &coeficientes[i]);
    }

    printf("Quantos valores de x deseja testar? ");
    scanf("%d", &pontos);

    double x[pontos], resultado[pontos];
    for (i = 0; i < pontos; i++) {
        printf("Valor de x%d: ",i + 1);
        scanf("%lf", &x[i]);
    }

    for (i = 0; i < pontos; i++) {
        double soma = 0, potencia = 1;
        for (j = 0; j <= grau; j++) {
            soma += coeficientes[j] * potencia;
            potencia *= x[i];
        }
        resultado[i] = soma;
    }

    printf("\nResultados:\n");
    for (i = 0; i < pontos; i++) {
        printf("p(%f) = %.2lf\n", x[i], resultado[i]);
    }

    return 0;
}

