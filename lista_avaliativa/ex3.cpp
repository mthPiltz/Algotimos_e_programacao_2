#include <stdio.h>

struct eletrodomestico{
    char nome[15];
    double potencia;
    double tempo;
};

double calculaConsumototal(eletrodomestico e[5], double tempo);
double calculaPorcentagem(double total, eletrodomestico e[5]);

int main(){
    eletrodomestico eletrodomesticos[5];
    int tempoLigado;
    double consumo;

    for(int i = 0; i < 5;i++){
        scanf("%s", eletrodomesticos[i].nome);
        scanf("%lf %lf", &eletrodomesticos[i].potencia, &eletrodomesticos[i].tempo);
    }
    scanf("%d", &tempoLigado);

    consumo = calculaConsumototal(eletrodomesticos, tempoLigado);
    printf("%.2lf", consumo * tempoLigado);
}

double calculaPorcentagem(double total, eletrodomestico e[5]){
    
}

double calculaConsumototal(eletrodomestico e[5], double tempo){
    double consumoCada[5];
    double resultado = 0;
    for(int i = 0; i < 5; i++){
        resultado = resultado + e[i].potencia * e[i].tempo;
    }
    // printf("%lf", &resultado);
    return resultado;
}