#include <stdio.h>

int main() {
    int n, i;
    char op;
    float n1, n2, resultado;

    printf("Digite o número de operações: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
    printf("Operação %d:\n", i);
    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);
    printf("Digite a operação:\n");
    scanf(" %c", &op);
    printf("Digite o segundo número:\n");
    scanf("%f", &n2);
    
    switch (op) {
        case '+':
        resultado = n1 + n2;
        break;
        case '-':
        resultado = n1 - n2;
        break;
        case '*':
        resultado = n1 * n2;
        break;
        case '/':
        if (n2 != 0)
        resultado = n1 / n2;
        else {
        printf("Erro: Divisão por zero!\n");
        continue;
        }
        break;
        default:
        printf("Operador inválido!\n");
        continue;
        }
        printf("Resultado da operação %d: %.2f\n", i, resultado);
    }

    return 0;
}