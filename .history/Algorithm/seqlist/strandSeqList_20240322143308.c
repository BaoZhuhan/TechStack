#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define elementType int
#define MAXSIZE INT_MAX  
typedef int position;

typedef struct Lnode *ptrtolnode;

struct Lnode{
    elementType data[MAXSIZE];
    position last;
};

typedef ptrtolnode list;

list makeEmpty(){
    list L;
    L = (list*)malloc(sizeof(struct Lnode));
    L->last = -1;
    return L;
}

#define ERROR -1

position find(list L , elementType x){
    position i = 0 ;
    while(i <= L->last && L->data[i] != x){
        i++;
    }
    if(i > L->last) return ERROR;
    else return i;
}

bool insert(list L , elementType x , int i ){
    position j;

    if(L->last == MAXSIZE-1) {return false ;}
    if(i < 1 || i>L->last+2) {return false ;}

    for(j = L->last ; j >= i - 1 ; j--) {L->data[j+1] = L->data[j]; }

    L->data[i-1] = x;
    L->last++;
    return true;
}

bool delete(list L , int i ){
    position j;

    if(i<1 || i>L->last+1){
        return false;
    }

    for(j = i  ; j <= L -> last ; j++) {L -> data[j-1] = L->data[j] ;}
    L->last--;
    return true;
}


int main(){
    int T = 1;
    while(T--) run();
    return 0;
}