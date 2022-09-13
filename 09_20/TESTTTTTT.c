#include <stdio.h>
/*
* 学生数
*/
#define NOSTU 5
/*
* 科目数
*/
#define NOSUB 3
/*
* 教科点配列
*/
int scores[NOSTU][NOSUB];
/*
* 平均点配列
*/
double averages[NOSTU];
/*
* 教科点を読み込みます．
*/
void read_scores(char *);
/*
* 平均点を計算します．
*/
void calc_averages(void);
/*
* 教科点を表示します．
*/
void print_scores(void);
/*
* 平均点を表示します．
*/
void print_averages(void);
/*
* main関数です．
*/
int main(void)
{
/* 教科点を読み込みます */
read_scores("scores.txt");
/* 平均点を計算します */
calc_averages();
/* 正常終了します */
return 0;
}
/*
* 教科点を読み込みます．
*/
void read_scores(char *file_name)
{
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
/*
* 平均点を計算します．
*/
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
/*
* 教科点を表示します．
*/
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
/*
* 平均点を表示します．
*/
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
