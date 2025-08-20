#include <stdio.h>

int main(){
    int n, atual, anterior, comprimento = 1, max_comprimento = 1;

    printf("Digite o número de elementos da sequência: ");
    scanf("%d", &n);

    printf("Digite os números: ");
    scanf("%d", &anterior);

    for (int i = 1; i < n; i++){
        scanf("%d", &atual);
        if (atual > anterior) {
            comprimento++;
        } else {
            if (comprimento > max_comprimento){
                max_comprimento = comprimento;
            }
            comprimento = 1;
        }
        anterior = atual;
    }

    if (comprimento > max_comprimento) 
        max_comprimento = comprimento;
    

    printf("Comprimento do segmento crescente máximo: %d\n", max_comprimento);
    return 0;
}
