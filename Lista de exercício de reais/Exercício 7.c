#include <stdio.h>
#include <math.h>

int fatorial(int n) {
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    double x, termo, precisão;
    double seno  = 0;
    int k = 0;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite o valor da precisão: ");
    scanf("%lf", &precisão);

    do {
        termo = pow(-1, k) * pow(x, 2*k + 1) / fatorial(2*k + 1);
        seno += termo;
        k++;
    } while (fabs(termo) >= precisão);

    printf("Aproximação de sen(%.2lf) com precisão %.4lf é: %.4lf\n", x, precisão, seno);

    return 0;
}
