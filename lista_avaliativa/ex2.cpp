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
        gets(alunos[i].matricula);
        gets(alunos[i].nome);
        gets(alunos[i].curso);
        //não funciona pq os espaços fazem ir para a próxima variável
        // scanf("%s", &alunos[i].matricula);
        // scanf("%s", &alunos[i].nome);
        // scanf("%s", &alunos[i].curso);
    }
    gets(cursoBuscado);

    buscaAlunos(alunos, cursoBuscado);

}

void buscaAlunos(tAluno a[5], char curso[30]){
    for(int i = 0; i < 5;i++){
        if(strcmp(curso, a[i].curso) == 0){
            printf("%s %s", a[i].matricula, a[i].nome);
            printf("\n");
        }
    }
}