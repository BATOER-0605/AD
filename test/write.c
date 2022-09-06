#include <stdio.h>
#include "data.h"

void write_data(char *file_name){
    FILE *fp;
    fp = fopen(file_name, "w");
    fprintf(fp, "%d␣%d␣%d\n", data[0], data[1], data[2]);
    fclose(fp);
}