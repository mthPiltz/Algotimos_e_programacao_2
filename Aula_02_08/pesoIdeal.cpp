#include <stdio.h>

int main(){
    char sexo;
    float altura;
    float peso;

    scanf(" %c", &sexo);
    scanf("%f", &altura);

    if (sexo == 'm'){
        peso = (72.7 * altura) - 58.0;
        printf("%f", peso);
    }
   else{
        peso = (62.1 * altura) - 44.7;
        printf("%f", peso);
    }
}