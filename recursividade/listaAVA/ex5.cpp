#include <stdio.h>

int conta(int lenght, int v[], int k);

int main(){
    int lenght, k, result;
    scanf("%i", &lenght);
    int vector[lenght];


    for(int i = 0; i <= lenght;i++){
        scanf("%i", vector[i]);
    printf("tetse");
    }
    scanf("%i", &k);

    result = conta(lenght, vector, k);
    printf("%i", result);
}


int conta(int lenght, int v[], int k){
    int count = 0;

    if(v[count] == k){
        count = count + conta(lenght, v, k);
        return count;
    }
    else if(count == lenght){
        return count;
    }
}