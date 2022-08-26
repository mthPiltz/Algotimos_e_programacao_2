#include<stdio.h>

int main() {
    int numero, digito, aux, quant; 
    quant = 0;
    scanf("%d %d", &numero, &digito);
    
    while(numero > 0){
        aux = numero % 10;
        numero = numero / 10;
        if(aux == digito){
            quant++;
        }
    }
    printf("%d", quant);
}