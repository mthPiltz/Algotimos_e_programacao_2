#include <stdio.h>
#include <stdlib.h>

struct no {
	int key;
	no* next;
};

void enfileirar(no *&lista, int value);
void desenfileirar(no *&lista);
void empilhar(no *&lista, int value);
void desempilhar(no *&lista);
void mostraLista(no *lista);

int main() {
	no* inicio = NULL;
	empilhar(inicio, 1);
	enfileirar(inicio, 2);
	empilhar(inicio, 3);
	enfileirar(inicio, 4);
	desempilhar(inicio);


	mostraLista(inicio);
}

void enfileirar(no *&lista, int value){
	no *iterador, *lista_aux = (no*) malloc(sizeof(no));
	lista_aux->key = value;
	lista_aux->next = NULL;

	if (lista == NULL) {
		lista = lista_aux;
	}
	else {
		iterador = lista;
		while (iterador->next != NULL) {
			iterador = iterador->next;
		}
		iterador->next = lista_aux;
	}	
}

void desenfileirar(no*& lista) {
	no *lista_aux = lista;
	lista_aux = lista_aux->next;
	free(lista);

	lista = lista_aux;
}

void empilhar(no*& lista, int value){
	no* lista_aux = (no*)malloc(sizeof(no));
	lista_aux->key = value;
	lista_aux->next = lista;
	lista = lista_aux;

}

void desempilhar(no *&lista) {
	no* lista_aux = lista;
	lista_aux = lista_aux->next;
	free(lista);

	lista = lista_aux;
}

void mostraLista(no* lista) {

	no* iterador = lista;
	
	do {
		if (iterador->next != NULL) {
			printf("%i ", iterador->key);
			iterador = iterador->next;
		}
		else {
			printf("%i ", iterador->key);
			break;
		}
	} while (true);
}