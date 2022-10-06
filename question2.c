#include <stdio.h>

void degree_to_radian(double *,double *,int);

int main(){
    int i;
    double degrees[5];
    double radians[5];

    for(i=0;i<5;i++){
        scanf("%lf",&degrees[i]);
    }
    degree_to_radian(degrees,radians,5);

    for(i=0;i<5;i++){
        printf("%lf deg = %lf rad\n",degrees[i],radians[i]);
    }

   return 0;
}

void degree_to_radians(double*degrees,double *radians,int n){
    int i;

    for(i=0;i<n;i++){
        *(radians + 1) = *(degrees + i) * 3.141592653 /180;
    }
}