#include <stdio.h>
#define N 10

int main(){

    int a,b,c;
    int i;
    int A[N];

    //配列に値をIN
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    //初めの値を入れる
    a=A[0];

    //計算
    for(i=0;i<N;i++){

        if(a>A[i]){
            //bにaの値をバックアップ
            b=a;
            a=A[i];
        }

    }


    printf("そのいち %d\n",a);
    printf("そのに %d\n",b);

}