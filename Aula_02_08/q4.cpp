#include <stdio.h>
#include <math.h>

int main(){
    double coefiA, coefiB, coefiC, delta;
    double raiz1, raiz2;    
    scanf("%lf %lf %lf", &coefiA, &coefiB, &coefiC);

    delta = pow(coefiB, 2) - 4 * coefiA * coefiC;

    if (delta < 0){
        printf("A equação não possui raízes reais");
    }
    else{
        raiz1 = (-coefiB - sqrt(delta)) / (2* coefiA);
        raiz2 = (-coefiB + sqrt(delta)) / (2* coefiA);
        printf("%.2f, %.2f", raiz1, raiz2);
    }
}