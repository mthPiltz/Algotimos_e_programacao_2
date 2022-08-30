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
        fgets(alunos[i].matricula, 10, stdin);
        fgets(alunos[i].nome, 30, stdin);
        fgets(alunos[i].curso, 30, stdin);
        //não funciona pq os espaços fazem ir para a próxima variável
        // scanf("%[^\n]s", &alunos[i].matricula);
        // scanf("%[^\n]s", &alunos[i].nome);
        // scanf("%[^\n]s", &alunos[i].curso);
    }
    fgets(cursoBuscado, 30, stdin);

    buscaAlunos(alunos, cursoBuscado);

}

void buscaAlunos(tAluno a[5], char curso[30]){
    for(int i = 0; i < 5;i++){
        if(strcmp(curso, a[i].curso) == 0){
            printf("%s %s\n", a[i].matricula, a[i].nome);
        }
    }
}