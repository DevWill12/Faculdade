#include <stdio.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for (int i = 1; i <= expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main(){
    int a, b;
    int total = 0;
    int soma = 0;

    do{
        printf("Digite um par de numeros: ");
        scanf("%d %d", &a, &b);
        printf("(%d, %d)\n", a, b);

        if(a != 0) {
            int termo = potencia(a, b);
            printf("Resp = %d\n", termo);
            soma += termo;
            printf("Soma = %d\n", soma);
            total++;
        }
    } while (a != 0);

    printf("Total de pares: %d\n", total);
    return 0;
}
