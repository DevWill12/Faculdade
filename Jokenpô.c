#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, numero;

    srand(time(NULL));

    do{

	printf("Digite o número respectivo a sua escolha, sendo: \n");
	printf("1 - Pedra\n");
	printf("2 - Papel\n");
	printf("3 - Tesoura\n");
	printf("\n");
	scanf("%d", &n);

    if(n > 0 && n < 4){

	numero = (rand() % 3) + 1;
	
	printf("BOT: ");
    if (numero == 1){ 
        printf("Pedra\n");
    }
    else if (numero == 2){
            printf("Papel\n");
        }
        else{ 
            printf("Tesoura\n");
        }
    	if ((n == 1 && numero == 3) || (n == 2 && numero == 1) || (n == 3 && numero == 2)) {
                printf("Você venceu!\n");
            }
            else if (n == numero) {
                printf("Empate! Jogue novamente.\n");
            }
            else {
                printf("Você perdeu!\n");
            }
	    }
    } while (n == numero);


	return 0;
}