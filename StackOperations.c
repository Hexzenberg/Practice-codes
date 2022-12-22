#include<stdio.h>
#include<stdlib.h>
struct s{
    int b,t,*a;
};
int e(struct s*p){
    return((p->t==0)?1:0);
}
int f(struct s*p){
    return((p->t==p->b-1)?1:0);
}
void pu(struct s*p,int v){
    if(f(p))printf("Stack overflow, the value %d cannot be pushed into the stack.\n",v);
    else{
        p->t++;
        p->a[p->t]=v;
    }
}
void po(struct s*p){
    if(e(p))printf("Stack underflow, the stack cannot be poped.\n");
    else{
        int v=p->a[p->t];
        p->t--;
    }
}
int pe(struct s*p,int i){
    if(p->t-i+1<0)return -1;
    else return p->a[p->t-i+1];
}
int main(){
    struct s *p=(struct s*)malloc(sizeof(struct s));
    printf("Enter the size of the stack:");
    scanf("%d",&p->b);
    p->t=-1;
    p->a=(int*)malloc(p->b*sizeof(int));
    printf("Stack has been created.\n");
    printf("%d\n",e(p));
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p->b;i++){
        scanf("%d",&p->a[i]);
        p->t++;
    }
    printf("%d\n",f(p));
    for(int i=0;i<p->b;i++)printf("%d",p->a[i]);
    printf("\n");
    pu(p,6);
    for(int i=0;i<p->t+1;i++)printf("%d",p->a[i]);
    printf("\n");
    po(p);
    for(int i=0;i<p->t+1;i++)printf("%d",p->a[i]);
    printf("\n");
    for(int i=0;i<p->t+1;i++)printf("The value at position %d is %d\n",i+1,pe(p,(i+1)));
    return 0;
}