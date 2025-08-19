#include <stdio.h>

int main()
{
    float n[10];
    int ts, i, j, contadorv;
    int contador = 1;
    int tamanho;
    
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &ts);
    tamanho = ts;

    for(i = 0; i < ts; i++){
        printf("Digite o número %d da sequência: ", contador);
        scanf("%f", &n[i]);
        contador++;
    }

    for(i = 0; i < tamanho; i++){
        contadorv = 1;
        j = i + 1;
        while (j < tamanho){
            if (n[j] != n[i]){ 
                j++;
            } else {
                contadorv++;
                tamanho--;                   
                n[j] = n[tamanho];
            }
        }
        printf("--------------------------------\n");
        printf("%.2f ocorre %d vezes\n", n[i], contadorv);
    }

    return 0;
}
