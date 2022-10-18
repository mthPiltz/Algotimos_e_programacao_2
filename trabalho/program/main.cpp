#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * file;
    file = fopen("numero.txt", "r");
    int x, y, z;

    if(file == NULL){
        system("pause");
        return 0;
    }

    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("%i %i %i", x, y, z);
    fclose(file);
}