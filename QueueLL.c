#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    struct node*n;
}typedef node;
void disp(node*f){
    if(f==NULL)printf("The queue is empty.\n");
    else{
        node*p=f;
        while(p){printf("The element is: %d\n",p->a);p=p->n;}
    }
}
void eq(node**f,node**r,int v){
    node*p=malloc(sizeof(node));
    if(p==NULL)printf("The queue is full.\n");
    else{
        p->a=v;
        p->n=NULL;
        if(*f==NULL)*f=*r=p;
        else{(*r)->n=p;*r=p;}
    }
}
void dq(node**f){
    if(f==NULL)printf("Nothing present in the queue.\n");
    else{node*p=*f;*f=(*f)->n;free(p);}
}
int main(){
    node*f=NULL,*r=NULL;
    int n,a;
    printf("Enter the number of elements of the queue:\n");
    scanf("%d",&n);
    printf("Enter the elements of the queue:\n");
    while(n--){scanf("%d",&a);eq(&f,&r,a);}
    printf("The queue is:\n");
    disp(f),dq(&f);
    printf("The queue after dequeuing is:\n");
    disp(f);
    return 0;
}