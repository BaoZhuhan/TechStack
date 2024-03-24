#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define elementType int
#define M INT_MAX  

typedef struct Lnode{
    elementType data[M];
    int last;
}list;

list *init(){
    list *L;
    L = (list*)malloc(sizeof(struct Lnode));
    L->last = -1;
    return L;
}

int length(list *L){ return L->last+1;}

int find(list *L , elementType x){
    int i = 0 ;
    while(i <= L->last && L->data[i] != x){
        i++;
    }
    if(i > L->last) return -1;
    else return i;
}

int insert(list *L , elementType x , int i ){
    int j;

    if(L->last == M-1) { return 0 ;}
    if(i < 1 || i>L->last+2) { return 0 ;}

    for(j = L->last ; j >= i - 1 ; j--) { L->data[j+1] = L->data[j];}

    L->data[i-1] = x;
    L->last++;
    return 1;
}

int delete(list *L , int i ){
    int j;

    if(i<1 || i>L->last+1){
        return 0;
    }

    for(j = i  ; j <= L->last ; j++) { L->data[j-1] = L->data[j] ;}
    L->last--;
    return 1;
}


int main(){
    list *L = init();
    return 0;
}