#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//番兵の話

#define MAX_NUMBER_OF_RECORDS 39

struct student{
    int id;
    char *name;
    char *kana;
};


int search_by_name(char *key,struct student *table,int n){
    int index=0;

    while((index<n) && (strcmp(table[index].name,key) != 0)){
        index++;
    }

    return index;
}

void insert_record(int id,char *name,char *kana,struct student *table,int index){
    table[index].id = id;

    table[index].name = (char *)malloc(strlen(name)+1);
    strcpy(table[index].name,name);

    table[index].kana = (char *)malloc(strlen(kana)+1);
    strcpy(table[index].kana,kana);
}

void delete_record(int index,struct student *table,int *n){
    int i;

    free(table[index].name);
    free(table[index].kana);

    for(i=index;i<(*n)-1;i++){
        table[i].id = table[i+1].id;
        table[i].name = table[i+1].name;
        table[i].kana = table[i+1].kana;
    }

    (*n)--;
}

void print_table(struct student *table,int n){
    int i;
    printf("学生数:%d\n",n);
    for(i=0;i<n;i++){
        printf("%d %s %s\n",table[i].id,table[i].name,table[i].kana);
    }
}

void create_table(char *file_name,struct student *table,int n){
    int i;
    int id;
    char name[50];
    char kana[50];

    FILE *fp = fopen("table.txt","r");

    for(i=0;i<n;i++){
        fscanf(fp,"%d %s %s",&id,name,kana);
        insert_record(id,name,kana,table,i);
    }
    fclose(fp);
}

int main(){
    struct student table[MAX_NUMBER_OF_RECORDS];

    int n=MAX_NUMBER_OF_RECORDS;

    int index;
    char name[50];

    create_table("table.txt",table,n);
    print_table(table,n);

    printf("\n氏名を入力: ");
    scanf("%s",name);

    index=search_by_name(name,table,n);

    if(index<n){
        printf("\n出席番号: %d\n名前: %s\nよみかな: %s\n",table[index].id,table[index].name,table[index].kana);
        printf("が見つかりました.\n");

        delete_record(index,table,&n);
        print_table(table,n);
    }
    else{
        printf("氏名: %s が見つかりません。\n",name);
    }
    
    return 0;
}