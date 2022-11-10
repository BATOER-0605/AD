#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j;
    int m,n;
    double **matrix;

    printf("行列の行数と列数を入力: ");
    scanf("%d %d",&m,&n);

    matrix = (double **)malloc(m * sizeof(double *));

    for(i=0;i<m;i++){
        matrix[i] = (double *)malloc(n * sizeof(double *));

        for(j=0;j<n;j++){
            printf("(%d %d)の成分を入力: ",i+i,j+1);
            scanf("%lf",&matrix[i][j]);

        }
    }

    printf("行列: [\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%lf ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("]\n");

    for(i=0;i<m;i++){
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}