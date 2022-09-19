#include <stdio.h>

int potency(int base, int exponent);

int main(){
    int base, exponent, result;

    scanf("%i %i", &base, &exponent);
    result = potency(base, exponent);

    printf("%i", result);
}

int potency(int base, int exponent){
    if(exponent > 1){
        return base * potency(base, exponent - 1);
    }
    else{
        return base;
    }
}