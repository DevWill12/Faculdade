#include <stdio.h>

int main()
{
    int j[100], i, n, v;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0;
    v = 0;
    printf("Digite o número de jogadas: ");
    scanf("%d", &n);
    
    for(i=1; i <= n; i++){
        printf("Digite o valor da jogada %d: ", i);
        scanf("%d", &j[v]);
    if(j[v]==1){
    d1 = d1 + 1;
    }
    else if(j[v]==2){
        d2 = d2 + 1;
    }
    else if(j[v]==3){
        d3 = d3 + 1;
    }
    else if(j[v]==4){
        d4 = d4 + 1;
    }
    else if(j[v]==5){
        d5 = d5 + 1;
    }
    else if(j[v]==6){
        d6 = d6 + 1;
    }
    }
    printf("-----------------------------\n");
    printf("O dado caiu %d vezes no 6.\n", d6);
    printf("O dado caiu %d vezes no 5.\n", d5);
    printf("O dado caiu %d vezes no 4.\n", d4);
    printf("O dado caiu %d vezes no 3.\n", d3);
    printf("O dado caiu %d vezes no 2.\n", d2);
    printf("O dado caiu %d vezes no 1.\n", d1);
    return 0;
}