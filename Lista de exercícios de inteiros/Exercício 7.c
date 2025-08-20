#include <stdio.h>

int main(){

   int alunos;
   int notas [alunos];
   int i;
   int maior, menor;

 #include <stdio.h>

int main(){
    int n, i, numero, soma = 0;

    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            soma += numero;  // soma só se for par
        }
    }

    printf("A soma dos números pares é: %d\n", soma);

    return 0;
}
