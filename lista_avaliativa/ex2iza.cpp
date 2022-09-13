#include <stdio.h>
#define DIM 100
#define MAX 50
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct tAluno{
	int matricula;
	char nome[MAX+1];
	char curso[MAX+1];	
};

// funcao para leitura do vetor
void leitura(tAluno alunos[])
{
	for (int i = 0; i < 5; i++) 
	{
		//printf(" matricula : ");
		scanf(" %d", &alunos[i].matricula);
		//printf(" nome: ");
		scanf(" %[^\n]", alunos[i].nome);
		//printf(" curso: ");
		scanf(" %[^\n]", alunos[i].curso);
		
	}
}

// funcao para realizar a busca
int consulta(tAluno alunos[], char curso[MAX+1])
{
	int i;
	int achou = 0;	// sem alunos
	for (i = 0; i < 5; i++){
		if(strcmp(curso, alunos[i].curso) == 0)
		{
		printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
		achou = 1;
		}
	}
		return achou;
}
	


int main()
{

	tAluno alunos[DIM];
	int i;
    char curso[MAX+1];
	// chamada da funcao leitura
	leitura(alunos);
        fgets(curso, 51, stdin);
    	//scanf(" %[^\n]", &curso);
		consulta(alunos, curso);
	return 0;
}
