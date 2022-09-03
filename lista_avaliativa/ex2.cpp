#include <stdio.h>
#include <string.h>

struct tAluno{
    char nome[30];
    char curso[30];
    char matricula[10];
};

void buscaAlunos(tAluno a[5], char curso[30]);

int main(){
    char cursoBuscado[30];
    tAluno alunos[5];
    for(int i = 0; i < 5;i++){
        //não funciona pq os espaços fazem ir para a próxima variável
        scanf(" %[^\n]", &alunos[i].matricula);
        scanf(" %[^\n]", &alunos[i].nome);
        scanf(" %[^\n]", &alunos[i].curso);
    }
    // fgets(cursoBuscado, 30, stdin);
    scanf(" %[^\n]", &cursoBuscado);

    buscaAlunos(alunos, cursoBuscado);

}

void buscaAlunos(tAluno a[5], char curso[30]){
    for(int i = 0; i < 5;i++){
        if(strcmp(curso, a[i].curso) == 0){
            printf("%s %s\n", a[i].matricula, a[i].nome);
        }
    }
}