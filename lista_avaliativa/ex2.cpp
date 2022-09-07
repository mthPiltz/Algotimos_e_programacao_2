#include <stdio.h>
#include <string.h>

struct tAluno{
    char nome[30];
    char curso[30];
    int matricula;
};

void buscaAlunos(tAluno a[5], char curso[30]);

int main(){
    char cursoBuscado[30];
    tAluno alunos[5];
    for(int i = 0; i < 5;i++){
        //não funciona pq os espaços fazem ir para a próxima variável
        // scanf(" %[^\n]", &alunos[i].matricula);
        // scanf(" %[^\n]", &alunos[i].nome);
        // scanf(" %[^\n]", &alunos[i].curso);
        scanf("%i\n", &alunos[i].matricula);
        fgets(alunos[i].nome, 30, stdin);
        fgets(alunos[i].curso, 30, stdin);

    }
    fgets(cursoBuscado, 30, stdin);
    // scanf(" %[^\n]", &cursoBuscado);

    buscaAlunos(alunos, cursoBuscado);

}

void buscaAlunos(tAluno a[5], char curso[30]){
    for(int i = 0; i < 5;i++){
        if(strcmp(curso, a[i].curso) == 0){
            printf("%i %s", a[i].matricula, a[i].nome);
        }
    }
}