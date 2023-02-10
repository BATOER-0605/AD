#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_NUMBER_OF_RECORDS 40

struct student {
	int id;
	char* name;
	char* kana;
};

void c_t(char*, struct student*, int);
void p_t(struct student*, int);
int s_b_i(int, struct student*, int);
void i_r(int,char*,char*,struct student*,int);
void d_r(int, struct student*, int*);

int main() {
	struct student table[MAX_NUMBER_OF_RECORDS];
	int n = MAX_NUMBER_OF_RECORDS - 1;
	int index;
	int id;

	c_t("table.txt", table, n);
	p_t(table, n);
	printf("\n 出席番号: ");
	scanf("%d", &id);
	index = s_b_i(id, table, n);
	if (index < n) {
		printf("\n 番号: %d\n 氏名: %s\n ふりがな: %s\n", table[index].id,
			table[index].name, table[index].kana);
		printf("が見つかりました\n\n");

		d_r(index,table,&n);
		p_t(table,n);
	}
	else {
		printf("出席番号: %d が見つかりません\n", id);
	}
	
	return 0;
}

void c_t(char *file_name, struct student* table, int n) {
	int i;
	int id;
	char name[50];
	char kana[50];

	FILE* file = fopen(file_name, "rt");

	for (i = 0; i < n; i++) {
		fscanf(file, "%d %s %s", &id, name, kana);
		i_r(id, name, kana, table, i);
	}
	fclose(file);
}

void p_t(struct student* table, int n) {
	int i;
	printf("学生数: %d\n", n);
	for (i = 0; i < n; i++) {
		printf("%d %s %s\n", table[i].id, table[i].name, table[i].kana);
	}
}

int s_b_i(int key, struct student* table, int n) {
	int index = 0;
	table[MAX_NUMBER_OF_RECORDS - 1].id = key;

	while (key != table[index].id) {
		index++;
	}
	return index;
}

void i_r(int id, char* name, char* kana, struct student* table, int index) {
	table[index].id = id;
	table[index].name = (char*)malloc(strlen(name) + 1);
	strcpy(table[index].name, name);
	table[index].kana = (char*)malloc(strlen(kana) + 1);
	strcpy(table[index].kana, kana);
}

void d_r(int index, struct student* table, int* n) {
	int i;
	free(table[index].name);
	free(table[index].kana);
	for (i = index; i < (*n) - 1; i++) {
		table[i].id = table[i + 1].id;
		table[i].name = table[i + 1].name;
		table[i].kana = table[i + 1].kana;
	}
	(*n)--;
}