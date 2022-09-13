#include <stdio.h>

int cicloN(int number);

int main(){
    int number;
    int length;
    scanf("%i", &number);
    printf("%i ", number);

    length = cicloN(number);
    printf("%i", length);
}

int cicloN(int number){
    int result;
    int count = 1;
    if(number == 1){
        return count;
    }
    else if(number % 2 == 0){
        result = number / 2;
        printf("%i ", result);
        count =  count + cicloN(result);
        return count;
    }
    else{
        result = (number * 3) + 1;
        printf("%i ", result);
        count = count + cicloN(result);
        return count;
    }
}