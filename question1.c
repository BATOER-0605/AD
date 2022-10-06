#include <stdio.h>

void bmi_and_apw(double,double,double *,double *);

int main(){
    double height,weight;
    double bmi,apw;

    printf("身長を入力: ");
    scanf("%lf",&height);
    printf("体重を入力: ");
    scanf("%lf",&weight);

    bmi_and_apw(height,weight,&bmi,&apw);

    printf("BMI = %lfです\n",bmi);
    printf("適正体重 = %lfです\n",apw);

    return 0;

}

void bmi_and_apw(double height,double weight,double *bmi,double *apw){
    *bmi = weight / height / height;
    *apw = height * height * 22;
}