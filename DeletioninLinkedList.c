#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void disp(struct Node*x){
    while(x!=NULL){
        printf("The value of the element is:%d\n",x->data);
        x=x->next;
    }
}
struct Node*df(struct Node*x){
    struct Node*next=x;
    x=x->next;
    free(next);
    return x;
}
struct Node*dm(struct Node*x,int data){
    struct Node*m=x;
    int i=0;
    while(i<data-1){
        m=m->next;
        i++;
    }
    struct Node*o=m->next;
    m->next=o->next;
    free(o);
    return x;
}
struct Node*la(struct Node*x){
    struct Node*p=x;
    struct Node*q=x->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return x;
}
struct Node*vl(struct Node*x,int data){
    struct Node*p=x;
    struct Node*q=x->next;
    while(q->data!=data){
        q=q->next;
        p=p->next;
    }
    p->next=q->next;
    free(q);
    return x;
}
int main(){
    struct Node*x,*y,*z,*p;
    x=(struct Node*)malloc(sizeof(struct Node));
    y=(struct Node*)malloc(sizeof(struct Node));
    z=(struct Node*)malloc(sizeof(struct Node));
    p=(struct Node*)malloc(sizeof(struct Node));
    x->data=1;
    x->next=y;
    y->data=2;
    y->next=z;
    z->data=3;
    z->next=p;
    p->data=4;
    p->next=NULL;
    disp(x);
    x=df(x);
    disp(x);
    x=dm(x,1);
    disp(x);
    x=la(x);
    disp(x);
    x=vl(x,3);
    disp(x);
    return 0;
}