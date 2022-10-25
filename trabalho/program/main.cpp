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

cursos_pesos lerCusosPesos(FILE* cursos_pesos, int quantidade_de_cursos);
acertos lerAcertos(FILE* acertos, int quantidade_de_alunos);

int main(){
    FILE * acertos_file = fopen("acertos.txt", "r");
    FILE * alteracaoNotaRedacao = fopen("alteracaoNotaRedacao.txt", "r");
    FILE * cursos_e_pesos = fopen("cursos_e_pesos.txt", "r");
    FILE * cursos_e_vagas = fopen("cursos_e_vagas.txt", "r");
    FILE * dados = fopen("dados.txt", "r");
    
    //Valida se todos os arquivos foram encontrados
    if(dados == NULL || acertos_file == NULL || cursos_e_pesos == NULL ||
       alteracaoNotaRedacao == NULL || cursos_e_vagas  == NULL){
       printf("Morri");
       return 0;
    }

    char quantidade_de_cursos[3];
    // fgets(quantidade_de_cursos, 4, cursos_e_pesos);
    // lerCusosPesos(cursos_e_pesos, (int)quantidade_de_cursos);

    char quantidade_de_alunos[6];
    fgets(quantidade_de_alunos, 1, acertos_file);
    acertos acerto_alunos[13861];
    lerAcertos(acertos_file, (int)quantidade_de_alunos);
    
    fclose(dados);
    fclose(cursos_e_vagas);
    fclose(cursos_e_pesos);
    fclose(alteracaoNotaRedacao);
    fclose(acertos_file);
}

acertos lerAcertos(FILE* acertos_file, int quantidade_de_alunos){
    char linhaAtual[150];
    int i = 0;

    while(fgets(linhaAtual, 2, acertos_file)){
        printf("%s", linhaAtual);          
    }    
}

cursos_pesos lerCusosPesos(FILE* cursos_pesos, int quantidade_de_cursos){
    
    
    
}