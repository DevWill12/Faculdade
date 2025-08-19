#include <stdio.h>

int main() {
    int n, i;
    float x, y;
    int contador = 0;

    printf("Digite a quantidade de pontos para verificação: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Digite as coordenadas do ponto %d: ", i + 1);
        scanf("%f %f", &x, &y);

        int pertence = 0;

        if (x <= 0 && y <= 0 && y + x * x + 2 * x - 3 <= 0) {
            pertence = 1;
        }
        else if (x >= 0 && y + x * x - 2 * x - 3 <= 0) {
            pertence = 1;
        }

        if (pertence) {
            printf("O ponto pertence ao conjunto H.\n");
            contador++;
        } else {
            printf("O ponto não pertence ao conjunto H.\n");
        }
    }
    printf("Total de pontos que pertencem ao conjunto H: %d\n", contador);

    return 0;
}
