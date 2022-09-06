#include <stdio.h>

int euclides(int a, int b);

int main(){
    int a, b;
    scanf("%i %i", &a, &b);

    int mdc = euclides(a, b);

    printf("%i", mdc);
}

int euclides(int a, int b){
    int r = a % b;
    if(r > 0){
        return euclides(b, r);
    }
    else{
        return b;
    }
}