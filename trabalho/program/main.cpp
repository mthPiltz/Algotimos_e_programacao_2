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

    
    int quantidade_de_alunos;
    fscanf(acertos_file, "%i", &quantidade_de_alunos);
    lerAcertos(acertos_file, quantidade_de_alunos);
    
    fclose(dados);
    fclose(cursos_e_vagas);
    fclose(cursos_e_pesos);
    fclose(alteracaoNotaRedacao);
    fclose(acertos_file);
}

acertos lerAcertos(FILE* dados_file, int quantidade_de_alunos){
    acertos acertos[quantidade_de_alunos];
    int inscricao;
    int redacao;
    int matematica;
    int linguagens;
    int humanas;
    int natureza;
    int i = 0;

    while(fscanf(dados_file, "%i %i %i %i %i %i",
    &inscricao, &redacao, &matematica, &linguagens, &humanas, &natureza)){      
        acertos[i].inscricao_aluno = inscricao;
        acertos[i].humanas = humanas;
        acertos[i].linguagens = linguagens;
        acertos[i].matematica = matematica;
        acertos[i].redacao = redacao;
        acertos[i].natureza = natureza;

        i++;
    }    
}

cursos_pesos lerCusosPesos(FILE* cursos_pesos, int quantidade_de_cursos){
    
    
    
}