#include <stdio.h>

int main()
{
    int n, i, v[100], d1;
    
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);
    printf("Números da sequência: ");
    
    for(i=0; i < n; i++){
        scanf("%d", &v[i]);
    }
    printf("------------------------\n");
        for(i = n - 1; i >= 0; i--){
        printf("%d", v[i]); 
        printf("\n");
        }

    return 0;
}