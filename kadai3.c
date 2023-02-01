#include <stdio.h>

struct  point{
    double x,y;
};

void simple_sort(struct point [],int);
void swap_data(struct point [],int,int);
void print_data(int,struct point [],int);


int main(){
    struct point a[] ={{1,2},{3,4},{5,6},{7,8},{9,0}};

    int n =5;

    print_data(0,a,n);
    printf("\n");

    simple_sort(a,n);

    return 0;
}

void swap_data(struct point a[],int i,int j){
    double tempx,tempy;
    tempx = a[i].x;
    tempy = a[i].y;

    a[i].x=a[j].x;
    a[i].y=a[j].y;
    a[j].x=tempx;
    a[j].y=tempy;
}

void simple_sort(struct point a[],int n){
    int i,j;

    int times = 1;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j].x<a[i].x){
                swap_data(a,i,j);
            }
            if(a[j].y<a[i].y){
                swap_data(a,i,j);
            }
        }

        print_data(times,a,n);
        times++;
    }
}

void print_data(int times,struct point a[],int n){
    int i;

    printf("%d th: [ ",times);

    for(i=0;i<n;i++){
        printf("%f ",a[i].x);
    }

    for(i=0;i<n;i++){
        printf("%f ",a[i].y);
    }

    printf("]\n");
}