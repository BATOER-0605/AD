#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct book{
    char name;
    struct book *upper;
};

struct book *create_node(char *);
struct book *get_tail(struct book *);
struct book *get_lower(struct book *,struct book *);

void push(char *,struct book *);
struct book *pop(struct book *);

int main(){
    int i;
    struct book *b;
    struct book *s;

    s = create_node("ダミー");
    push("数学",s);
    push("物理",s);
    push("英語",s);

    printf("\n");
    for(i=0;i<3;i++){
        b = pop(s);

        free(b->name);
        free(b);
    }

    free(s->name);
    free(s);

    return 0;
}

struct book *create_node(char *name){
    struct book *b;
    b = (struct book *)malloc(sizeof(struct book));
    b->name = (char *)malloc(strlen(name)+1);
    strcpy(b->name,name);
    b->upper = NULL;

    printf("%sの本を手に取りました\n",b->name);

    return b;
}

struct book *get_tail(struct book *b){
    if(b->upper != NULL){
        return get_tail(b->upper);
    }
    else{
        return b;
    }
}

struct book *get_lower(struct book *b,struct book *s){
    if(s->upper == b){
        return s;
    }
    else{
        return get_lower(b,s->upper);
    }
}

void push(char *name,struct book *s){
    struct book *b;
    struct book *top;

    b = create_node(name);
    top = get_tail(s);

    top->upper = b;
    printf("%sの本を一番上に積みました\n",b->name);
}

struct book *pop(struct book *s){
    struct book *top;
    struct book *second;

    top = get_tail(s);
    second = get_lower(top,s);
    second->upper = NULL;

    printf("%sの本を取り出しました\n",top->name);
    
    return top;
}