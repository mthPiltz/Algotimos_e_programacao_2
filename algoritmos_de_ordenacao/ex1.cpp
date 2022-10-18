#include <stdio.h>

void quicksort(int vector[], int length);
bool compara(int vector[], int pivo_inicio, int pivo_fim);
void reordena(int vector[], int inicio, int fim);
int encontraPosicao(int v[], int valor);

int main(){
    int vector[] = {5, 4, 10, 86, 78, 6, 1};

    quicksort(vector, 7);

    for(int i = 0; i < 7;i++){
        printf("%i ", vector[i]);
    }
}

void quicksort(int vector[], int lenth){
    int pivo, indice;
    pivo = vector[0];
    bool trocou;
    for(int i = 1; i < lenth; i++){
        trocou = compara(vector, pivo, indice);
        if(trocou){

        }
    }
}

int encontraPosicao(int v[], int valor){
    int i = 0;
    do{
        if(v[i] == valor){
            return i;
        }
        else if(i > sizeof(v) - 1){
            return -1; 
        }
        i++;
    }while (true);
}

void reordena(int vector[], int inicio, int fim){
    inicio = encontraPosicao(vector, inicio);
    printf("%i", inicio);

    int aux = vector[fim];
    vector[fim] = vector[inicio];
    vector[inicio] = aux;
}

bool compara(int vector[], int pivo_inicio, int pivo_fim){
    // printf("%i\n", pivo_inicio);
    printf("%i %i\n", vector[pivo_inicio], vector[pivo_fim]);
    if(pivo_inicio > vector[pivo_fim]){
        reordena(vector, pivo_inicio, pivo_fim);
        return true;
    }
    else{
        return false;
    }
}