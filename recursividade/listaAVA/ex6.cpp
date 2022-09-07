#include <stdio.h>

int inteiro(int x);

int main(){
    printf("%i", inteiro(4));
}

int inteiro(int x){
    if(x == 1){
        return -x;
    }
    else{
        return -5 * inteiro(x - 1)+ x;
    }
    printf("Teste");
}