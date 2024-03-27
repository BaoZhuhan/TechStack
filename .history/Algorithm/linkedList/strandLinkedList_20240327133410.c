#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int ElementType ;

typedef struct node {
    ElementType data;
    struct node *next;
}node;

struct node *head = NULL;

void output(){
    node *p = head;
    while(p != NULL) {
        printf("%d " , p->data);
        p = p->next ;
    }
}

void inserthead(ElementType data){
     node *lk = (node*)malloc(sizeof(node));
     lk->data = data;

     lk->next = head;

     head = lk;
}

void insertend(node *list){
    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }

    tmp->next = list;
}
void insert(node *list , ElementType data){
    node *lk = (node*)malloc(sizeof(node));
    lk->data = data;
    lk->next = list->next;
    list->next = lk;
}

void delhead(){
    head = head->next;
}

void delnode(int key){
    node *tmp = head ;
    node *pre = NULL;

    if(tmp != NULL && tmp->data == key) {
        head = tmp->next ;
        return ;
    }

    while(tmp != NULL && tmp->data != key){
        pre = tmp;
        tmp = tmp->next;
    }

    if(tmp == NULL) return ;

    pre->next = tmp->next;

    return ;
}

int search(int key){
    node *tmp = head ;

    while(tmp != NULL) {
        if(tmp->data == key) {
            return 1;
        } 
        tmp = tmp->next;
    }
    return 0;
}

