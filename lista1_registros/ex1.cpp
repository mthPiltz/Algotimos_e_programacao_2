#include <stdio.h>

int calculaMedia(int nota1, int nota2);

int main(){
    int acao, media;
    int i = 0;

    struct{
        char nome[10];
        char matricula[10];
        int nota1, nota2;
    } alunos[50];

    do {
        printf("Digite:\n1-> Para novo aluno;\n2-> Para sair.\n");
        scanf("%d", &acao);
        if(acao == 2 || i == 49){
            break;
        }
        else{
            printf("Informe os seguintes dados em ordem\nNome:\nMatricula:\nNota 1:\nNota 2\n");
            scanf("%s", &alunos[i].nome);
            scanf("%s", &alunos[i].matricula);
            scanf("%d %d", &alunos[i].nota1, &alunos[i].nota2);
        }
        i++;
    } while(true);

    for(int j = 0; j < i;j++){
        media = calculaMedia(alunos[j].nota1, alunos[j].nota2);
        printf("%s\n%s\n%d\n", &alunos[j].nome, &alunos[j].matricula, media);
    }
}


int calculaMedia(int nota1, int nota2){
    return (nota1 + nota2) / 2;
}