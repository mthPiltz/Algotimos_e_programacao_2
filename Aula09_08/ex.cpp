#include <stdio.h>
#define MAX = 50;

void calcula_max_min(float vet[MAX], int n, int &ind_max, int &ind_min){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; i++){
            if(vet[i] > vet[j]){
                ind_max = vet[i];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; i++){
            if(vet[i] < vet[j]){
                ind_min = vet[i];
            }
        }
    }    
}

int main(){
    
}