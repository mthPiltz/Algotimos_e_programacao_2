#include <stdio.h>
#include <stdlib.h>

struct cursos_pesos{
    int codigo;
    char nome_curso[50];
    int redacao;
    int matematica;
    int linguagens;
    int humanas;
    int natureza;
};
struct cursos_vagas{
    int codigo;
    int AC;
    int L1;
    int L3;
    int L4;
    int L5;
    int L7;
    int L8;
    int L9;
    int L11;
    int L13;
    int L15;
};
struct dados{
    int codigo_curso;
    int inscricao_aluno;
    char nome_aluno[81];
    char data_nascimento[11];
};
struct acertos{
    int inscricao_aluno;
    int redacao;
    int matematica;
    int linguagens;
    int humanas;
    int natureza;
};
struct altera_nota_redacao{
    int inscricao_candidato;
    int nota_anterior;
    int nota_alterada;
};


int main(){
    printf("a");
    // FILE * file = fopen("acertos copy.txt", "r");
    FILE * file = fopen("D:/Estudo/UFMS/4°SEMESTRE/PROG2/trabalho/program/arquivos_entradas/acertos.txt", "r");
    if(file == NULL){
    }
    
    fclose(file);
}