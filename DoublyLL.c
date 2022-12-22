#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*prev,*next;
};
void disp(struct Node*x){
    while(x!=NULL){
        printf("The element is %d\next",x->data);
        x=x->next;
    }
}
void dispr(struct Node*x){
    while(x!=NULL){
        printf("The element is %d\next",x->data);
        x=x->prev;
    }
}
int main(){
    struct Node*x,*y,*z;
    x=(struct Node*)malloc(sizeof(struct Node));
    y=(struct Node*)malloc(sizeof(struct Node));
    z=(struct Node*)malloc(sizeof(struct Node));
    x->data=1;
    x->prev=NULL;
    x->next=y;
    y->data=2;
    y->prev=x;
    y->next=z;
    z->data=3;
    z->prev=y;
    z->next=NULL;
    disp(x);
    dispr(z);
    return 0;
}