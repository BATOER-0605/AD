#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct customer{
    char *name;
    struct customer *next;
};

struct customer *create_node(char *);
struct customer *get_tail(struct customer *);
void enqueue(char *,struct customer *);
struct customer *dequeue(struct customer *);

int main(){
    int i;

    struct customer *c;
    struct customer *q;

    q=create_node("ダミー");

    enqueue("佐藤",q);
    enqueue("鈴木",q);
    enqueue("山田",q);

    printf("\n");
    for(i=0;i<3;i++){
        c = dequeue(q);

        free(c->name);
        free(c);
    }

    free(q->name);
    free(q);

    return 0;
}

struct customer *create_node(char *name){
    struct customer *c;
    c = (struct customer*)malloc(sizeof(struct customer *));

    c->name = (char *)malloc(strlen(name)+1);
    strcpy(c->name,name);
    c->next = NULL;

    printf("%sさんが来店しました\n",c->name);
    return c;
}

struct customer *get_tail(struct customer *c){
    if(c->next!=NULL){
        return get_tail(c->next);
    }
    else{
        return c;
    }
}

void enqueue(char *name,struct customer *q){
    struct customer *c;
    struct customer *tail;
    c = create_node(name);
    tail = get_tail(q);
    tail->next=c;

    printf("%sさんが列に並んだ\n",c->name);
}

struct customer *dequeue(struct customer *q){
    struct customer *head;
    struct customer *second;

    head = q->next;

    if(head != NULL){
        second = head->next;
        q->next = second;
        head->next = NULL;

        printf("%sさんが支払った\n",head->name);
    }
    return head;
}