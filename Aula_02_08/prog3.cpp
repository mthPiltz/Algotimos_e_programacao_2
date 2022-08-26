#include <stdio.h> // funcoes de entrada e saida

/*scanf - leitura de dados do teclado

scanf("tipo de dado", &nome_variavel);

%d %i - num inteiro
%f - num do tipo float
%lf - num do tipo double



printf("tipo de dado", nome_variavel);

%d %i - num inteiro
%f - num do tipo float
%f - num do tipo double
%c - caracter
*/

// main - funcao principal
int main()
{
	/*DECLARACAO DE VARIAVEIS*/
	int num1;

	int num2, num3;

	float b; // 6 casas decimais

	double c; // 15 casas decimais

	char letra; // le um caracter

	// leitura de dados
	printf("Numero int: ");
	scanf("%d", &num1);

	printf("Mais dois inteiros: ");
	scanf("%d %d", &num2, &num3);

	printf("Numero float: ");
	scanf("%f", &b);	

	printf("Numero double: ");
	scanf("%lf", &c);

	printf("Digite um caracter: ");
	scanf(" %c", &letra);

	printf("Num int lidos: %d %d %d ", num1, num2, num3);
	printf("Num float lido: %.2f ", b);
	printf("Num double lidos: %.8f \n", c);
	printf("Caracter lido: %c\n", letra);
	printf("\n");

	printf("Imprimindo o inteiro");
	printf("\n%d", num1);
	printf("\n%10d", num1);
	printf("\n%02d", num1);
	printf("\n");

	return 0;
}
