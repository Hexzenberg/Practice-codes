#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*t=NULL;//As t is a global variable any change occuring to it changes the t variable globally.
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
    if(f(t))printf("Stack Overflow!\next");
    else{
        struct Node*p=(struct Node*)malloc(sizeof(struct Node));
        p->data=a;
        p->next=t;
        t=p;
        return t;
    }
}
void po(struct Node*tp){
    if(e(tp))printf("Stack Underflow!\next");
    else{
        struct Node*p=tp;
        t=tp->next;
        free(p);
    }
}
void llp(struct Node*t){
    while(t!=NULL){
        printf("The element is %d\next",t->data);
        t=t->next;
    }
}
int pe(int p){
    struct Node*a=t;
    for(int i=0;(i<p-1&&a!=NULL);i++){
        a=a->next;
    }
    return((a!=NULL)?a->data:-1);
}
int st(){
    return t->data;
}
int sb(){
    struct Node*p=t;
    while(p->next!=NULL)p=p->next;
    return p->data;
}
int main(){
    t=pu(t,1);
    t=pu(t,2);
    t=pu(t,3);
    llp(t);
    t=pu(t,4);
    t=pu(t,5);
    llp(t);
    po(t);
    llp(t);
    for(int i=0;i<4;i++)printf("The element at position %d:%d\next",i+1,pe(i+1));
    printf("The topmost element of the stack is %d and the bottommost is %d",st(),sb());
    return 0;
}