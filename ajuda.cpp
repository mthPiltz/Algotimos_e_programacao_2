#include <stdio.h>
#define DIM 100
#define MAX 12


struct valores{
	char RGA[MAX+1];
	char a[2];
};


// funcao para leitura do vetor
void leitura(valores remocao[])
{
	for (int i = 0; i < 1; i++) 
	{
		printf(" Digite o RGA : ");
		scanf(" %[^\n]", remocao[i].RGA);
		printf(" Valor a ser removido: ");
		scanf(" %[^\n]", remocao[i].a);
	}
}

int main()
{
    valores remocao[DIM];
	leitura(remocao);
    return 0;
}