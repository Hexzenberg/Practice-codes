#include<stdio.h>
#include<stdlib.h>
struct Circularqueue{
    int n,f,r,*a;
};
int e(struct Circularqueue*q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int f(struct Circularqueue*q){
    return(((q->r+1)%q->n==q->f)?1:0);
}
void eq(struct Circularqueue*q,int val){
    if(f(q))printf("This Queue is full");
    else{
        q->r=(q->r+1)%q->n;
        q->a[q->r]=val; 
    }
}
void dq(struct Circularqueue*q){
    if(e(q))printf("This Queue is empty");
    else q->f=(q->f+1)%q->n;
}
void pr(struct Circularqueue*p){
    int s=p->f;
    while(s!=p->r){s=(s+1)%p->n;printf("The element is: %d\n",p->a[s]);}
}
int main(){
    struct Circularqueue q;
    int b;
    printf("Enter the size of the queue(incremented by 1):\n");
    scanf("%d",&q.n);
    q.f=q.r=0;
    q.a=malloc(q.n*sizeof(int));
    printf("Enter the values of the Circular queue:\n");
    for(int i=0;i<q.n-1;i++){
        scanf("%d",&b);
        eq(&q,b);
    }
    pr(&q);
    dq(&q);
    dq(&q);
    dq(&q);
    pr(&q);
    eq(&q,45);
    eq(&q,45);
    eq(&q,45);
    pr(&q);
    if(e(&q))printf("Queue is empty\n");
    if(f(&q))printf("Queue is full\n");
    return 0;
}
