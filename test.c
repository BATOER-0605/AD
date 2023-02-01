#include <stdio.h>

struct  point{
    double x,y;
};

int main(){
    struct point a[] ={{1,2},{3,4},{5,6},{7,8},{9,0}};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%f %f\n",a[i].x,a[i].y);
    }

    return 0;
}