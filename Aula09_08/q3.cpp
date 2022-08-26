#include <stdio.h>

int main(){
    int l, posicao1;
    bool maior = true;
    scanf("%d", &l);
    
    int vet[l];
    for(int i = 0; i < l; i++){
        scanf("%d", &vet[i]);
    }
    posicao1 = vet[0];

    for(int i = 1; i < l; i++){
        if(posicao1 <= vet[i]){
            maior = false;
        }
    }

    if(maior){
        printf("true");
    }
    else{
        printf("false");
    }
}