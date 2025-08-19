#include <stdio.h>

int main()
{
    int alunos, i, i2, ia, nota;
    char g[30], ga[30];
    
    printf("Digite o total de alunos da turma: ");
    scanf("%d", &alunos);
    
    printf("Digite o gabarito da prova: ");
    for(i= 0; i < 5; i++){
    scanf("%s", &g[i]);
    }
    
    for(i2 = 1; i2 <= alunos; i2++){
        nota = 0;
        printf("Digite o gabarito do aluno %d:\n", i2);
        for(ia = 0; ia < 5; ia++){
        scanf("%s", &ga[ia]);
        if(ga[ia] == g[ia]){
            nota = nota + 1;
        }
        }
    printf("A nota do aluno %d foi %d.\n", i2, nota);
    }

    return 0;
}