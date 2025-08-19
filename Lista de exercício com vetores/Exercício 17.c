#include <stdio.h>

int main()
{
    int n, sequência[100];
    int i;
    
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);
    
    printf("Digite os números da sequência: ");
    for(i = 0; i < n; i++){
        scanf("%d", &sequência[i]);
    }
    
    int maxSoma = sequência[0];
    int somaAtual = sequência[0];
    int inicio = 0, fim = 0, tempInicio = 0;
    
    for (i = 1; i < n; i++) {
        if (somaAtual < 0) {
            somaAtual = sequência[i];
            tempInicio = i;
        } else {
            somaAtual += sequência[i];
        }
        
    if (somaAtual > maxSoma) {
            maxSoma = somaAtual;
            inicio = tempInicio;
            fim = i;
        }
    }
    
     printf("\nSegmento de soma máxima: ");
    for (i = inicio; i <= fim; i++) {
        printf("%d ", sequência[i]);
    }

    printf("\nSoma máxima: %d\n", maxSoma);

    
    return 0;
}