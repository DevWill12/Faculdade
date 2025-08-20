#include <stdio.h>

int main(){
    
    int n, i, j;
    int cont = 0;
    int num = 0;

    printf("Digite a quantidade de números naturais para a sequência (caso não queira o 0 como um multiplo, adicionar +1): ");
    scanf("%d", &n);

    printf("Digite o valor de i\n");
    scanf("%d", &i);

    printf("Digite o valor de j\n");
    scanf("%d", &j);

    printf("Os primeiros %d números naturais multiplos de %d e %d sãi: ", n, i, j);

    while(cont < n){
        if(num % i == 0 && num % j == 0){
            printf("%d", num);
            cont++;

            if(cont < n){
                printf(", ");
            }
        }
        num++;
    }
    printf("\n");

    return 0;
}
