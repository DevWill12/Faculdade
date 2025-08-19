#include <stdio.h>
#include <math.h>

int fatorial(int n) {
    int fat = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    double x, cosprox = 1;
    int n;
    int k;

    printf("Digite o valor de x (em radianos): ");
    scanf("%lf", &x);
    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    for (k = 1; k < n; k++) {
        double termo = pow(-1, k) * pow(x, 2*k) / fatorial(2*k);
        cosprox += termo;
    }
    
    printf("Aproximação de cos(%.lf) com %d termos é: %.4lf\n", x, n, cosprox);

    return 0;
}
