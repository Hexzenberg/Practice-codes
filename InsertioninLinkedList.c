#include<stdio.h>
#include<stdlib.h>
struct ll{
    int a;
    struct ll*n;
};
void disp(struct ll* f){
    while(f!=NULL){
        printf("The element is %d\n",f->a);
        f=f->n;
    }
}
struct ll* fi(struct ll *x,int a){
    struct ll*p=(struct ll*)malloc(sizeof(struct ll));
    p->n=x;
    p->a=a;
    return p;
}
struct ll* in(struct ll *x,int a,int b){
    struct ll*p=(struct ll*)malloc(sizeof(struct ll));
    struct ll*pp=x;
    int i=0;
    while(i<b){
        pp=pp->n;
        i++;
    }
    p->a=a;
    p->n=pp->n;
    pp->n=p;
    return x;
}
struct ll* en(struct ll *x,int a){
    struct ll*p=(struct ll*)malloc(sizeof(struct ll));
    struct ll*pp=x;
    while(pp->n!=NULL){
        pp=pp->n;
    }
    p->a=a;
    pp->n=p;
    p->n=NULL;
    return x;
}
struct ll* af(struct ll *x,struct ll* in,int a){
    struct ll*p=(struct ll*)malloc(sizeof(struct ll));
    p->n=in->n;
    p->a=a;
    in->n=p;
    return x;
}
int main(){
    struct ll *x,*p,*y,*t;
    x=(struct ll*)malloc(sizeof(struct ll));
    p=(struct ll*)malloc(sizeof(struct ll));
    y=(struct ll*)malloc(sizeof(struct ll));
    t=(struct ll*)malloc(sizeof(struct ll));
    x->a=1;
    x->n=p;    
    p->a=2;
    p->n=y;
    y->a=3;
    y->n=t;
    t->a=4;
    t->n=NULL;
    disp(x);
    x=fi(x,5);
    disp(x);
    x=in(x,6,3);
    disp(x);
    x=en(x,7);
    disp(x);
    x=af(x,y,8);
    disp(x);
    return 0;
}