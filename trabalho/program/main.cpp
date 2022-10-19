#include <stdio.h>
#include <stdlib.h>


struct acertos {
    acertos* next;
    char notas[30];
};

void adiciona(acertos* acerto, char teste[30]);

int main(){
    FILE * file;
    file = fopen("acertos.txt", "r");
    char teste[30];

    if(file == NULL){
        system("pause");
        return 0;
    }

    int i = 0;
    acertos* acerto;

    while (fgets(teste, 1500, file) != NULL)
    {
        adiciona(acerto, teste);
        break;
    }
    
    printf("[%s]", teste);

    fclose(file);
}

void adiciona(acertos* acerto, char teste[30]){
    acertos* nova;
    nova = (acertos *) malloc(sizeof (acertos));
    for(int i = 0; 0 < 30; i++){
        nova->notas[i] = teste[i];
        printf("%s", nova->notas[i]);
    }
    nova->next = acerto;
    acerto = nova;
}