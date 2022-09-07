#include <stdio.h>
 
void retornaPares(int n, int *v, int *pares);

int main(){
    int vetorA[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                      11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int pares[20] = {0};
    retornaPares(20, vetorA, pares);
    for(int i = 0; i < 20; i++){
        if(pares[i] != 0){
            printf("%i\n", pares[i]);
        }
    }
}

void retornaPares(int n, int *v, int *pares){
    if(n - 1 >= 0){
        if(v[n - 1] % 2 != 0){
            retornaPares(n - 1, v, pares);
        }
        else{
            pares[n - 1] = v[n - 1];
            // printf("%i", pares[n - 1]);
            retornaPares(n- 1, v, pares);         
        }
    }
}

