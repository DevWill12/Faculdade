#include <stdio.h>

int main(){

   int alunos;
   int notas [alunos];
   int i;
   int maior, menor;

    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

   for (i=0; i < alunos; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%d", &notas);
   }

   maior = notas[0];
   menor = notas[0];

   for (i = 0; i <alunos; i++){
        if (notas[i] > maior);
        maior = notas[i];

    for (i = 0; i <alunos; i++){
        if (notas[i] < menor);
        menor = notas[i];
        }
  
   }

   printf("A maior nota foi de: %d\n", maior);
   printf("A menor nota foi de: %d\n", menor);

    return 0;