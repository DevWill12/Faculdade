#include <stdio.h>

int main()
{
    float vh = 0;
    int n, i;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
    vh += (float)1/i;    
    }
    
    printf("O valor harmônico é: %.4f", vh);

    return 0;
}