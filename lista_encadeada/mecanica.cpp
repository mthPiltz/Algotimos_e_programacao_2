#include <stdio.h>
#include <stdlib.h>

struct marca{
    int codigo_marca;
    float nota;
    struct marca *next;
};

struct carro{
    char modelo[40];
    int ano;
    int codigomarca;
    struct carro *prox;
};

void inserirMarca(marca*& , int codigoMarca, float nota);
void retorna_ultima_posicao(marca*&, marca*&);

int main(){
    int input;

    printf("Digite:\n");
    printf("1 - Cadastrar uma marca \n");
    printf("2 - Cadastrar um carro \n"); 
    printf("3 - Listagem de carros \n");
    printf("4- Exclusão de uma marca \n");
    printf("5 - Sair \n");

    marca* lista_marca = NULL;

    inserirMarca(lista_marca, 1, 5.0);

    // scanf("%i", &input);
}

void inserirMarca(marca*& lista_marca, int codigo_marca, float nota){
    marca* marca_aux = (marca*) calloc(1, sizeof(marca));
    marca_aux = lista_marca;

    if(lista_marca == NULL){
        marca_aux->codigo_marca = codigo_marca;
        marca_aux->nota = nota;     
        marca_aux->next = NULL;

        lista_marca = marca_aux;
        return;
    }
    do{            
        if(marca_aux->next = NULL){
            marca_aux->codigo_marca = codigo_marca;
            marca_aux->nota = nota;     
            marca_aux->next = NULL;

            lista_marca - marca_aux;
            break;
        }
        else{
            marca_aux = marca_aux->next;
        }
    }while(true);      
}
