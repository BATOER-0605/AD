#include <stdio.h>
#define NOSTU 5
#define NOSUB 3

extern double scores[NOSTU][NOSUB];
extern double averages[NOSTU];
extern double print_scores();
extern double print_averages();

double read_scores(char *filename){
    /* カウンタ変数 */
    int i;
    /* 入力ファイルポインタ */
    FILE *input;
    /* 入力ファイルを開きます */
    input = fopen(file_name, "r");
    /* 入力ファイルから各学生の教科点を読み込みます */
    for (i = 0; i < NOSTU; i++) {
    fscanf(input, "%d␣%d␣%d",
    &scores[i][0], &scores[i][1], &scores[i][2]);
    }
    /* 入力ファイルを閉じます */
    fclose(input);
    /* 教科点を表示します */
    print_scores();
}

void calc_averages(void)
{
    /* カウンタ変数 */
    int i, j;
    /* 平均点を計算します */
    for (i = 0; i < NOSTU; i++) {
    /* 平均点を初期化します */
    averages[i] = 0;
    /* 合計点を計算します */
    for (j = 0; j < NOSUB; j++) {
    averages[i] += scores[i][j];
    }
    /* 合計点から平均点を計算します */
    averages[i] /= NOSUB;
    }
    /* 平均点を表示します */
print_averages();
}
