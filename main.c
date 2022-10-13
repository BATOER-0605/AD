#include <stdio.h>
/* 学生の氏名と得点をテキストファイルへ書き込みます. */
void write_name_and_scores(FILE *, char [], int, int, int);
/*
* main関数です．
*/
int main(void)
{
/* カウンタ変数 */
int i;
/* ファイルポインタ */
FILE *fp;
/* 氏名 */
char name[20];
/* 数学・物理・英語の得点 */
int math, phy, eng;
/* テキストファイルを開きます */
fp = fopen("scores.txt", "w");
for (i = 0; i < 3; i++) {
/* 学生の氏名をキー入力します */
scanf("%s", name);
/* 学生の数学・物理・英語の得点をキー入力します */
scanf("%d␣%d␣%d", &math, &phy, &eng);
/* 学生の氏名と得点をテキストファイルへ書き込みます */
write_name_and_scores(fp, name, math, phy, eng);
}
/* テキストファイルを閉じます */
fclose(fp);
/* 正常終了します */
return 0;
}
/*
* 学生の氏名と得点をテキストファイルへ書き込みます.
*/
void write_name_and_scores(FILE *fp, char name[], int math, int phy,
int eng)
{
fprintf(fp, "%s␣%d␣%d␣%d\n", name, math, phy, eng);
}