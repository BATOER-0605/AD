#include <stdio.h>

int main(){

    FILE *input;

    input = fopen("data.txt","r");

    if(input == NULL){
        printf("data.txtがありません\n");
        return 1;
    }

    fclose(input);

    return 0;
}