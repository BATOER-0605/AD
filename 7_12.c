#include <stdio.h>
int main(void)
{
/* 入力・出力ファイルポインタ */
FILE *input;
FILE *output;
/* 身長 [m] と体重 [kg] */
double height;
double weight;
/* BMI値 */
double bmi;
/* 入力ファイルを開きます (テキスト形式，読み込み) */
input = fopen("data.txt", "r");
/* 出力ファイルを開きます (テキスト形式，書き込み) */
output = fopen("bmi.txt", "w");
/* 入力ファイルを開けたかを確認します */
if (input == NULL) {
/* エラーメッセージを表示して終了します */
printf("data.txtがありません.\n");
return 1;
}
/* 身長と体重を入力ファイルから読み込みます */
fscanf(input, "%lf %lf", &height, &weight);
/* BMI値を計算します */
bmi = weight / height / height;
/* BMI値を出力ファイルへ書き込みます */
fprintf(output, "BMI = %lf\n", bmi);
/* 入力・出力ファイルを閉じます */
fclose(input);
fclose(output);
/* 正常終了します */
return 0;
}
