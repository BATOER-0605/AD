#include <stdio.h>

double area_of_cylinder(double rad,double hei);

int main(){
    double r,h;
    double area;

    printf("半径と高さを入力 : ");
    scanf("%lf,%lf",&r,&h);

    area = area_of_cylinder(r,h);

    printf("円柱の表面積 = %lf\n",area);
    return 0;
}

double area_of_cylinder(double rad,double hei){
    double pi = 3.141592;
    double area;

    area = rad *rad*pi*2;
    area+=2*rad*hei;

    return area;
}