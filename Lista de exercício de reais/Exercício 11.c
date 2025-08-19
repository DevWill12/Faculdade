#include <stdio.h>

int main() {
   
    int n, i;
    float s = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
    s = s + (float)i / (n - i + 1);
    }    
    printf("Total da soma: %.2f", s);
    
    return 0;
    }