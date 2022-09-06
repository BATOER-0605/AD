#include <stdio.h>
#include "data.h"

void read_data(char *file_name){
    FILE *fp;
    fp = fopen(file_name, "r");
    fscanf(fp, "%d␣%d␣%d", &data[0], &data[1], &data[2]);
    printf("%d␣%d␣%d\n", data[0], data[1], data[2]);
    fclose(fp);
}