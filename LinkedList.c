#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void disp(struct Node* f){
    while(f!=NULL){
        printf("The element is %d\n",f->data);
        f=f->next;
    }
}
int main(){
    struct Node *x,*p,*y,*t;
    x=(struct Node*)malloc(sizeof(struct Node));
    p=(struct Node*)malloc(sizeof(struct Node));
    y=(struct Node*)malloc(sizeof(struct Node));
    t=(struct Node*)malloc(sizeof(struct Node));
    x->data=1;
    x->next=p;
    p->data=2;
    p->next=y;
    y->data=3;
    y->next=t;
    t->data=4;
    t->next=NULL;
    disp(x);
    return 0;
}