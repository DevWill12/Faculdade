#include <stdio.h>
#define MAX 100

int main() {
   
   int A[MAX], B[MAX], C[MAX *2];
   int n, n1, n2, i, j;
   int contador = 1;
   int total = 0;
   int banco;
   
   printf("Digite o tamanho da sequência 1 (Ordenada): ");
   scanf("%d", &n);
   printf("\n");
   
   for(i = 0; i < n; i++){
       printf("Digite o %d número da sequência: ", contador);
       scanf("%d", &A[i]);
       contador++;
       printf("\n");
   }
   contador = 1;
   printf("------------------------------------\n");
   printf("Digite o tamanho da sequência 2(Ordenada): ");
   scanf("%d", &n1);
   printf("\n");
   
    for(j = 0; j < n1; j++){
       printf("Digite o %d número da sequência: ", contador);
       scanf("%d", &B[j]);
       contador++;
       printf("\n");
   }
   
   for(i = 0; i < n; i++) {
        C[total++] = A[i];
    }
    for(j = 0; j < n1; j++) {
        C[total++] = B[j];
    }
    
    for(i = 0; i < total; i++) {
        for(j = i + 1; j < total; ) {
            if(C[i] == C[j]) {
                for(int k = j; k < total - 1; k++) {
                    C[k] = C[k + 1];
                }
                total--;
            } else {
                j++;
            }
        }
    }
   
   for(i = 0; i < total - 1; i++) {
        for(j = 0; j < total - 1 - i; j++) {
            if(C[j] > C[j + 1]) {
                banco = C[j];
                C[j] = C[j + 1];
                C[j + 1] = banco;
            }
        }
    }
   
   printf("Sequência unificada sem repetições:\n");
    for(i = 0; i < total; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    return 0;
}
