#include <stdio.h>

int pisoLog2n(int x);

int main(){
    int x, log2n;

    scanf("%i", &x);
    log2n = pisoLog2n(x);
    printf("%i", log2n);
}

int pisoLog2n(int x){
    if (x / 2 < 2){
        return 1;
    }
    else{
        // printf("%i", x);
        return 1 + pisoLog2n(x / 2);
    }
}