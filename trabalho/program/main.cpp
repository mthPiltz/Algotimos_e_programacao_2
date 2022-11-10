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
    char modalidade[4];
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

cursos_pesos lerCusosPesos(FILE* cursos_pesos, int quantidade_de_cursos);
acertos lerAcertos(FILE* acertos, int quantidade_de_alunos, struct acertos[]);
void calcula_media(struct lista_acertos[], int tamanho_lista, int media[]);

int main(){
    FILE * acertos_file = fopen("acertos.txt", "r");
    FILE * alteracaoNotaRedacao_file = fopen("alteracaoNotaRedacao.txt", "r");
    FILE * cursos_e_pesos_file = fopen("cursos_e_pesos.txt", "r");
    FILE * cursos_e_vagas_file = fopen("cursos_e_vagas.txt", "r");
    FILE * dados_file = fopen("dados.txt", "r");
    
    //Valida se todos os arquivos foram encontrados
    if(dados == NULL || acertos_file == NULL || cursos_e_pesos == NULL ||
       alteracaoNotaRedacao == NULL || cursos_e_vagas  == NULL){
       printf("Morri");
       return 0;
    }

    int quantidade_de_alunos;
    int media[5] = {0};
    


    fclose(dados);
    fclose(cursos_e_vagas);
    fclose(cursos_e_pesos);
    fclose(alteracaoNotaRedacao);
    fclose(acertos_file);
}

acertos lerAcertos(FILE* dados_file, int quantidade_de_alunos, acertos acert    os[]){
    int inscricao;
    int redacao;
    int matematica;
    int linguagens;
    int humanas;
    int natureza;
    

    for(int i = 0; i < quantidade_de_alunos; i++){
        fscanf(dados_file, "%i %i %i %i %i %i", &inscricao, &linguagens, &matematica, &natureza, &humanas, &redacao);
      
        acertos[i].inscricao_aluno = inscricao;
        acertos[i].linguagens = linguagens;
        acertos[i].matematica = matematica;
        acertos[i].natureza = natureza;
        acertos[i].humanas= humanas;
        acertos[i].redacao = redacao;        
    }    
        
}

cursos_pesos lerCusosPesos(FILE* cursos_pesos, int quantidade_de_cursos, cursos_pesos lista_cursos_pesos[]){
    char linha[400];

    for(int i = 0; i < quantidade_de_cursos; i++){
        fgets(linha, 400, cursos_pesos);
    }
    
    
}

void calcula_media(struct acertos lista_acertos[], int tamanho_lista, int media[]){
    for(int i = 0; i < tamanho_lista; i++){
        media[0] = media[0] + lista_acertos[i].linguagens;
        media[1] = media[1] + lista_acertos[i].matematica;
        media[2] = media[2] + lista_acertos[i].natureza;
        media[3] = media[3] + lista_acertos[i].humanas;
        media[4] = media[4] + lista_acertos[i].redacao;
    }


    media[0] = media[0] / tamanho_lista;
    media[1] = media[1] / tamanho_lista;
    media[2] = media[2] / tamanho_lista;
    media[3] = media[3] / tamanho_lista;
    media[4] = media[4] / tamanho_lista;
}