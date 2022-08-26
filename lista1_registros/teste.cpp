#include <stdio.h>

int main(){
    struct{
    char nome[50];
    } nome;
    gets(nome.nome);
    printf("nome: %s\n", nome.nome);
}