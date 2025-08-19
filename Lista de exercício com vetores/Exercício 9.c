#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n, n1, i, j; 
    int contador = 1;
    int b1 =0; int b2 =0; int b3;   
    printf("Tamanho sequência 1: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        printf("Digite %d número da sequência(Entre 0 e 9): ", contador);
        scanf("%d", &a[i]);
        if (a[i] > 9 || a[i] < 0){
            printf("Número Inválido!");
            return 0;
        }
        for(j = 0; j < n; j++){
        }
        b1 = b1 * 10 + a[i];
        contador = contador + 1;
    }

    contador =1;

    printf("Tamanho sequência 2: ");
    scanf("%d", &n1);

    for(i = 0; i < n1; i++){
        printf("Digite %d número da sequência(Entre 0 e 9): ", contador);
        scanf("%d", &b[i]);
        if (b[i] > 9 || b[i] < 0){
            printf("Número Inválido!");
            return 0;
        }
        for(j = 0; j < n; j++){
        }
        b2 = b2 * 10 + b[i]; 
        contador = contador + 1;
    }
    b3 = b2 + b1;
    
    printf("Os dois números são: %d e %d, a soma entre eles é: %d.", b1, b2, b3);
    return 0;
}