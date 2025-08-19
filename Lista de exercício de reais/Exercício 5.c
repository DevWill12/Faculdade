#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    double rd, r1, r2, ri;
    
    printf("Digite A: ");
    scanf("%lf", &a);
    printf("Digite B: ");
    scanf("%lf", &b);
    printf("Digite C: ");
    scanf("%lf", &c);
    
    d=b*b-4*a*c;
    
    if(d > 0){
    rd = sqrt(d);
    r1 = (-b+rd)/(2*a);
    r2 = (-b-rd)/(2*a);
    printf("As raízes reais são: %.2lf e %.2lf.", r1, r2);
    }
    else if(d == 0){
    r1 = -b / (2 * a);
        printf("Raiz real dupla: %.2lf\n", r1);
    }
    else{
    rd = sqrt(-d);
      r1 = -b/(2*a);
      ri = rd/(2*a);
      printf("Raizes complexas\n");
      printf("Parte real: %f\n", r1);
      printf("Parte imaginaria: %f\n", ri);    
    }
    
    return 0;
}
