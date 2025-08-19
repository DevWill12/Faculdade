#include <stdio.h>

int main()
{
    float valor, juros;
    int mes, i;
    
    printf("Digite o valor aplicado: ");
    scanf("%f", &valor);
    printf("Digite o total de meses: ");
    scanf("%d", &mes);
    printf("Digite a taxa de juros mensal: ");
    scanf("%f", &juros);
    
    juros = 1 + juros / 100;
    
    for(i = 0; i < mes; i++){
    valor *= juros;
     printf("Valor ao final do mes %2d: R$%.2f.\n", i, valor); 
    }

    return 0;
}