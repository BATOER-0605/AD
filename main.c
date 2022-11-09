#include <stdio.h>
#include <stdlib.h>

struct point {
    double x,y;
};

struct polygon
{
    int num;
    struct point *points;
};

struct polygon *make_polygon(void);

void read_points(struct polygon *);

double compute_area(struct polygon *);


int main(){
    struct polygon *p;
    double area;

    p=make_polygon();

    area = compute_area(p);
    printf("多角形の面積=%lf\n",area);

    free(p->points);
    free(p);

    return 0;
}


struct polygon *make_polygon(){
    struct polygon *p;
    p=(struct polygon *)malloc(sizeof(struct polygon ));

    printf("頂点の個数を入力: ");
    scanf("%d",&p->num);

    p->points = (struct point *)malloc(p->num * sizeof(struct point));

    read_points(p);

    return p;
}

void read_points(struct polygon *p){
    int i;

    for(i=0;i<p->num;i++){
        printf("%d番目の頂点を入力: ",i+1);
        scanf("%lf %lf",&p->points[i].x,&p->points[i].y);
    }
}

double compute_area(struct polygon *p){
    double area =0;
    //自分でこーでぃんぐ
    double area1 =0;
    double area2=0;

    for(int i=1;i<p->num;i++){
        area1 += p->points[i].x * p->points[i+1].y;
    }

    area2 += p->num * (area1) / 2;

    area = area2 * 1/2;

    return area;
}