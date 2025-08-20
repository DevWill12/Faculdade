#include <stdio.h>

int main(){

    int n;
    int impar = 1;
    int cont = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (cont < n){
        printf("%d ", impar);
        impar = impar + 2;
        cont++;
    }

    return 0;
}
