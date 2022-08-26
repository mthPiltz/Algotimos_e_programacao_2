#include<stdio.h>

int main() {
    int inicio, fim, soma;
    soma = 0;

    scanf("%d %d", &inicio, &fim);

    while(inicio <= fim){
        if ((inicio % 2) != 0){
            soma = soma + inicio;
        }        
        inicio++;
    }
    

    printf("%d\n", soma);

}x  