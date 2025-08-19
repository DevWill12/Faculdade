#include <stdio.h>

int main() {
   
    int i = 0; 
    int x, y;
    float px, py;
   
    printf("Digite o total de pessoas de Uauá: ");
    scanf("%d", &x);
    printf("Digite o total de pessoas de Nova York: ");
    scanf("%d", &y);
    
    printf("Digite a porcentadem de crescimento anual de Uauá: ");
    scanf("%f", &px);
    printf("Digite a porcentadem de crescimento anual de Nova York: ");
    scanf("%f", &py);
   
    px = px / 100;
    py = py / 100;
   
   
    while(x < y && i < 100){
    x = x + (x*px);
    y = y + (y*py);
    i++;
    }
    
    if(x >= y){
    printf("Uauá ultrapassou Nova York em %d anos.", i);
    }
    else{
    printf("Em %d anos Uauá ainda não ultrapassou Nova York.", i);
    }
    return 0;
    }