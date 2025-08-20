#include <stdio.h>

int main(){
    
    int n, x = 1;
    int prod;

    printf("Digite um suposto número triangular inteiro não negativo: ");
    scanf("%d", &n);

    while(1){
        prod = x * (x + 1) * (x + 2);

        if(prod == n){
            printf("%d é um número triangular, produto da multiplicação de (%d * %d * %d)\n", n, x, x+1, x+2);
            return 1;
        }
        if(prod > n){
            printf("Esse níumero não é triangular");
            return 1;
        }
    x++;
    }
    
    return 0;
}
