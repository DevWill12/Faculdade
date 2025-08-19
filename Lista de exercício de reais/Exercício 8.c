#include <stdio.h>

int main()
{
    int n, i;
    int ap = 0;
    int rp = 0;
    float mc = 0;
    float n1, n2, n3, m;
    
    
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        printf("Notas aluno %d: ", i);
        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);
        
        m = (n1 + n2 + n3) / 3;
        printf("A média do aluno %d foi: %.2f\n", i, m);
        mc = mc + m;
        
        if(m >= 5){
            ap = ap + 1;
        }
        else{
            rp = rp + 1;
        }
    }
    printf("\n");
    mc = mc / n;
    
    printf("%d alunos foram aprovados!\n", ap);
    printf("%d alunos foram reprovados!\n", rp);
    printf("A média da turma foi %.2f!\n", mc);

    return 0;
}