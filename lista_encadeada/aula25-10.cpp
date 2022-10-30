#include <stdio.h>

struct celula{
    int chave;
    struct celula* next;
    struct celula* back;
};


void imprime(celula* L){
    celula* iterator;

    do{
        if (iterator->next == NULL){
            return;
        }
        else{
            iterator = iterator->next;
        }
    } while (true);

    do{
        if(iterator->back == NULL){
            printf("%i", iterator->chave);
            break;
        }
        else{
            printf("%i", iterator->chave);
            iterator = iterator->back;
        }
    }while (true);
    

}