#include <stdio.h>

int main() {
    int v = 0;
    int tf, tp, i, j;
    char frase[100], palavra[100];

    printf("Digite o tamanho da frase: ");
    scanf("%d", &tf);
    printf("Digite a frase: ");
    for (i = 0; i < tf; i++){ 
    scanf(" %c", &frase[i]);
    }
    
    printf("Digite o tamanho da palavra: ");
    scanf("%d", &tp);
    printf("Digite a palavra: ");
    for (i = 0; i < tp; i++){ 
    scanf(" %c", &palavra[i]);
    }

    printf("Frase: ");
    for (i = 0; i < tf; i++){ 
    printf("%c", frase[i]);
    printf("\nPalavra: ");
    }
    
    for (i = 0; i < tp; i++){ 
    printf("%c", palavra[i]);
    printf("\n");
    }

    for (i = 0; i <= tf - tp; i++) {
        if (frase[i] == palavra[0]) {
            for (j = 1; j < tp && frase[i + j] == palavra[j]; j++);
            if (j == tp) v++;
        }
    }

    printf("Ocorrências na frase: %d\n", v);
    return 0;
}
