#include <stdio.h>

void simple_sort(int [],int);
void swap_data(int [],int,int);
void print_data(int,int [],int);

int main(){
    int a[] ={9,5,2,7,1,0,6,4,3,8};

    int n =10;

    print_data(0,a,n);
    printf("\n");

    simple_sort(a,n);

    return 0;
}

void swap_data(int a[],int i,int j){
    int temp;
    temp = a[i];

    a[i]=a[j];
    a[j]=temp;
}

void simple_sort(int a[],int n){
    int i,j;

    int times = 1;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap_data(a,i,j);
            }
        }

        print_data(times,a,n);
        times++;
    }
}

void print_data(int times,int a[],int n){
    int i;

    printf("%d th: [ ",times);

    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("]\n");
}