#include <stdio.h>
#include <stdlib.h>

struct point
    {
        /* data */
        double x,y;
    };

int main(){
    
    int i,j;
    int m;
    int *n;
    struct point **points;

    printf("多角形の個数を入力: ");
    scanf("%d",&m);

    points = (struct point **)malloc(m* sizeof(struct point *));
    n = (int *)malloc(m * sizeof(int));
    for (i=0;i<m;i++){
        printf("多角形%dの頂点の個数を入力: ",i+1);
        scanf("%d",&n[i]);

        points[i]=(struct point *)malloc(n[i] * sizeof(struct point));

        for(j=0;j<n[i];j++){
            printf("多角形%dの頂点%dのx,y座標を入力: ",i+1,j+1);
            scanf("%lf %lf",&points[i][j].x,&points[i][j].y);

        }
    }

    for(i=0;i<m;i++){
        printf("多角形%dの頂点:\n",i+1);
        for(j=0;j<n[i];j++){
            printf("(%lf %lf)\n",points[i][j].x,points[i][j].y);
        }
    }

    
}