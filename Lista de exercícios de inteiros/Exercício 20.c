#include <stdio.h>
#include <math.h>

int main() {
    int numero, dezena1, dezena2, soma;
    double raiz;

    for (numero = 1000; numero <= 9999; numero++) {
        dezena1 = numero / 100;        // primeiros dois dígitos
        dezena2 = numero % 100;        // últimos dois dígitos
        soma = dezena1 + dezena2;
        raiz = sqrt(numero);
        if (raiz == (int)raiz && raiz == soma) {
            printf("%d\n", numero);
        }
    }

    return 0;
}