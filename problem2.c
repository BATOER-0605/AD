#include <stdio.h>
#include <math.h>

struct point{
    double x,y;
};

struct rect{
    struct point p1;
    struct point p2;
};

double calculate_length(struct rect *);

int main(){
    struct rect r;
    double length;

    printf("長方形の左下の点を入力: ");
    scanf("%lf %lf",&r.p1.x,&r.p1.y);

    printf("長方形の右上の点を入力: ");
    scanf("%lf %lf",&r.p2.x,&r.p2.y);

    length = calculate_length(&r);
    printf("長方形の対角線長 = %lf\n",length);

    return 0;
}

double calculate_length(struct rect *rp){
    double dx;
    double dy;
    double length;

    dx = rp->p2.x - rp->p1.x;
    dy = rp->p2.y - rp->p1.y;

    length = sqrt(dx*dx+dy*dy);

    return length;

}