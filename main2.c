#include <stdio.h>

void selection_sort(int [],int);
void swap_data(int [],int,int);
void print_data(int,int [],int);

int main(){
    int a[] ={9,5,2,7,1,0,6,4,3,8};

    int n =10;

    print_data(0,a,n);
    printf("\n");

    selection_sort(a,n);

    return 0;
}

void swap_data(int a[],int i,int j){
    int temp;
    temp = a[i];

    a[i]=a[j];
    a[j]=temp;
}

void selection_sort(int a[],int n){
    int i,j;
    int p;

    int times = 1;

    for(i=0;i<n;i++){
        p =i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[p]){
                p=j;
            }
        }

        swap_data(a,i,p);
        print_data(times,a,n);
        times++;

        printf("\n");
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