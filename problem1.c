#include <stdio.h>
#include <math.h>

struct triangle {
    double a,b,c;
};

double calculate_length(struct triangle);
double calculate_area(struct triangle);

int main(){
    struct triangle t;
    double area;

    printf("三角形の三篇の長さを入力: ");
    scanf("%lf %lf %lf",&t.a,&t.b,&t.c);

    area = calculate_area(t);
    printf("三角形の面積 = %lf\n",area);

    return 0;
}

double calculate_length(struct triangle t){
    double length;
    length = t.a + t.b + t.c;

    return length;
}

double calculate_area(struct triangle t){
    double area;
    double s;

    s = calculate_length(t);
    area = sqrt((s-t.a)*(s-t.b)*(s-t.c));

    return area;
}