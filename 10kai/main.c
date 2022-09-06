#include <stdio.h>
#include "data.h"
#include "read_write.h"

double scores[5][3];
double averages[100];

int main(void)
{
    /* 教科点を読み込みます */
    read_scores("scores.txt");
    /* 平均点を計算します */
    calc_averages();
    /* 正常終了します */
    return 0;
}
