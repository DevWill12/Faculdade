#include <stdio.h>

int main() {
  
    int num;
    int i;
    int soma = 0;

    printf("Digite um número para a verificação: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++){
        if(num % i == 0){
            soma += i;
        }
    }

    if (soma == num){
        printf("%d é um número perfeito!\n", num);
    } else {
        printf("%d não é um número perfeito.\n", num);
    }
    
    return 0;
}

