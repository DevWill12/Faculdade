#include <stdio.h>

int main()
{
    int n, k, sequência[100];
    int i, m, j;
    int sinal = 0;
    
    
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);
    
    printf("Digite os números da sequência: ");
    for (i = 0; i < n; i++){
    scanf("%d", &sequência[i]);
    }
    
    for (m = 1; m <= n / 2 && !sinal; m++) {
    for (i = 0; i <= n - 2 * m && !sinal; i++) {
    sinal = 1;
        for (j = 0; j < m; j++) {
        if (sequência[i + j] != sequência[i + m + j]) {
            sinal = 0;
            break;
    }
    }
    if (sinal) {
    printf("Segmentos iguais encontrados em i = %d com tamanho = %d\n", i, m);
    }
    }
    }
    
    if (!sinal) {
    printf("Nao ha segmentos iguais consecutivos.\n");
    }
    
    return 0;
}