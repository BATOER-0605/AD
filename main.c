#include <stdio.h>

void bubble_sort(int a[],int n){
    int i,j;

    int times=1;

    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            if(a[j-i]>a[j]){
                swap_data(a,j-1,j);
            }
            print_data(times,a,n);
            times++;
        }
        printf("\n");
    }
}