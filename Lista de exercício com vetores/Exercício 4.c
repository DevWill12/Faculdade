
#include <stdio.h>

int main()
{
    int n, i, contador, produto;
    int x[10], y[10];
    contador = 0;
    produto = 0;
    
    printf("Digite o tamanho de ambos os vetores: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        contador++;
        printf("Digite o componente %d do vetor x: ", contador);
        scanf("%d", &x[i]);
    }
    contador =0;
    printf("------------------------------------\n");
    for(i=0; i<n; i++){
        contador++;
        printf("Digite o componente %d do vetor y: ", contador);
        scanf("%d", &y[i]);
    }
    for(i=0; i<n; i++){
        produto = produto + x[i] * y[i]; 
     }
    printf("------------------------------------\n"); 
    printf("O produto escalar entre x e y é: %d", produto); 
     
    

    return 0;
}