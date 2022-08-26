#include <stdio.h>

int main(){
    bool vazio = true;
    int quan_prog1;
    scanf("%d", &quan_prog1);
    int alunos_prog1[quan_prog1];
    for(int i = 0;i < quan_prog1;i++){
        scanf("%d", &alunos_prog1[i]);
    }

    int quan_so;
    scanf("%d", &quan_so);
    int alunos_so[quan_so];
    for(int i = 0;i < quan_so;i++){
        scanf("%d", &alunos_so[i]);
    }
    for(int i = 0; i < quan_prog1; i++){
        for(int j = 0; j < quan_so;j++){
            if(alunos_so[j] == alunos_prog1[i]){
                printf("%d ", alunos_prog1[i]);
                vazio = false;
            }
        }
    }

    if(vazio){
        printf("vazia");
    }
}

