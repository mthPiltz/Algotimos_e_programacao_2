#include <stdio.h>

int main(){
    int tam, aux;
    int count = 0;

    scanf("%d", &tam);
    int vet[tam];

    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < tam-1;i++){
        aux = vet[i];
        if (aux < vet[i+1]){
            count++;
        }
    }

    if(count == tam - 1){
        printf("verdadeiro\n"); 
    }
    else{
        printf("falso\n");
    }
}