#include <stdio.h>

struct compromisso{
    int dia, mes, ano;
    char nomeCompromisso[11];
};

struct data{
    int mes, ano;
};

void lerCompromissos(compromisso c[5]);
void buscaCompromisso(int mes, int ano, compromisso c[5]);

int main(){
    int mes, ano;
    int i = 0;
    compromisso compromissos[5];
    data datas[10];
    lerCompromissos(compromissos);

    do{
        scanf("%d/%d", &mes, &ano);
        if(mes == 0 && ano == 0){
            break;
        }
        else{
            datas[i].mes = mes;
            datas[i].ano = ano; 
        }
        i++;
    }while (true);
    
    for(int j = 0;j < i; j++){
        buscaCompromisso(datas[j].mes, datas[j].ano, compromissos);
    }
}

void lerCompromissos(compromisso c[5]){
    for(int i = 0; i < 5;i++){
        scanf("%s", c[i].nomeCompromisso);
        scanf("%d/%d/%d", &c[i].dia, &c[i].mes, &c[i].ano);
    }
}

void buscaCompromisso(int mes, int ano, compromisso c[5]){
    for(int i = 0; i < 5;i++){
        if(c[i].mes == mes && c[i].ano == ano){
            printf("%s", c[i].nomeCompromisso);
            printf("\n");
        }
    }
}