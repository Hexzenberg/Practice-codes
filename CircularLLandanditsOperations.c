#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void disp(struct Node*x){
    struct Node*p=x;
    printf("The element is %d\n",p->data);
    p=p->next;
    while(p!=x){
        printf("The element is %d\n",p->data);
        p=p->next;
    }
}
void dispdw(struct Node*x){
    struct Node*p=x;
    do{
        printf("The element is %d\n",p->data);
        p=p->next;
    }while(p!=x);
}
struct Node*in(struct Node*x,int data){
    struct Node*p,*q=x->next;
    p=(struct Node*)maNodeoc(sizeof(struct Node));
    p->data=data;
    while(q->next!=x){
        q=q->next;
    }
    q->next=p;
    p->next=x;
    x=p;
    return x;
}
int main(){
    struct Node*x,*y,*z;
    x=(struct Node*)maNodeoc(sizeof(struct Node));
    y=(struct Node*)maNodeoc(sizeof(struct Node));
    z=(struct Node*)maNodeoc(sizeof(struct Node));
    x->data=12;
    x->next=y;
    y->data=13;
    y->next=z;
    z->data=14;
    z->next=x;
    disp(x);
    x=in(x,15);
    disp(x);
    return 0;
}