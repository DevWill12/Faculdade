#include <stdio.h>

int main() {
    int n, j, m;
    int i = 0;
    int cont = 0;

    printf("Digite o valor de n (quantidade): ");
    scanf("%d", &n);
    
    printf("Digite o valor de j (referência): ");
    scanf("%d", &j);
    
    printf("Digite o valor de m (módulo): ");
    scanf("%d", &m);

    printf("Os %d primeiros números naturais congruentes a %d módulo %d são:\n", n, j, m);

    while (cont < n) {
        if (i % m == j % m) {
            printf("%d ", i);
            cont++;
        }
        i++;
    }

    printf("\n");
    return 0;
}