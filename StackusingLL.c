#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
int e(struct Node*t){
    if(t==NULL)return 1;
    return 0;
}
int f(struct Node*t){
    struct Node*next=(struct Node*)malloc(sizeof(struct Node));
    if(next==NULL)return 1;
    return 0;
}
struct Node*pu(struct Node*t,int a){
    if(f(t))printf("Stack Overflow!");
    else{
        struct Node*p=(struct Node*)malloc(sizeof(struct Node));
        p->data=a;
        p->next=t;
        t=p;
        return t;
    }
}
void po(struct Node**t){
    if(e(*t))printf("Stack Underflow!\n");
    else{
        struct Node*p=*t;
        *t=(*t)->next;
        free(p);
    }
}
void llp(struct Node*t){
    while(t!=NULL){
        printf("The element is %d\n",t->data);
        t=t->next;
    }
}
int st(struct Node*t){
    return t->data;
}
int sb(struct Node*t){
    struct Node*p=t;
    while(p->next!=NULL)p=p->next;
    return p->data;
}
int pe(int p,struct Node*t){
    struct Node*a=t;
    for(int i=0;(i<p-1&&a!=NULL);i++){
        a=a->next;
    }
    return((a!=NULL)?a->data:-1);
}
int main(){
    struct Node*t=NULL;
    t=pu(t,1);
    t=pu(t,2);
    t=pu(t,3);
    llp(t);
    t=pu(t,4);
    t=pu(t,5);
    llp(t);
    po(&t);//& sign is to change the pointer t we can also do this if t was declared as a global variable.
    llp(t);
    for(int i=0;i<4;i++)printf("The element at position %d:%d\n",i+1,pe(i+1,t));
    printf("The topmost element of the stack is %d and the bottommost is %d",st(t),sb(t));
    return 0;
}