#include <stdio.h>
#define NOSTU 5
#define NOSUB 3

extern double scores[NOSTU][NOSUB];
extern double averages[NOSTU];

void print_scores(void)
{
/* カウンタ変数 */
int i;
/* 教科点を表示します */
printf("****␣教科点␣****\n");
for (i = 0; i < NOSTU; i++) {
printf("出席番号%d:␣%d␣%d␣%d\n",
i + 1, scores[i][0], scores[i][1], scores[i][2]);
}
}

void print_averages(void)
{
    /* カウンタ変数 */
    int i;
    /* 平均点を表示します */
    printf("\n****␣平均点␣****\n");
    for (i = 0; i < NOSTU; i++) {
    printf("出席番号%d:␣%lf\n", i + 1, averages[i]);
    }
}