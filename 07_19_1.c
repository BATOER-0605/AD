#include <stdio.h>
#define NOSTU 5
#define NOSUB 3

double scores[NOSTU][NOSUB];
double averages[NOSTU];

extern double read_scores(char *file_name);
extern void calc_averages();

int main(void)
{
    /* 教科点を読み込みます */
    read_scores("scores.txt");
    /* 平均点を計算します */
    calc_averages();
    /* 正常終了します */
    return 0;
}
