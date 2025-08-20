#include <stdio.h>

int main() {
    
    int a, b, c;
    int temp;

    printf("Digite 3 número naturais: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c){
        temp = b;
        b = c;
        c = temp;
    }

    printf("Os números em ordem crescente são: %d %d %d\n", a, b, c);

    return 0;
}