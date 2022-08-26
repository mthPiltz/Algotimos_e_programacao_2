#include <stdio.h>
#include <string.h>

struct pessoa{
        char nome[11];
        double altura, peso, imc;
        char cpf[12];
        char sexo;
};

double calculaImc(double altura, double peso);
void buscar(char cpf[11], pessoa p[50], int i);

int main(){
    char cpf[12];
    int acao;
    int i = 0;
    pessoa pessoas[50];

    do {
        printf("Digite:\n1-> Para cadastrar;\n2-> Para sair.\n");
        scanf("%d", &acao);
        if(acao == 2 || i == 49){
            break;
        }
        else{
            printf("Informe os seguintes dados em ordem\nNome:\nAltura:\nPeso:\nCpf:\nSexo (m/f):\n");
            scanf("%s %lf %lf %s %c",   &pessoas[i].nome, 
                                        &pessoas[i].altura,
                                        &pessoas[i].peso,
                                        &pessoas[i].cpf,
                                        &pessoas[i].sexo
                                        );
            pessoas[i].nome[11] = '\0';
            pessoas[i].cpf[12] = '\0';
            pessoas[i].imc = calculaImc(pessoas[i].altura, pessoas[i].peso);
        }
        i++;
    } while(true);
    i = 0;

    do {
        printf("Digite:\n1-> Para buscar pelo CPF\n2-> Para sair\n");
        scanf("%d", &acao);
        if(acao == 2){
            break;
        }
        else if (acao == 1){
            scanf("%s", &cpf);
            cpf[12] = '\0';
            buscar(cpf, pessoas, i);
        }
    } while (true);
}

double calculaImc(double altura, double peso){
    return peso / (altura * altura);
}

void buscar(char cpf[11], pessoa p[50], int i){
    for(int j = 0; j <= i; j++){
        if(strcmp(cpf, p[j].cpf) == 0){
            printf("Teste");
        }
    }
}