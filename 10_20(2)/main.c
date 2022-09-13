#include "data.h"
#include "read_write.h"

int main(void)
{
    double scores[NOSTU][NOSUB];
    double averages[100];
    /* 教科点を読み込みます */
    read_scores("scores.txt",scores);
    /* 平均点を計算します */
    calc_averages(scores,averages);
    /* 正常終了します */
    return 0;
}
