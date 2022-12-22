#include<stdio.h>
#include<stdlib.h>
struct queue{
    int n,f,r,*a;
};
int fu(struct queue*q){
    return((q->r==q->n-1)?1:0);
}
int e(struct queue*q){
    return((q->r==q->f)?1:0);
}
void eq(struct queue*q,int v){
    if(fu(q))printf("The queue is full.");
    else q->a[q->r++]=v;
}
void pr(struct queue*p){
    int s=p->f;
    while(s!=p->r)printf("The element is: %d\n",p->a[s++]);
}
void dq(struct queue*q){
    if(e(q))printf("The queue is already empty.");
    else q->f++;
}
int main(){
    struct queue q;
    int b;
    printf("Enter the size of the queue:\n");
    scanf("%d",&q.n);
    q.f=q.r=-1;
    q.a=malloc(q.n*sizeof(int));
    printf("Enter the values of the queue:\n");
    for(int i=0;i<q.n;i++){
        scanf("%d",&b);
        eq(&q,b);
    }
    pr(&q);
    dq(&q);
    printf("The Queue after dequeueing:\n");
    pr(&q);
    return 0;
}