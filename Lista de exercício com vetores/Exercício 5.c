#include <stdio.h>
#include <math.h>

int main() {
    double x, y, px, py, r[100];
    int n, k = 0;

    printf("Centro (x y): ");
    scanf("%lf %lf", &x, &y);
    printf("Quantidade de pontos: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Ponto %d (x y): ", i+1);
        scanf("%lf %lf", &px, &py);
        double d = sqrt((px - x)*(px - x) + (py - y)*(py - y));
        d = round(d * 1000) / 1000;
        int rep = 0;
        for (int j = 0; j < k; j++)
            if (fabs(r[j] - d) < 0.001) rep = 1;
        if (!rep) r[k++] = d;
    }
    
    for (int i = 0; i < k-1; i++)
        for (int j = i+1; j < k; j++)
            if (r[i] > r[j]) {
                double tmp = r[i]; r[i] = r[j]; r[j] = tmp;
            }
    printf("------------------------------");        
    printf("\nRaios distintos:\n");
    for (int i = 0; i < k; i++)
        printf("%.3lf\n", r[i]);

    return 0;
}
