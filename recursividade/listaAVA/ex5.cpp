#include <stdio.h>

int conta(int lenght, int v[], int k);

int main(){
    int lenght, k, result;

    scanf("%i", &lenght);
    int vector[lenght];


    for(int i = 0; i < lenght; i++){
        scanf("%i", &vector[i]);
    }

    scanf("%i", &k);

    result = conta(lenght, vector, k);
    printf("%i", result);
}


int conta(int lenght, int v[], int k){
    if(lenght <= 0){
        return 0;
    }


    if(v[lenght - 1] == k){
        return 1 + conta(lenght - 1, v, k);
    }
    else{
        return conta(lenght - 1, v, k);
    }
}