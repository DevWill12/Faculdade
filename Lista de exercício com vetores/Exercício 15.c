#include <stdio.h>

int main()
{
    int n, k, notas[100][10], peso[10];
    int i, j;
    float mediaAluno[100], mediaProva[10] = {0};
    
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    
    printf("Digite o número de provas: ");
    scanf("%d", &k);
    
    for(i = 0; i < k; i++){
        printf("Digite o peso da prova %d: ",i + 1);
        scanf("%d", &peso[i]);
    }
    
    for(i = 0; i < n; i++){
    for(j = 0; j < k; j++){
        printf("Digite a nota do aluno %d na prova %d: ", i+1, j+1); 
        scanf("%d", &notas[i][j]);
    }
    }
    
     for(i = 0; i < n; i++){
        int somaPesos = 0;
        float somaNotas = 0;
        for(j = 0; j < k; j++){
            somaNotas += notas[i][j] * peso[j];
            somaPesos += peso[j];
        }
        mediaAluno[i] = somaNotas / somaPesos;
    }
    
     for(j = 0; j < k; j++){
        int soma = 0;
        for(i = 0; i < n; i++){
            soma += notas[i][j];
        }
        mediaProva[j] = (float)soma / n;
    }
    
    printf("\nMédia ponderada de cada aluno:\n");
    for(i = 0; i < n; i++){
        printf("Aluno %d: %.2f\n", i + 1, mediaAluno[i]);
    }
    
    printf("\nMédia da classe em cada prova:\n");
    for(j = 0; j < k; j++){
        printf("Prova %d: %.2f\n", j + 1, mediaProva[j]);
    }
    
    return 0;
}