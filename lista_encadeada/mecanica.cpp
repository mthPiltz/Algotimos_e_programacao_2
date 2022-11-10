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
    int codigo_marca;
    struct carro *next;
};

void inserirMarca(marca*& , int codigoMarca, float nota);
void retorna_ultima_posicao(marca*&, marca*&);
void imprimeLista(marca*& lista_marca);
float buscaMarca(marca* lista_marca, int codigo_marca_buscada);
void inserirCarro(carro*& lista_carro, char modelo[40], int ano, int codigo_marca);

int main(){
    int input;

    // printf("Digite:\n");
    // printf("1 - Cadastrar uma marca \n");
    // printf("2 - Cadastrar um carro \n"); 
    // printf("3 - Listagem de carros \n");
    // printf("4- Exclusão de uma marca \n");
    // printf("5 - Sair \n");


    // marca* lista_marca = NULL;
    // inserirMarca(lista_marca, 1, 5.0);
    // inserirMarca(lista_marca, 2, 6.0);
    //imprimeLista(lista_marca);
    // printf("%f", buscaMarca(lista_marca, 1));

    carro* lista_carro = NULL;
    inserirCarro(lista_carro, "Palio", 1, 2015);

    printf("%s", lista_carro->modelo);
    printf("%i", lista_carro->ano);


}

void inserirMarca(marca*& lista_marca, int codigo_marca, float nota){
    marca* marca_aux = lista_marca;

    if(marca_aux == NULL){
        marca_aux = (marca*) calloc(1, sizeof(marca));
        marca_aux->codigo_marca = codigo_marca;
        marca_aux->nota = nota;     
        marca_aux->next = NULL;
        
        lista_marca = marca_aux;
        return;
    }
    do{            
        if(marca_aux->next == NULL){
            marca_aux->next = (marca*) calloc(1, sizeof(marca));
            marca_aux = marca_aux->next;

            marca_aux->codigo_marca = codigo_marca;
            marca_aux->nota = nota;     
            marca_aux->next = NULL;
            // printf("%i", lista_marca->codigo_marca);

            break;
        }
        else{
            marca_aux = marca_aux->next;
        }
    }while(true);
}

void imprimeLista(marca*& lista_marca){
    marca* marca_aux = lista_marca;

    do{            
        if(marca_aux->next == NULL){            
            printf("%i\n", marca_aux->codigo_marca);
            printf("%f\n", marca_aux->nota);
            break;
        }
        else{
            printf("%i\n", marca_aux->codigo_marca);
            printf("%f\n", marca_aux->nota);

            marca_aux = marca_aux->next;
        }
    }while(true);
}

float buscaMarca(marca* lista_marca, int codigo_marca_buscada){
    marca* marca_aux = lista_marca;

    do{
        if(marca_aux->next == NULL){
            if (marca_aux->codigo_marca == codigo_marca_buscada){
                return marca_aux->nota;
            }            
            break;
        }
        else{
            if (marca_aux->codigo_marca == codigo_marca_buscada){
                return marca_aux->nota;
            }
            marca_aux = marca_aux->next;
        }
    } while (true);

    return 0.0;
}

void inserirCarro(carro*& lista_carro, char modelo[40], int ano, int codigo_marca){
    carro* carro_aux = lista_carro;

    for(int i = 0; i < 40; i++){
        carro_aux->modelo[i] = modelo[i];
    }
    carro_aux->ano = ano;
    carro_aux->codigo_marca = codigo_marca;

    carro_aux->next = lista_carro;
    lista_carro = carro_aux;
}