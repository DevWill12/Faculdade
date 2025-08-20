
#include <stdio.h>

int main() {
    
    int a, b, c, hip, cat1, cat2;

    printf("Digite de um triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a >= b && a >= c){
        hip = a;
        cat1 = b;
        cat2 = c;
    } else if(b >= a && b >= c){
        hip = b;
        cat1 = a;
        cat2 = c;
    } else{
        hip = c;
        cat1 = a;
        cat2 = b;
    }

    if(hip * hip == cat1 * cat1 + cat2 * cat2){
        printf("É um triangulo retangulo");
    }  else{
        printf("Não é um triangulo rentangulo");
    }

    return 0;
}