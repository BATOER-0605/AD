#include <stdio.h>
/*
* main関数です.
*/
int main(void){

    char c;
    short int s;
    int i;
    long int l;
    float f;
    double d;

    /* 変数のアドレスを表示します */
    printf("char型変数のアドレス: %p\n", &c);
    printf("short␣int型変数のアドレス: %p\n", &s);
    printf("int型変数のアドレス: %p\n", &i);
    printf("long␣int型変数のアドレス: %p\n", &l);
    printf("float型変数のアドレス: %p\n", &f);
    printf("double型変数のアドレス: %p\n", &d);
    
    /* 正常終了します */
    return 0;
}